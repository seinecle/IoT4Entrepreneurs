= IoT for entrepreneurs: faq
Clément Levallois <levallois@em-lyon.com>
2017-10-18
last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:

:title-logo-image: gephi-logo-2010-transparent.png[width="450" align="center"]

[.stretch]
image::EMLyon_logo_corp.png[align="center"]

==  'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

==  !
==== The screen shows a lot of white particles
==  The screen shows a lot of white particles

==  !
[.stretch]
image::pic-2.jpg[align=center]

==  !
Explanation: your sketch was not loaded to the object yet.

Solution: make sur you got the sketch to load to your object.

You know it has loaded successfully when the red line in the Arduino go to "100%"

==  !
==== "fatal error: Adafruit_SSD1306.h: No such file or directory"
==  "fatal error: Adafruit_SSD1306.h: No such file or directory"

==  !
Solution:

1. install the library from Sketch -> Include Library -> Manage Libraries: type SSD1306 in the search bar and find it.


IMPORTANT: In the list of SSD1306 Libraries, make sure you install the one by *Adafruit*, not Acrobotic.

2. Import this lirary in your sketch via Sketch -> Include Libraries -> find it in the list!!


==  !
==== "cannot access COM1 / espcomm_open failed"
==  cannot access COM1 / espcomm_open failed

==  !
Solution:

==  !
*if you are on a Mac*:

a. New / recent Mac only: make sure you installed this:

https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers

b. Older Mac (Mac OS 10.12.6 or older): make sure you installed this instead:

http://community.silabs.com/t5/Interface-Knowledge-Base/Legacy-OS-Software-and-Driver-Packages/ta-p/182585

c. All Macs: in the Arduino IDE, with your sketch open, go to `Tools` and put your mouse above (don't click!) `Port:`. Then select:

-> In the list of ports, select the one that has "/dev/cu.SLAB_USBtoUART" in the name


*if you are on a PC*:

-> In the list of ports, try selecting each port (COM1, COM17... you might have different ones) until the error disappears.

==  !
==== Upload complete but nothing on screen
==  Upload complete but nothing on screen

==  !
*Possible causes:*

==  !
*the wifi ssid is invalid:* the name of the ssid you are using includes spaces or special characters (like: "my super wifi")*

-> Use a wifi ssid and passwords which are simpler (like: "mysuperwifi")

==  !
*If you are on a Mac Computer*, the adaptator for USB cables (white cable on the picture below) does not work:

==  !
[.stretch]
image::pic-1.jpg[align=center]

==  !
-> try changing the usb cable. Some cables don't work.



==  The end
==  !

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
pass:[    <!-- Start of StatCounter Code for Default Guide -->
    <script type="text/javascript">
        var sc_project = 11410058;
        var sc_invisible = 1;
        var sc_security = "11410058";
        var scJsHost = (("https:" == document.location.protocol) ?
            "https://secure." : "http://www.");
        document.write("<sc" + "ript type='text/javascript' src='" +
            scJsHost +
            "statcounter.com/counter/counter.js'></" + "script>");
    </script>
    <noscript><div class="statcounter"><a title="site stats"
    href="http://statcounter.com/" target="_blank"><img
    class="statcounter"
    src="//c.statcounter.com/11410058/0/11410058/1/" alt="site
    stats"></a></div></noscript>
    <!-- End of StatCounter Code for Default Guide -->]
