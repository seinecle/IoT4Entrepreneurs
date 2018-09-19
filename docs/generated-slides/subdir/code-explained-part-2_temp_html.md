= IoT for entrepreneurs: the code explained (part 2)
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
void callAQI(String location){ //<1>
----
<1> here starts the definition of the function which will connect the board to a website giving the air pollution in a given place (the paramater `location`).
This function will be executed when called in the `loop` function that you have written in the file `code_for_ar_quality_screen.io`

[source,arduino]
----
char* token = "put your own token here"; //<1>
----
<1> create the variable `token`. The value for this variable is the token you can obtain for free on this website: http://aqicn.org/data-platform/token/#/

NOTE: a token is a kind of password (sometimes called an API secret, or a secret token). It certifies your identity when accessing an API.

[source,arduino]
----
char* host = "api.waqi.info"; //<1>
String webaddress = "/search/?token=" + String(token) + "&keyword=" + location; //<2>
int httpPort = 80; //<3>
----
<1> the variable `host` contains the first part of the url (address of the website) where we will retrieve the air quality.
<2> this is the second part of the url. You see that it includes your token (transformed into a `String`) and the `location` where the air pollution is measured.
<3> to send and receive data via http, even if we don't see it, we must specify the port - this is a bit like a gate number. 80 is the default port number for http. Check https://www.theguardian.com/lifeandstyle/2010/dec/30/port-wine-food-and-drink[[line-through]#this#] https://www.techopedia.com/definition/15709/port-80[this] reference.

[source,arduino]
----
if (!client.connect(host, httpPort)) { //<1>
  Serial.println("connection failed"); //<2>
  return ; //<3>
}
----
<1> the variable "client" (which we have created in the first file) now tries to connect to the website. If it fails (see the `!` in the if condition), then:
<2> send a message saying the connection to the website has failed
<3> `return`, which means stopping there and leaving the function *only if the connection has failed*.

The following lines of code will be executed only if our board could connect to `http://api.waqi.info`


[source,arduino]
----
client.print("GET ");//<1>
client.println(" HTTP/1.1");
client.print(webaddress); //<2>
client.print("Host: ");
client.println(host);
client.println("Connection: close"); //<3>
client.println();
delay(500);
return; //<4>
}
----
<1> all the lines of code starting with `client.print` contribute to connecting your board to the specific page of the website where the air quality for your location is available.
<2> this specific line is the one where your particular location and token will be taken into account: see the `webaddress` we defined above.
<3> the result of the page has been retrieved, the board now disconnects from the website
<4> we are done and we can leave the function `callAQI`. The info retrieved on the website is now stored somewhere in our `client` variable.

To summarize so far:

a. the function (method) `callAQI` connected the board to the website `http://api.waqi.info`
b. on this website, it navigated to a page defined by our token and the location where we want to measure the air quality
c. the result (info about the air quality) has been saved in the memory of our board, in the variable `client` we used for the connection.

We need more steps to extract the info we need from the `client` variable.
We could have added extra lines to the function `callAQI`, but for a pure matter of making our code more readable, we put these lines of code in a separate function that we name `readAQIResponse`:

We now explain step by step what this function does:

[source,arduino]
----
String readAQIResponse(){ //<1>
   while (client.available()) {//<2>

    String line = client.readStringUntil('\n'); //<3>
    Serial.println(line); //<4>
    if (line.indexOf("data") < 0) { //<5>
      continue; //<6>
    }
    DynamicJsonBuffer jsonBuffer (1000); //<7>
    JsonObject& root = jsonBuffer.parseObject(line); //<8>
    String aqiValue = root["data"][0]["aqi"]; //<9>
    return aqiValue; //<10>
 }
}
----
<1> the function is called `readAQUIResponse`. When it finishes, it provides (it "returns") a value of type `String`
<2> this `while` loop will read the info that the `client` variable received (see just above)
<3> in code, the end of a line is marked by a symbol invisible to humans: it is `\n`. So the first line is all characters until `\n`.
<4> To debug (help us understand when and why something is wrong), we print this line on the computer
<5> we interested only in the line that contains the word "data". If this word is not present, its index will be negative. See more explanations http://bf-arduinolab.wikidot.com/docs:string-manipulation[here].
<6> so if "data" is not contained in the line, just move on to the next: ignore the rest of the function and move back to the beginning of the `while` loop.
<7> Here, we prepare a new variable which will help us extract the info we need from this line.
<8> The `root` variable now contains the line, formatted as a json object (see more on json objects https://www.impressivewebs.com/what-is-json-introduction-guide-for-beginners/[here]).
<9> In this `root` object, we reach for the subelement `["data"][0]["aqi"]`. This is the value of the air pollution for our location.
<10> we return this value, leave the `while` loop and the function.



== The end
Find references for this lesson, and other lessons, https://seinecle.github.io/IoT4Entrepreneurs/[here].

image:round_portrait_mini_150.png[align="center", role="right"][align="center", role="right"]

This course is made by Clement Levallois.

Discover my other courses in data / tech for business: https://www.clementlevallois.net

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
