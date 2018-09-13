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

//+
What kind of new service could be created with them? What value would they bring?


//+
== 2. Examples
Connected objects are more and more present in our lives.
We can put them in 2 categories:

=== a. B2C

https://explore.garmin.com/en-US/vivo-fitness[a wrist band], or the https://www.amazon.com/dp/product/B00X4WHP5E/ref=EchoCP_dt_tile_text[Amazon Echo], which is a sound speaker doubling as a Digital Assistant. Or a scale by https://health.nokia.com/fr/fr/body[Nokia], which tracks your weight but also pulsations.

- Connected objects we can dress with are called *wearables* (https://www.cnet.com/topics/wearable-tech/best-wearable-tech/[smart watches and fitness trackers mostly], but https://www.wareable.com/smart-clothing/best-smart-clothing[actual clothing as well])
- Connected objects for the house are often called *smart house devices*, and include http://www.smarthome.com/wifi-thermostat.html[thermostats], cameras and https://www.postscapes.com/internet-of-things-award/connected-home-products/[more].

- Connected objects also tend to be categorized by the kind of service they provide: https://www.wareable.com/parenting/the-best-wearables-babies-smart-baby-monitors[health], fitness, security, or

image::garmin.png[align="center", title="source: /"]
{nbsp} +

//+
Companies creating these products are typically selling them to individual consumers (households).
These are B2C markets : "Business to Consumers", but they also address the B2B market (Business to Business: companies selling to other companies).


=== b. B2B
Connected objects for the industry: all kind of smart sensors and small connected devices are useful to help keep track of all pieces of material and semi-finished products along the production line, in all industries (from agriculture to manufacturing, through health care etc.)

The goal is to eliminate waste and increase speed by controlling and monitoring their processes more closely thanks to these devices.

Examples of companies providing these services are http://www.ripplesiot.com/[Ripples], Benard Marr[Pentaho], or https://www.ptc.com/en/internet-of-things[PTC].

//+
What makes an object part of the Internet of things? 3 things:

== 4. The anatomy of a connected object

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

=== c. The object can be just a receiver
In this case, the connected object can display some information that it receives from the network it is connected to.

This is the kind of objects we are going to build in this course: an object which receives data about air pollution, and shows it on a screen.
Check the small screen in the middle of it!

image::object.jpg[align="center"]
{nbsp} +

[NOTE]
====
Connected objects which receive data can do many things with it, not just showing stuff on screen.

The connected object can move, compute things, make sound or light... everything is possible.
====

=== d. When the object can connect... to another object
This is called a "swarm": when multiple objects can coordinate their actions by connecting with each other, instead of connected separately to a central point.

Connected objects can coordinate to move together and perform a common action (like https://www.youtube.com/watch?v=CJOubyiITsE[moving a child!]), or just exchange data.



== The end
//+

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
 of connected separately to a central point.

Connected objects can coordinate to move together and perform a common action (like https://www.youtube.com/watch?v=CJOubyiITsE[moving a child!]), or just exchange data.

//ST: !

== The end
//ST: The end


//ST: !
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
