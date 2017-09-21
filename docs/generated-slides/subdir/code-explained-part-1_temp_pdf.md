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
[source,arduino,linenums,highlight='1-2']
----
#include <ESP8266WiFi.h> //<1>
#include <SoftwareSerial.h> //<2>
#include <Wire.h> //<3>
----
<1> The library for the Huzzah Feather (the specific board we use)
<2> The library enabling the board to send info back to the computer (useful to debug, but we don't use it here)
<3> The library enabling Wifi



// libraries added "manually"
#include <Adafruit_GFX.h>
#include <Adafruit_FeatherOLED.h>
#include <ArduinoJson.h>


// the name and password of my wifi network. Put yours instead!
// what is "char*"? This means that this variable is made of characters

char* ssid     = "arduino";
char* password = "arduino11";

//The place where the air quality is measured. Choose your own place!
// "String" means that the variable "location" can hold pieces of text, not numerical values.
String location = "Saint-Etienne";

// We create a variable which manages the screen
Adafruit_FeatherOLED screen = Adafruit_FeatherOLED();

// We create a variable to manage the Internet connection
WiFiClient client;

// setup includes between { and } all the instructions to execute just once, when the board is powered up.

void setup() {

  //initialize the communication between the board and our computer. Useful to display useful info.
  Serial.begin(9600);

  while (!Serial) {
    ;
  }

  //initialize the screen. We dont want to have a battery sign visble.
  screen.init();
  screen.setBatteryVisible(false);

  //initialize the wifi connection
  WiFi.begin(ssid, password);

  // continue waiting as long as the wifi is not connected (so make sure your wifi is on!)
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

}

//loop is where all things between { and } will be executed again and again

void loop() {

  //delete what is on screen the current display
  screen.clearDisplay();
  screen.clearMsgArea();

  //get the quality of air at location
  // the following two lines ask "callAQI" and "readAQIResponse" to be executed. These are instructions written in a second file of the project.

  // this connects to a website called "AQI" (for "Air Quality Index")
  callAQI(location);

  // this gets long, detailed info about the air quality in Saint Etienne> It picks just the number of the air quality.
  String aqi = readAQIResponse();


  //display the results on the screen
  screen.println("air quality");
  screen.println("at "+ location + ":");
  screen.println(aqi);

  // update the screen with these new info:
  screen.display();

  // wait 5 seconds
  delay(5000);


 // that's the end of the loop. We will return at the beginning of the loop automatically and execute the loop again, and again...
}




== The end
//ST: The end
//ST: !

Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"]
This course is made by Clement Levallois.

Discover my other courses in data / tech for business: http://www.clementlevallois.net

Or get in touch via Twitter: https://www.twitter.com/seinecle[@seinecle]
