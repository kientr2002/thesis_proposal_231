#ifndef _INC_MAIN_H_
#define _INC_MAIN_H_

#include "global.h"
#include "Wifi_helper.h"
#include "MQTT_helper.h"

//MQTT configuration
const char* mqtt_server = "io.adafruit.com";
const int mqtt_port = 1883;
const char* mqtt_username = "teambaton";
const char* mqtt_password = "aio_aCwF83uG9j1sPZ5fbLRJiN04yWNb";
String mqtt_feed = "teambaton/feeds/test";



//WIFI configuration
const char* wifi_username = "Wisnetworks_2.4G";
const char* wifi_password = "";

#endif // !_INC_MAIN_H_
