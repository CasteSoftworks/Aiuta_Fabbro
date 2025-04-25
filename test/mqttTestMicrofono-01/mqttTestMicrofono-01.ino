#include <ESP8266WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"
#include "secrets.h"

#define MQTT_SERVER "192.168.1.15"  // hostname -I
#define MQTT_PORT 1883

int pinD=5;


WiFiClient client;

Adafruit_MQTT_Client mqtt(&client, MQTT_SERVER, MQTT_PORT);

Adafruit_MQTT_Publish mart_pub = Adafruit_MQTT_Publish(&mqtt, "fabbro/test");

void connectToWiFi() {
  Serial.print("Connessione a WiFi");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connesso");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void connectToMQTT() {
  int8_t ret;
  while ((ret = mqtt.connect()) != 0) {
    Serial.print("Connessione MQTT fallita, rc=");
    Serial.print(ret);
    Serial.println(" riprovo in 5s");
    mqtt.disconnect();
    delay(5000);
  }
  Serial.println("MQTT connesso");
}

void setup() {
  Serial.begin(115200);
  connectToWiFi();
  connectToMQTT();
}

void loop() {
  if (!mqtt.connected()) {
    connectToMQTT();
  }
  mqtt.processPackets(10);
  mqtt.ping();

  if(digitalRead(pinD)==HIGH){
    Serial.println("Martellata");
    if(!mart_pub.publish("Martellata")){
      Serial.println("errore");
    }
  }
  
  delay(25);
  
}
