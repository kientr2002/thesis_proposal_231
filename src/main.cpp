#include "main.h"

MyMQTT mymqtt(mqtt_server, mqtt_username, mqtt_password);

uint32_t previousPublishMillis = 0;  // Variable to store the last time data was published
const uint32_t publishInterval = 5000;        // Interval for publishing data (5 seconds)


void setup(){
    M5.begin();
    M5.Lcd.setTextFont(2);
    setup_wifi(wifi_username, wifi_password);

    mymqtt.connectToMQTT();
    mymqtt.checkConnect();
    mymqtt.subscribe(mqtt_feed);

}
void loop(){
    uint32_t current_time = millis();
    if(current_time - previousPublishMillis >= publishInterval){
        previousPublishMillis = current_time;
        mymqtt.publish(mqtt_feed, "15");
    }
    mymqtt.checkConnect();
    
    
}