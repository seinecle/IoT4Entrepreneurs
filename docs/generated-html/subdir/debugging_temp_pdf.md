= Steps to debug
Clément Levallois <levallois@em-lyon.com>
2018-10-25
last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:
:sourcedir: ../../../main/java

:title-logo-image: gephi-logo-2010-transparent.png[width="450" align="center"]

image::EMLyon_logo_corp.png[align="center"]
{nbsp} +

//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

== Initial state: the screen shows white particle
image::pic-2.jpg[align=center]
{nbsp} +

== Steps to debug

=== 1. Press the reset button and retry download
The reset button is situated on the screen. Press it for 5 seconds at least.

=== 2. Open the blink sketch and download it to the Arduino
This sketch can be found in Files -> Examples -> Basics -> blink

If it works, you should see a tiny red led blinking at one second interval on your device. This helps testing the fact that the Arduino is not broken.

=== 3. Check the soldering of the screen visually
Solder material on pins should not touch each other.

=== 4. Try connecting to a different wifi shared connection
The name of the wifi (the "ssid" should not include special characters or space)

=== 5. Check the soldering of the screen visually
Solder material on pins should not touch each other.

=== 6. Make sure your token for the AQI website works
Enter this link on a browser. *Replace the value for the token by the token you got from the website*:

http://api.waqi.info/search/?token=ce3c07596e818c0ef99c070ab4464b7abc2f228d&keyword=Saint-Etienne

(so in the line above, replace `ce3c07596e818c0ef99c070ab4464b7abc2f228d` by your own token)

If you

Explanation: your sketch was not loaded to the object yet.

Solution: make sur you got the sketch to load to your object.

You know it has loaded successfully when the red line in the Arduino go to "100%"

== 2. "DynamicJsonBuffer not declared in this scope"
This error appears when you compile the sketch, you can not download the sketch to the board.

Solution: you installed a version of the library ArduinoJson which is *too recent and not stable*

- close your Arduino IDE.
- Uninstall the ArduinoJson library by https://stackoverflow.com/a/16754519/798502[following these steps].
- Install the correct version of the ArduinoJson library, which should be annotated as *stable*.
As of September 2018, the latest stable version is *5.13.2*.
To find this version, go to Sketch -> Include Library -> Manage Libraries. Type "ArduinoJson" in the search bar.
Before installing it, make sure to select version *5.13.2* in the drop down menu!
- Relaunch the Arduino IDE to make sure the changes take effect.

== 3. "fatal error: Adafruit_SSD1306.h: No such file or directory"
Solution:

[start=1]
1. install the library from Sketch -> Include Library -> Manage Libraries: type SSD1306 in the search bar and find it.

IMPORTANT: In the list of SSD1306 Libraries, make sure you install the one by *Adafruit*, not Acrobotic.

[start=2]
2. Import this lirary in your sketch via Sketch -> Include Libraries -> find it in the list!!

== 4. "cannot access COM1 / espcomm_open failed"
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

== 5. Upload complete but nothing on screen

*Possible causes:*

*the wifi ssid is invalid:* the name of the ssid you are using includes spaces or special characters (like: "my super wifi")*

-> Use a wifi ssid and passwords which are simpler (like: "mysuperwifi")

*If you are on a Mac Computer*, the adaptator for USB cables (white cable on the picture below) does not work:

image::pic-1.jpg[align=center]
{nbsp} +

-> try changing the usb cable. Some cables don't work.

== The end

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
