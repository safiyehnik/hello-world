#include<ESP8266WiFi.h>
#include<ThingerESP8266.h>
#define USERNAME "*******"
#define DEVICE_ID "****"
#define DEVICE_CREDENTIAL "******"
#define SSID  "******"
#define SSID_PASSWORD "******"

ThingerESP8266 thing(USERNAME,DEVICE_ID,DEVICE_CREDENTIAL);




void setup() {

thing.add_wifi(SSID,SSID_PASSWORD);

}

void loop() {
 thing.handle();

}


