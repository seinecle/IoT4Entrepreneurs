= Additional notes on libraries
Clément Levallois <levallois@em-lyon.com>
2018-09-19
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

== 1. You need an extra library not mentioned on the video.
Install this extra library from the Arduino IDE:

//+
Select in the menu Sketch -> Include Library -> Manage Libraries: type SSD1306 in the search bar and find it.

IMPORTANT: In the list of SSD1306 Libraries, make sure you install the one by *Adafruit*, not Acrobotic.

== 2. When installing the JSON library mentioned in the video, make sur to select version 5*.13.2*
The name of this library is "ArduinoJson".
Find it from your Arduino IDE by selecting the menu: Sketch -> Include Library -> Manage Libraries: type ArduinoJson

//+
Several libraries might appear, select the one by Benoît Blanchon. And clicking on the "Install" button, make sure you select version *5.13.2* in the dropdown menu.
//+
If you made a mistake and you installed another version (starting with 6...), follow https://emlyon.github.io/IoT4Entrepreneurs/generated-html/faq.html#_2_dynamicjsonbuffer_not_declared_in_this_scope[the steps here] to fix the mistake.

== The end
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
n measure in the location you choose.

//+
- transfer the code to the object: get the object to work.
- understand the business stakes of connected objects, beyond this small object: B2B, B2C, design and security aspects.

== 4. Material and budget
We will use components to build the object.

*emlyon students: these components are provided to you directly so you can skip this section.*

//+
At the time of writing, components cost less than 40$ and are sold online by http://www.adafruit.com in the US.
For further details, check the lesson "Where to buy components".

//+
We will also need a soldering equipment:

image::soldering-station.jpg[align="center",title="Soldering station",pdfwidth="50%", book="keep"]
{nbsp} +

//+
*emlyon business school students*: you can visit the Makers Labs on our campuses for soldering (have you visited http://makerslab.em-lyon.com/[their website]?).

Ask the MakersLab manager to use the soldering stations under their supervision.

//+
A soldering station can be bought online (see the lesson "Where to buy components").

Or better, you can find a Makers Lab near you and ask for their help! http://themakermap.com/[Check here for a list of Makerslab worldwide].

//+
Finally, you will need a micro usb cable to plug your object to your computer. You probably have one already if you have an Android smartphone. Shapes and formats for micro USB keep changing. Here we need the classic format (so, not reversible) https://www.amazon.com/Rampow-Cable-Braided-Samsung-Charging/dp/B01GJC4YMC/ref=sr_1_1?s=electronics&ie=UTF8&qid=1501582580&sr=1-1-spons&keywords=micro+usb+cable&psc=1[like this one].

== 5. Organization: this is a blended course
- Lessons are a mix of documents and videos.
- Documents and videos are available on this website: https://emlyon.github.io/IoT4Entrepreneurs/
- So this is "distance learning": build your object by following the videos, read the documents!

//+
Example of a video on the website:

//+
video::C6vhPETtXN8[youtube]
{nbsp} +

3 in-class sessions:
- 1st (today): Introduction
- 2nd (check the date on the syllabus): IoT and their business models
- 3rd (check the date on the syllabus): business game: how to create economic value with IoT? Using the DATOM method.

== 6. Evaluation of the course
The evaluation is in two steps:

//+
- GROUP assigment (2 students per group). 50% of the final grade:
-> a video where you show your object, which should be working.
You explain in this video the key difficulty you faced.

Example of a good video:

//+
video::155B6dSZEfs[youtube]
{nbsp} +

//+
Note: to get a 10/10, you need to add a bonus feature to the object.

Examples: extra coding, adding a 3D-printed case...

//+
- INDIVIDUAL assignment. 50% of the grade:
-> a video where you discuss a connected object on the market (no need to buy it!). You explain 1) the function it performs, 2) the business model behind it, and 3) secuirty issues raised by the object.

Example of a good video:

video::5TIKaf6hKMg[youtube]
{nbsp} +

//+
Grading is as follows:

image::grading-scale.jpg["Grading scale"]
{nbsp} +


//+
Each video should last about 3 minutes and *less than 5 minutes in any case*.


//+
Post the video on *Youtube* only, do not add a password to the video.

Make the video "unlisted" if you prefer.

//+
- *emlyon students only*: write the link to the Youtube video on the Dropbox of brightspace.
- *other participants*: you can send me the links to the videos at levallois@em-lyon.com and I'll be happy to evaluate them.

*Don't send me video files as I will not open them!*


== 7. Essential readings and to go further
Access https://www.pinterest.fr/seinecle/internet-of-things/[this board on Pinterest] for a collection of documents on the Internet of things from a business point of view.

You should read these documents to get a broader view on the subject.

//+
If you look for a very complete, in-depth reference on IoT for entrepreneurs I warmly recommend:

image::oreilly-iot.jpg[align="center", title="Entreprise IoT"]
{nbsp} +

This book is available http://shop.oreilly.com/product/0636920039433.do[online here].

emlyon students have access to this book freely through the http://proquestcombo.safaribooksonline.com.ezp.em-lyon.com/book/software-engineering-and-development/project-management/9781491934258[online library here].

== The end
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
