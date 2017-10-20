= IoT for entrepreneurs: faq
Clément Levallois <levallois@em-lyon.com>
2017-10-18

last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:
:sourcedir: ../../../main/java

:title-logo-image: gephi-logo-2010-transparent.png[width="450" align="center"]

image::EMLyon_logo_corp.png[align="center"]

//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

//ST: !
==== The screen shows a lot of white particles
//ST: The screen shows a lot of white particles

//ST: !
image::pic-2.jpg[align=center]

//ST: !
Explanation: your sketch was not loaded to the object yet.

Solution: make sur you got the sketch to load to your object.

You know it has loaded successfully when the red line in the Arduino go to "100%"

//ST: !
==== "Error missing file SSD1306"
//ST: "Error missing file SSD1306"

//ST: !
Solution:

1. install the library from Sketch -> Include Libraries -> Manage Libraries...
2. Import this lirary in your sketch via Sketch -> Include Libraries -> find it in the list!!


//ST: !
==== "cannot access COM1 / espcomm_open failed"
//ST: cannot access COM1 / espcomm_open failed

//ST: !
Solution:

In the Arduino IDE, with your sketch open, go to Tools -> Ports.

//ST: !
*if you are on a Mac*:

-> In the list of ports, select the one that has "CP2104" in the name

*if you are on a PC*:

-> In the list of ports, try selecting each port (COM1, COM17... you might have different ones) until the error disappears.

//ST: !
==== Upload complete but nothing on screen
//ST: Upload complete but nothing on screen

//ST: !
*the wifi ssid you are using incudes spaces or special characters (like: "my super wifi")*

-> Use a wifi ssid and passwords which are simpler (like: "mysuperwifi")

//ST: !
*If you are on a Mac Computer, the adaptator for USB cables does not work*:

//ST: !
image::pic-2.jpg[align=center]

//ST: !
-> try changing the usb cable. Some cables don't work.



== The end
//ST: The end
//ST: !

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
