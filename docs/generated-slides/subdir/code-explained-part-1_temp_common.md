= IoT for entrepreneurs: the code explained (part 1)
Clément Levallois <levallois@em-lyon.com>
2017-09-04

last modified: {docdate}

:icons!:
:iconsfont:   font-awesome
:revnumber: 1.0
:example-caption!:
:sourcedir: ../../../main/java

:source-highlighter: coderay
:coderay-linenums-mode: table
:title-logo-image: EMLyon_logo_corp.png[align="center"]

image::EMLyon_logo_corp.png[align="center"]
{nbsp} +

== The code, explained steps by steps
//[source,arduino,linenums,highlight='1-2']
[source,arduino]

----
// libraries pre-installed with the board

#include <ESP8266WiFi.h> //<1>
#include <SoftwareSerial.h> //<2>
#include <Wire.h> //<3>
----
<1> The library for the Huzzah Feather (the specific board we use)
<2> The library enabling the board to send info to the computer (useful to debug!)
<3> The library enabling Wifi

[source,arduino]
----
// libraries we added "manually"

#include <Adafruit_GFX.h> //<1>
#include <Adafruit_FeatherOLED.h> //<2>
#include <ArduinoJson.h> //<3>
----
<1> The library to help the board deal with graphics
<2> The library to help the board deal with the specific screen Feather OLED
<3> The library that saves us time when dealing with text formatted in JSON

The next lines of code are used to store some useful information:

[source,arduino]
----
char* ssid     = "name of wifi network here"; //<1>
char* password = "password here";//<2>
----
<1> means: we create the variable called `ssid`. We give it the value 'name of wifi network here'. This variable is of type `chars*` (characters)
<2> means: we create the variable called `password`. We give it the value 'password here'. This variable is of type `chars*` (characters)

Of coure, these values are just examples and you should put the name of your own wifi network and password.

WARNING: Don't forget the semi-colon at the end of the lines!

[source,arduino]
----
String location = "Saint-Etienne"; //<1>
----
<1> means: we create the variable called `location`. We give it the value "Saint-Etienne" (you can choose another place of course). This variable is of type `String` (`String` is the technical term for text).

[source,arduino]
----
Adafruit_FeatherOLED screen = Adafruit_FeatherOLED(); //<1>
----
<1> means: we create the variable called "screen". We give it the value returned by the function `Adafruit_FeatherOLED()`. The variable is of type `Adafruit_FeatherOLED`.

[source,arduino]
----
WiFiClient client;//<1>
----
<1> means: we create the variable named "client", of type "WifiClient". It has no value yet.

[source,arduino]
----
void setup() { //<1>
----
<1> This is called a function or method. The `setup` funcion is executed just once, when the board is powered up.

Don't know what functions are? https://www.arduino.cc/en/Reference/FunctionDeclaration[Check here].

[source,arduino]
----
// initialize the communication between the board and our computer.
// useful to display useful info.

Serial.begin(9600);//<1>
while (!Serial)//<2>
  {//<3>
    ; //<4>
  }//<5>
----
<1>  means: we execute the method called `begin` on the variable `Serial`.
<2> means: as long as the variable "Serial" is not equal to "true", execute the lines of codes in the curly braces `{ }` in <3> and <5>. https://www.arduino.cc/en/Reference/While[More info here].
<4> The instructions in the curly braces are just this `;`, which do nothing. So the board is basically waiting until `Serial` switches to "true".

[source,arduino]
----
//initialize the screen and hides the battery sign

screen.init();//<1>
screen.setBatteryVisible(false);//<2>
----
<1> means: we execute the method called `init` on the variable `screen`.
<2> means: we execute the method called `setBatteryVisible` on the variable `screen`. We use the parameter `false` for this method.


[source,arduino]
----
//initialize the wifi connection

WiFi.begin(ssid, password); //<1>
----
<1> means: a variable from the board (not created by us) is called "Wifi". We execute the method `begin` on it, which will start the connection to the wifi. So we give it 2 parameters: the name and password for the wifi, which we defined above.

[source,arduino]
----
// the program freezes as long as the wifi is not connected

while (WiFi.status() != WL_CONNECTED ) { //<1>
    delay(500);//<2>
}
----
<1> This another `while` loop, like the one above. The `status` method of `Wifi` returns a value which is `true` when the wifi is connected, and `false` otherwise.`WL_CONNECTED` is a variable with a value of `true`.
<2> `delay` is a simple function which freezes the board. For how long? For the duration shown in the parentheses, in milliseconds. So here, `delay(500)` freezes the board for 0.5 seconds before it retries to connect to the wifi.

[source,arduino]
----
} //<1>
----
<1> Do not forget this closing bracket, corresponding to the opening brack from the line above `void setup() {`


[source,arduino]
----
void loop() { //<1>
----
<1> the lines of code inside the loop function will be executed until the last, then start over again and again. This is where the interesting stuff happens! https://www.arduino.cc/en/Reference/Loop[See here for more].

[source,arduino]
----
screen.clearDisplay();//<1>
screen.clearMsgArea();//<2>
----
<1> deletes what is on screen
<2> deletes the previous message

[source,arduino]
----
//get the quality of air at location
callAQI(location);//<1><2>
----
<1> means: execute the method `callAQI`. Where does it come from? You will write the code for this function in a separate file. The role of this function is to connect via wifi to http://waqi.info/ and return the air quality for a given location.
<2> `location` is a parameter to the function. It is a variable you defined above (scroll up).

[source,arduino]
----
String aqiNumber = readAQIResponse();//<1>
----
<1> We create the variable `aqiNumber`, of type `String`. The value assigned to this variable is the number returned by the function `readAQIResponse()`.

Where does the `readAQIResponse` come from? It is a function written in another file by you. It picks the text returned by the previous function (`callAQI`), and extracts from it the number representing the air quality.

[source,arduino]
----
//display the air quality on the screen

screen.println("air quality");//<1>
screen.println("at "+ location + ":");//<2>
screen.println(aqiNumber);//<3>
screen.display();//<4>
----
<1> will write "air quality" on the 1st line of the screen
<2> will write "at Saint-Etienne" on the 2nd line of the screen (if the value of your location variable is "Saint-Etienne")
<3> will write the air pollution index retrieved from above
<4> will show the message on screen (if you forget this line, the message is not visible).

[source,arduino]
----
// wait 5 seconds
delay(5000);
} //<1>
----
<1> Don't forget this closing curly brace. It closes the function opened above with `void loop (){`



== The end
//ST: The end
//ST: !

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
