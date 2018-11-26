= IoT for entrepreneurs: faq
Clément Levallois <levallois@em-lyon.com>
2017-10-18
last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:
:sourcedir: ../../../main/java

image::EMLyon_logo_corp.png[align="center"]
{nbsp} +

//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

== 1. The screen shows nothing
image::pic-2.jpg[align=center]
{nbsp} +

Explanation: your sketch was not loaded to the object yet.

Solution: make sur you got the sketch to load to your object.

You know it has loaded successfully when the red line in the Arduino go to "100%"


== 2. The screen shows a lot of white particles
image::pic-2.jpg[align=center]
{nbsp} +

Explanation: your sketch was not loaded to the object yet.

Solution: make sur you got the sketch to load to your object.

You know it has loaded successfully when the red line in the Arduino go to "100%"

== 3. "DynamicJsonBuffer not declared in this scope"
This error appears when you compile the sketch, you can not download the sketch to the board.

Solution: you installed a version of the library ArduinoJson which is *too recent and not stable*

- close your Arduino IDE.
- Uninstall the ArduinoJson library by https://stackoverflow.com/a/16754519/798502[following these steps].
- Install the correct version of the ArduinoJson library, which should be annotated as *stable*.
As of September 2018, the latest stable version is *5.13.2*.
To find this version, go to Sketch -> Include Library -> Manage Libraries. Type "ArduinoJson" in the search bar.
Before installing it, make sure to select version *5.13.2* in the drop down menu!
- Relaunch the Arduino IDE to make sure the changes take effect.

== 4. "fatal error: Adafruit_SSD1306.h: No such file or directory"
Solution:

[start=1]
1. install the library from Sketch -> Include Library -> Manage Libraries: type SSD1306 in the search bar and find it.

IMPORTANT: In the list of SSD1306 Libraries, make sure you install the one by *Adafruit*, not Acrobotic.

[start=2]
2. Import this lirary in your sketch via Sketch -> Include Libraries -> find it in the list!!

== 5. "cannot access COM1 / espcomm_open failed"
Solution:

*if you are on a Mac*:

[start=1]
a. New / recent Mac only: make sure you installed this:

https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers

[start=2]
b. Older Mac (Mac OS 10.12.6 or older): make sure you installed this instead:

http://community.silabs.com/t5/Interface-Knowledge-Base/Legacy-OS-Software-and-Driver-Packages/ta-p/182585

[start=3]
c. All Macs: in the Arduino IDE, with your sketch open, go to `Tools` and put your mouse above (don't click!) `Port:`. Then select:

-> In the list of ports, select the one that has "/dev/cu.SLAB_USBtoUART" in the name


*if you are on a PC*:

-> In the list of ports, try selecting each port (COM1, COM17... you might have different ones) until the error disappears.

== 6. Upload complete but nothing on screen

*Possible causes:*

*the wifi ssid is invalid:* the name of the ssid you are using includes spaces or special characters (like: "my super wifi")*

-> Use a wifi ssid and passwords which are simpler (like: "mysuperwifi")

*If you are on a Mac Computer*, the adaptator for USB cables (white cable on the picture below) does not work:

image::pic-1.jpg[align=center]
{nbsp} +

-> try changing the usb cable. Some cables don't work.

== 7. "Error de compilation pour carte la Generic ESP8266 Module" / ESP8266WiFi.h: No such file or directory

You did not select the correct card in the menu. Please go and select "Adafruit Huzzah ESP8266", like this:

image::pic.jpg[align=center]
{nbsp} +

== 8. "Please select a Port before upload"

You did not select a port in the Arduino menu.
Solution:

a. your object should be connected to the computer with the cable, otherwise the menu "port" will stay greyed out.
b. select a port in the menu, like this:

image::selecting_a_port.jpg[align=center]
{nbsp} +

If you are on a Mac and you don't see *"dev/SLAB_USBtoUART"* among the available ports, it means you did not install a driver.
Please install the driver following carefully the instructions https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/using-arduino-ide[on this page].

In particular, on this web page, don't forget to:

1. click on the green button to download the driver:

[link=https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers]
image::download_driver_button.png[align=center]
{nbsp} +

[start=2]
2. allow the driver to work on your Mac. It is explained on the web page, you should do:

image::adafruit_products_allow-silabs-kernel-driver.png[align="center"]
{nbsp} +

After all these steps you should be able to see *"dev/SLAB_USBtoUART"* in the list of available ports in the Arduino software. Select it.


== The end

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
