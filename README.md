# wordclock_mini
Wordclock Mini design and code for an ESP8266 and MAX7219 LED-Matrix based word clock and smart button/display
See the 3D print at 
- Thingiverse for printing and some pictures https://www.thingiverse.com/thing:3548159
- Tinkercad for modding https://www.tinkercad.com/things/hlfuiNyPEjO
# english
This project will provide all files to make a nice small "mini-wordclock" (so far german layout only, but subject to change...). It sits on your desktop in a small, pc-like enclosure and has an 8x8 matrix display (behind the characters) and a fake keyboard which provides to buttons and a full color LED, all driven by a small Wemos D1 mini board.

The device's software is based on the homie MQTT IoT framework and will therefore connect to a configurable MQTT server. While its main purpose is to show the time, it additionally acts as an IoT smart device. It will send its inputs (both buttons support the following events: single click, double click, long pressed) to the MQTT server and it shows (ASCII) text messages send to a specific topic and may also use its color led as a flashing colorful notifier. Secret plus: it can act as a point-to-point messenger tool by providing a webserver to send messages to one configurable partner display, as well as it shows that one's online status. This function was made for my daughter and her friend. Be aware, that all messages are unencrypted and may especially be read by MQTT server and network admins.

After all, it's just a typical geek toy ;-)

Please don't blame me for the bad code quality. I am not a "native" C programmer, so the code is a quick and dirty solution with a strong emphesis on dirty... Feel free to add new stuff or increase quality. I will happily integrate your updates.

I will soon provide access to all neccessary files for 3D printing, a building manual and an operations manual.

# german
Diese Projekt bringt alles mit, was man für eine kleine "Mini-Wordclock" benötigt. Bisher ist das Layout nur auf deutsch integriert, aber das soll sich in Zukunft noch ändern. Im Wesentlichen handelt es sich um ein kleines, einem alten PC nachempfundenen Gehäuse in dem eine 8x8 LED-Matrix zusammen mit einem Fake-Keyboard (mit zwei echten Tastern) und einer RGB-LED wohnen und von einem ebenfall integrierten Wemos D1 Mini gesteuert werden.

Die Software basiert auf dem Homie IoT Framework, weshalb die Uhr im Betrieb gerne einen MQTT-Server haben möchte. Der Betrieb ohne ist bisher nicht vorgesehen, was auch einen weiteren Grund hat: Normalerweise soll sie nur "stilvoll" die aktuelle Uhrzeit anzeigen, aber letztlich ist sie ein richtiges kleines IoT-Gerät ("Smart Device"). Alle Eingaben (beide Knöpfe senden Events für Klick, Doppelklick und Halten) werden als Events an den MQTT-Server gesendet. Außerdem kann es eingehende ASCII-Nachrichten als Scrolltext anzeigen und mit einer RGB-LED auf weitere Nachrichten reagieren. Als Geheimfunktion ist zusätzlich ein Punkt-zu-Punkt Messenger eingebaut um mit einem konfigurierbaren Partnerdisplay direkt Nachrichten und den Online-Status auszutauschen. Das habe ich meiner Tochter und ihrem Freund als Add-on gegönnt, allerdings gleich der Hinweis zur Sicherheit: es gibt keine - alles Klartext, also bitte keine Gesundheitsakten oder Staatsgeheimnisse transporieren, es sind eher elektronische Postkarten.

Alles in Allem handelt sich also um ein klassisches Spielzeug für Geeks.

Die Code Qualität lässt sicher zu wünschen übrig - ich bin da kein Profi, insbesondere nicht mit C. Ich gehe davon aus, dass noch viele Fehler enthalten sind und bin für alle qualitäts- oder funktionsverbessernden Vorschläge offen.

Recht bald werde ich hier auch die notwendigen Dateien für den 3D Druck sowie die Anleitungen für Aufbau und Betrieb veröffentlichen.
