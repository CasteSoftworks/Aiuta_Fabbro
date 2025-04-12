# Aiuta Fabbro

**Autore:** Giacomo Castellana

**Descrizione:** Il progetto "Aiuta Fabbro" consiste in un sistema che monitora la temperatura di vari tipi di acciaio durante il processo di lavorazione e tempra. 

Utilizza una termocoppia tipo K per misurare la temperatura, visualizzando i dati su uno schermo OLED e accendendo LED per indicare le diverse fasi (freddo, lavorazione, tempra) in base alla temperatura.  
Le fasi dipendono dal metalloo scelto tramite un'encoder rotativo.  
In caso di fase di lavorazione un modulo audio segna le martellate date fino alla misurazione successiva.

Ad ogni misurazione manda su un piccolo web-server le informazioni di:  
* data e ora
* tipo di metallo
* fase (freddo, lavorazione e tempra)
    * in caso di lavorazione il numero di martellate ricevute dal pezzo

Il sistema è basato su una board ESP32.

**Link a repo:** https://github.com/CasteSoftworks/Aiuta_Fabbro

**Licenza scelta:** MIT License  

**Data *indicativa* di presentazione:** Settembre 2025
