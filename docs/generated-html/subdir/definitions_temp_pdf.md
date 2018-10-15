= Definition of IoT and connected objects
Clément Levallois <levallois@em-lyon.com>
2017-08-01

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

NOTE: This lesson makes use of many diagrams and extracts from the book entitled "Entreprise IoT" by https://www.safaribooksonline.com/library/view/enterprise-iot/9781491934258/[Dirk Slama et al (2015)], because this book is exceptionally clear and well written.
I recommend that you read the full book to get a complete picture of the topic.

== 1. Internet of Things, connected objects?
[quote, Wikipedia, entry "Internet of Things" visited on 2017/08/01]
________________________________________
The Internet of things (IoT) is the inter-networking of physical devices, vehicles (also referred to as "connected devices" and "smart devices"), buildings, and other items embedded with electronics, software, sensors, actuators, and network connectivity which enable these objects to collect and exchange data.
________________________________________

//+
Some comments on this definition:

- we are familiar with Internet used to transmit information from computer to computer (sending an email, visiting a web page...)
- the expression "Internet of things" insists on a different kind of use: what if we could connect any object (not just computers or smartphones) to the Internet?

//+
The idea to connect objects to the Internet is not new: professors connected a Coke Machine to Internet in the late 1970s or early 1980s, so that they could check from their computers if it was empty or not.footnote:[https://www.cs.cmu.edu/~coke/history_long.txt]

//+
Once we understand what is the "Internet of things", the meaning of "connected objects" is clear: these are the objects connected to this network.

//+
What about "smart objects?".

This is a synonymous to connected objects, where "smart" insists that the object can have a richer set of functions thanks to being connected to the Internet. It can even improve its features (for example, http://www.trustedreviews.com/news/over-the-air-software-update-makes-the-tesla-p85d-even-faster-2924452[a car driving faster]), thanks to updates made to its software through the Internet.


//+
Starting in the 2000s, we moved from small, fun experiments to the development of an entire industry based on this concept of connecting things to the Internet.
With decreasing costs for creating connecting objects, and easier protocols to connect (like Wifi, bluetooth and others, which appeared in the late 1990s), connected objects started to become interesting playground for serious innovation.



== 2. The anatomy of a connected object
=== a. the object can receive and send data, like this Thermostat:
.The Nest thermostat
[link=https://nest.com/thermostat/meet-nest-thermostat/]
image::nest.jpg[align="center"]
{nbsp} +

//+
The thermostat sends temperature measurements to your smartphone, and receives instructions from you (to decrease or increase the temperature).

=== b. The object can be just an emitter
A connected object can just broadcast some information without receiving anything. Two cases:

//+
- the object sends data automatically, like these connected beehives build by http://scontent.cdninstagram.com/t51.2885-15/s480x480/e35/c19.0.1041.1041/14723479_163242737474300_6697748361329508352_n.jpg[emlyon students] and now producing honey https://makersbeehives.herokuapp.com/[on the roof of the school]. They send pictures / temperature measures:

image::.png[align="center"]
{nbsp} +

//+
If the object is sending data, it supposes it has a *sensor* to measure things around it, so that it can then send this measure.
Sensors are pieces of electronic equipment, often quite tiny.
The list of sensors is immense and this is just a small sample:

//+
.Sensors!
[link=https://www.sparkfun.com/categories/305?filter_option%5Bprice%5D%5B%5D=is_price_range_0_10&filter_option%5Bprice%5D%5B%5D=is_price_range_10_20&filter_price_floor=&filter_price_ceil=]
image::sensors.jpg[align="center"]
{nbsp} +

//+
- or the object sends a signal continuously, which is received by your phone when you walk next to it. In this case the object is called a *beacon*.
It is used in stores to interact with shoppers:

image::iBeacon.jpg[align="center"]
{nbsp} +

//+
And it is also used in logistics to track shipping items:

video::Q5VDEdF3cBc[youtube]
{nbsp} +

=== c. The object can be just a receiver
In this case, the connected object can display some information that it receives from the network it is connected to.
//+
This is the kind of objects we are going to build in this course: an object which receives data about air pollution, and shows it on a screen.
Check the small screen in the middle of it!

image::object.jpg[align="center"]
{nbsp} +

//+
[NOTE]
====
Connected objects which receive data can do many things with it, not just showing stuff on screen.

The connected object can move, compute things, make sound or light... everything is possible.
====

=== d. When the object can connect... to another object
This is called a "swarm": when multiple objects can coordinate their actions by connecting with each other, instead of connected separately to a central point.

Connected objects can coordinate to move together and perform a common action (like https://www.youtube.com/watch?v=CJOubyiITsE[moving a child!]), or just exchange data.


=== e. The integration of an IoT in the systems of an enterprise

Connected objects do not stand alone and "make a product" or "provide" a service in themselves.
They must be integrated to a variety of devices and systems which, *altogether*, perform a function.

//+
It is possible to draw a general schema of the relations of a connected object with the rest of entreprise systems:

image::parts-of-iot-system.png[align="center",title="The integration of an IoT device with the enterprise systems by Slama et al", book="keep"]
{nbsp} +

This schema can be used to describe any system involving an IoT.
Here, https://www.safaribooksonline.com/library/view/enterprise-iot/9781491934258/[Slama et al (2015)] pick the example of an Airbag which, if it is triggered, launches a call from an emergency system to the car driver to make sure everything is fine:

image::example-airbag.png[align="center",title="The example of an Airbag triggering an emergency call by Slama et al", book="keep"]
{nbsp} +

What kind of new service could be created with them? What value would they bring?


== 3. The value brought by IoT
What do connected objects bring to the table?

=== a. B2C: The customer perspective
https://explore.garmin.com/en-US/vivo-fitness[a wrist band], or the https://www.amazon.com/dp/product/B00X4WHP5E/ref=EchoCP_dt_tile_text[Amazon Echo], which is a sound speaker doubling as a Digital Assistant. Or a scale by https://health.nokia.com/fr/fr/body[Nokia], which tracks your weight but also pulsations.

//+
- Connected objects we can dress with are called *wearables* (https://www.cnet.com/topics/wearable-tech/best-wearable-tech/[smart watches and fitness trackers mostly], but https://www.wareable.com/smart-clothing/best-smart-clothing[actual clothing as well])
- Connected objects for the house are often called *smart house devices*, and include http://www.smarthome.com/wifi-thermostat.html[thermostats], cameras and https://www.postscapes.com/internet-of-things-award/connected-home-products/[more].
- Connected objects also tend to be categorized by the kind of service they provide: https://www.wareable.com/parenting/the-best-wearables-babies-smart-baby-monitors[health], fitness, or security.

image::garmin.png[align="center", title="A Garmin wristband"]
{nbsp} +

//+
Companies creating these products are typically selling them to individual consumers (households).
These are B2C markets : "Business to Consumers", but they also address the B2B market (Business to Business: companies selling to other companies).

=== b. B2B: the manufacturing or production perspective

[quote, Entreprise IoT, Dirk Slama et al.]
________________________________________
Most manufacturers today hear very little about their products once they leave the factory.
In fact, this was traditionally seen as the best possible outcome, the most likely alternative being a costly product recall.
________________________________________

With connected objects, information can flow at each stage of the manufacturing process and post sales as well:

image::connected-asset-lifecycle.jpg[align="center",title="Connected asset lifecycle management", book="keep"]
{nbsp} +

Value can be created through different roads:

==== Production efficiencies
IoT facilitates *predictive maintenance*,  *decreases waste* and *increase speed* by controlling and monitoring production processes more closely thanks to connected devices.

Examples of companies providing predictive maintenance services are http://www.ripplesiot.com/[Ripples], Pentaho, or https://www.ptc.com/en/internet-of-things[PTC].

==== Servitization
"The basic idea of servitization is that manufacturers move from a model based on selling assets toward a model in which they offer a service that utilizes those assets." (Slama et al. 2015)

//+
----
Example: security at home.

- *without* servitization: a company selling alarm devices for the house.
- *with* servitization: a company selling a monthly subscription for a "security solution" (from intrusion detection to intervention), enabled by alarm devices.
----

//+
The strategy of servitization existed before connected objects, but IoT expands the ways services can be "attached" to products, thanks to greater connectivity and data flows between these objects and the company's headquarters.

image::servitization-and-iot.jpg[align="center", title="Servitization and IoT by Slama et al", book="keep"]
{nbsp} +

==== Data monetization (direct or indirect)
- Direct data monetization consists in selling data - the data is the main asset exchanged for money.
- Indirect data monetization covers the cases where data enables a transaction, facilitates a partnership,... it is *bartered* without an explicit price. Its role is to catalyze an exchange. An advantage of indirect monetization is that is https://blogs.gartner.com/doug-laney/the-possible-tax-advantages-of-bartering-with-information/[should not be taxable], as noted by Doug Laney from Gartner.

=== c. IoT - which industry is concerned?
According to a leading consulting on the topic, IoT can be mapped in a series of overlapping domains:

image::iot-panorama.jpg[align="center", title="The panorama of IoT in 2015 by Machina Research", book="keep"]
{nbsp} +

== 3. At stake: the meeting of two corporate cultures
image::machine-versus-www-camps.jpg[align="center",title="The machine vs www camps by Slama et al", book="keep"]
{nbsp} +

== The end
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
