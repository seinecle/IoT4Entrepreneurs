= Iot for entrepreneurs: Which board are we going to use?
Clément Levallois <levallois@em-lyon.com>
2017-08-04

last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:
:sourcedir: ../../../main/java

:title-logo-image: EMLyon_logo_corp.png[align="center"]

image::EMLyon_logo_corp.png[align="center"]
{nbsp} +

//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

//ST: !
== What is a board?
//ST: What is a board?
//ST: !

A board is a small piece of plastic where electronic components can be added. Which components to add?

It is possible to put an entire small computer (but a small one!) on a board. The exact term for this small computer is a *microcontroller*.

//ST: !

image::rp3.jpg[align="center"]
{nbsp} +

The real size of this object is 8.5cm × 5.6cm (3.3 in × 2.2 in). It costs about 35$.

//ST: !
This picture represents a https://www.raspberrypi.org/products/[Raspberry Pi], where we see the green plastic board, electronic components on it: this is a microcontroller. As a shorthand, we will continue to call this a "board".

//ST: !
== What are boards for?
//ST: What are boards for?
//ST: !

The goal of boards is simple: they can provide the functionalities of a computer in a very small space because they are *tiny*.

//ST: !
For example, if you want to create a connected coffee machine (why not?), it would be weird to attach the coffee machine to this computer:

//ST: !
image::desktop_computer.jpg[align="center"]
{nbsp} +

//ST: !
Instead, we can add a tiny board like the one above, which will do just what we need:
maybe have just a small screen and connecting to our mobile phone via wifi (so that coffee can start when our alarm clock gets off, for instance).

//ST: !
And it will be cheap (just add 35$ to turn your coffee machine into a connected object!) and need just a little bit of electrical current (compared to a big computer).

//ST: !
== Which board to choose?
//ST: Which board to choose?
//ST: !

There are litteraly hundreds of different boards. We choose here the https://www.adafruit.com/product/3213[Feather Huzzah]:

.The Feather Huzzah
[link=https://www.adafruit.com/product/3213]
image::huzzah.jpg[align="center"]
{nbsp} +

//ST: !
Why the feather huuzah?

- it is really tiny! 2 inches x 0.9 inch (51mm x 23mm)
- it can connect to Wifi
- it is cheap: 20$

//ST: !
There are other boards much smaller and cheaper, which can also connect to wifi. Why don't we choose them?

//ST: !
They are much harder to use because:

- they have no plug to branch a standard micro usb cable (remember we need some electricity to power the object!)
- the programming language these boards use are difficult to learn for non specialists.
- their documentation (all the documents explaining how to use them) is very technical, not very clear.


//ST: !
Said differently: the board we are going to use has clear documentation, is easy to plug, and it is easy to program.
Why? Because it is a board following the principles of Arduino: easy to use, even for non specialists.

//ST: !
If you are interested, the whole story is here: it all started with https://arduinohistory.github.io/[a student in design in Italy, in 2003...]


== The end
//ST: The end
//ST: !

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
pass:[    <!-- Start of StatCounter Code for Default Guide -->
    <script type="text/javascript">
        var sc_project = 11410058;
        var sc_invisible = 1;
        var sc_security = "a7720bf3";
        var scJsHost = (("https:" == document.location.protocol) ?
            "https://secure." : "http://www.");
        document.write("<sc" + "ript type='text/javascript' src='" +
            scJsHost +
            "statcounter.com/counter/counter.js'></" + "script>");
    </script>
    <noscript><div class="statcounter"><a title="site stats"
    href="http://statcounter.com/" target="_blank"><img
    class="statcounter"
    src="//c.statcounter.com/11410058/0/a7720bf3/1/" alt="site
    stats"></a></div></noscript>
    <!-- End of StatCounter Code for Default Guide -->]
