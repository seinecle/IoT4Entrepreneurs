void callAQI(String location){

  
  // this is a kind of password (sometimes called an API secret, or a secret token) obtained from the website: http://waqi.info/
  char* token = "ce3c07596e818c0ef99c070ab4464b7abc2f228d";

  // this is the first part of the address of the website where we will get the info on the air quality at Saint Etienne:
  char* host = "api.waqi.info";

  // This is the last part of the address of the website.
  String webaddress = "/search/?token=" + String(token) + "&keyword=" + location;  

  // to connect to a website, even if we don't see it, we must specify this parameter:
  int httpPort = 80;

  Serial.println("about to call the api");

  // the variable "client" (which we have created in the first file) now tries to connect to the website.
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return ;
  }

  // now on the website, we try to reach the web address we have written above

 client.print("GET ");
 client.print(webaddress);
 client.println(" HTTP/1.1");
 client.print("Host: ");
 client.println(host);
 client.println("Connection: close");
 client.println();

  
 // we have received the answer (hopefully it is the air quality for Saint Etienne!). We will examine the answer with the method called "readAQIResponse" below
 delay(500);
 
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return ;
    }
  }   
 
  return;
}


String readAQIResponse(){
    Serial.println("in the readAQI response method");

   while (client.available()) {
    Serial.println("reading the next line rexceived from the website");
    
    String line = client.readStringUntil('\n');
    Serial.println(line);
    if (line.indexOf("data") < 0) {
      continue;
    }
    DynamicJsonBuffer jsonBuffer (1000);
    JsonObject& root = jsonBuffer.parseObject(line);    
    String aqiValue = root["data"][0]["aqi"];
    return aqiValue;
    
 }
 Serial.println("client was not available");
 return "no data";
}
