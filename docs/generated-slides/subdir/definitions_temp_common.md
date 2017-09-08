= Definition of IoT and connected objects
Clément Levallois <levallois@em-lyon.com>
2017-08-01

last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:

:title-logo-image: gephi-logo-2010-transparent.png[width="450" align="center"]

image::EMLyon_logo_corp.png[align="center"]
{nbsp} +

//ST: 'Escape' or 'o' to see all sides, F11 for full screen, 's' for speaker notes

//ST: !
== 1. Internet of Things, connected objects?
//ST: Internet of Things, connected objects?
//ST: !

[quote, Wikipedia, entry "Internet of Things" visited on 2017/08/01]
________________________________________
The Internet of things (IoT) is the inter-networking of physical devices, vehicles (also referred to as "connected devices" and "smart devices"), buildings, and other items embedded with electronics, software, sensors, actuators, and network connectivity which enable these objects to collect and exchange data.
________________________________________

//ST: !

Some comments on this definition:

- we are familiar with Internet used to transmit information from computer to computer (sending an email, visiting a web page...)
- the expression "Internet of things" insists on a different kind of use: what if we could connect any object (not just our computers or smartphones) to the Internet?

The idea to connect objects to the Internet is not new: professors connected a Coke Machine to Internet in the late 1970s or early 1980s, so that they could check from their computers if it was empty or not.footnote:[https://www.cs.cmu.edu/~coke/history_long.txt]

//ST: !
Once we understand what is the "Internet of things", the meaning of "connected objects" is clear: these are the objects connected to this network.

//ST: !

[NOTE]
====
*What about "smart objects?".*

This is synonymous to connected objects, where "smart" insists that the object can have a richer set of functions thanks to being connected to the Internet.
For example a "smart car" is a car that can http://www.trustedreviews.com/news/over-the-air-software-update-makes-the-tesla-p85d-even-faster-2924452[drive faster] a month after your purchased it, thanks to updates made to its software through the Internet.
====

//ST: !

Starting in the 2000s, we moved from small, fun experiments to the development of an entire industry based on this concept of connecting things to the Internet.

With _decreasing costs_ for creating connecting objects, and easier protocols to connect (like Wifi, bluetooth and others, which appeared in the late 1990s), connected objects started to become interesting playground for serious innovation.

What kind of new service could be created with them? What value would they bring?



//ST: !
== 2. Examples
//ST: Examples
//ST: !

Connected objects are more and more present in our lives. We can put them in 2 categories:

//ST: !
==== 1. connected objects for consumers
//ST: !

https://explore.garmin.com/en-US/vivo-fitness[a wrist band], or the https://www.amazon.com/dp/product/B00X4WHP5E/ref=EchoCP_dt_tile_text[Amazon Echo], which is a sound speaker doubling as a Digital Assistant. Or a scale by https://health.nokia.com/fr/fr/body[Nokia], which tracks your weight but also pulsations.

image::garmin.png[align="center", title="source: https://explore.garmin.com/en-US/vivo-fitness"]
{nbsp} +


//ST: !

TIP: Connected objects we can dress with are called *wearables* (https://www.cnet.com/topics/wearable-tech/best-wearable-tech/[smart watches and fitness trackers mostly], but https://www.wareable.com/smart-clothing/best-smart-clothing[actual clothing as well])

TIP: Connected objects for domestic use are often called *smart house devices*, and include thermostats, cameras and https://www.postscapes.com/internet-of-things-award/connected-home-products/[more].


//ST: !
[start =2]
==== 2. connected objects for the industry
//ST: !

Connected objects are useful to help keep track of all pieces of material and semi-finished products along the production line, in all industries (from agriculture to manufacturing, through health care etc.)

The goal is to eliminate waste and increase speed by controlling and monitoring their processes more closely thanks to these devices.

//ST: !

[#img-industry-device]
.This device can send temperature measurement and many other kinds to a monitoring console
[link=http://embedded-computing.com/news/wzzard-intelligent-sensing-platform-brings-smart-mesh-networking-to-iot-edge-applications/]
image::industry-sensor.jpeg[align="center"]
{nbsp} +

Examples of companies managing IoT for the industry are http://www.ripplesiot.com/[Ripples], http://www.pentaho.com/internet-of-things-analytics[Pentaho], or https://www.ptc.com/en/internet-of-things[PTC].

//ST: !
In service industries, connected objects help deliver the service better (like https://disneyworld.disney.go.com/plan/my-disney-experience/bands-cards/[the MagicBand at Disney World]), and help control the quality of the service delivered by taking measures.

//ST: !

image::magicband.jpg[title="The \"MagicBand\" by Disney which acts as an entrance ticket and e-wallet"]
{nbsp} +

//ST: !
== 3. The anatomy of a connected object
//ST: The anatomy of a connected object
//ST: !

What makes an object part of the Internet of things? 3 things:

//ST: !
==== 1. The object must be connected (duh)

//ST: !

The connection can take many forms:

//ST: !

 a) the object can receive and send data, like this Thermostat:

//ST: !

.The Nest thermostat
[link=https://nest.com/thermostat/meet-nest-thermostat/]
image::nest.jpg[align="center"]
{nbsp} +

//ST: !

The thermostat  sends temperature measurements to your smartphone, and receives instructions from you (to decrease or increase the temperature).

//ST: !

 b) The object can be just an emitter

//ST: !

A connected object can just broadcast some information without receiving anything. Two cases:

//ST: !

- the object sends data automatically, like these connected beehives build by http://scontent.cdninstagram.com/t51.2885-15/s480x480/e35/c19.0.1041.1041/14723479_163242737474300_6697748361329508352_n.jpg[emlyon students] and now producing honey https://makersbeehives.herokuapp.com/[on the roof of the school]. They send pictures / temperature measures:

image::bees.gif[align="center"]
{nbsp} +

//ST:!
If the object is sending data, it supposes it has a *sensor* to measure things around it, so that it can then send this measure.
Sensors are pieces of electronic equipment, often quite tiny.
The list of sensors is immense and this is just a small sample:

//ST:!

.Sensors!
[link=https://www.sparkfun.com/categories/305?filter_option%5Bprice%5D%5B%5D=is_price_range_0_10&filter_option%5Bprice%5D%5B%5D=is_price_range_10_20&filter_price_floor=&filter_price_ceil=]
image::sensors.jpg[align="center"]
{nbsp} +

//ST: !

- or the object sends a signal continuously, which is received by your phone when you walk next to it. In this case the object is called a *beacon*.
It is used in stores to interact with shoppers:

image::iBeacon.jpg[align="center"]
{nbsp} +

//ST: !

And it is also used in logistics to track shipping items:

video::Q5VDEdF3cBc[align="center"]

//ST: !

 c) The object can be just a receiver

//ST: !

In this case, the connected object can display some information that it receives from the network it is connected to.

This is the kind of objects we are going to build in this course: an object which receives data about air pollution, and shows it on a screen.
Check the small screen in the middle of it!

//ST: !

image::object.jpg[align="center"]
{nbsp} +

//ST: !

[NOTE]
====
Connected objects which receive data can do many things with it, not just showing stuff on screen.

The connected object can move, compute things, make sound or light... everything is possible.
====

//ST: !

 d) also interesting: the object can connect... to another object

This is called a "swarm": when multiple objects can coordinate their actions by connecting with each other, instead of connected separately to a central point.

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
