# Aiuta Fabbro

**Autore:** Giacomo Castellana

**Descrizione:** Il progetto "Aiuta Fabbro" consiste in un sistema che monitora la temperatura di vari tipi di acciaio durante il processo di lavorazione e tempra. 

Utilizza una termocoppia tipo K per misurare la temperatura, visualizzando i dati su uno schermo OLED e accendendo LED per indicare le diverse fasi (freddo, lavorazione, tempra) in base alla temperatura.  
È presente anche un encoder rotativo per selezionare il tipo di metallo e un sensore di suono che conta il numero di martellate ricevute dal pezzo.  
Ad ogni misurazioen manda su un piccolo web-server le informazioni di:  
* data e ora
* tipo di metallo
* fase (freddo, lavorazione e tempra)
    * in caso di lavorazione segna il numero di martellate ricevute dal pezzo

Il sistema è basato su una board ESP32.

**Link a repo:** 

**Licenza scelta:** MIT License  

**Data *indicativa* di presentazione:** Settembre 2025
