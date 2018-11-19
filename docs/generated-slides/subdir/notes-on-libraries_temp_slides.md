= Additional notes on libraries
== !
Clément Levallois <levallois@em-lyon.com>
2018-09-19
last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:

:title-logo-image: gephi-logo-2010-transparent.png[width="450" align="center"]

== !
[.stretch]
image::EMLyon_logo_corp.png[align="center"]
== !


//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

== 1. You need an extra library not mentioned on the video.
== !
Install this extra library from the Arduino IDE:


== !
Select in the menu Sketch -> Include Library -> Manage Libraries: type SSD1306 in the search bar and find it.

IMPORTANT: In the list of SSD1306 Libraries, make sure you install the one by *Adafruit*, not Acrobotic.

== 2. When installing the JSON library mentioned in the video, make sur to select version 5*.13.2*
== !
The name of this library is "ArduinoJson".
Find it from your Arduino IDE by selecting the menu: Sketch -> Include Library -> Manage Libraries: type ArduinoJson


== !
Several libraries might appear, select the one by Benoît Blanchon. And clicking on the "Install" button, make sure you select version *5.13.2* in the dropdown menu.

== !
If you made a mistake and you installed another version (starting with 6...), follow https://emlyon.github.io/IoT4Entrepreneurs/generated-html/faq.html#_2_dynamicjsonbuffer_not_declared_in_this_scope[the steps here] to fix the mistake.

== The end
== !
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

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
