#ifndef INC_MQTT_HELPER_H_
#define INC_MQTT_HELPER_H_


#include "global.h"

class MyMQTT {
private:
    String mqtt_server;
    String user;
    String password;
    WiFiClient espClient;
    PubSubClient client;

public:
    MyMQTT(String server, String user, String password) 
    : mqtt_server(server), user(user), password(password), client(espClient) {
      client.setBufferSize(2048);
    }
    
    void connectToMQTT();
    void subscribe(String);
    bool publish(String, String);
    void checkConnect();

private:
    void callback(char*, byte*, unsigned int);
    void reConnect();
};
#endif