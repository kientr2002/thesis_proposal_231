
// #include <M5Core2.h>
// #include <Arduino.h>
// #include <PubSubClient.h>
// #include <WiFiClient.h>
// #include <WiFi.h>


// const char* mqtt_server = "io.adafruit.com";
// const int mqtt_port = 1883;
// const char* mqtt_username = "teambaton";
// const char* mqtt_password = "aio_Dgpv32vObCrbJBoasVRvhJIo0PLy";

// WiFiClient espClient;
// PubSubClient client(espClient);

// void setup_wifi(const char *ssid, const char *passwd) {
//   Serial.println();
//   Serial.print("Connecting to ");
//   Serial.println(ssid);
//   WiFi.begin(ssid, passwd);
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }
//   Serial.println("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
// }


// void callback(char* topic, byte* payload, unsigned int length) {
//     Serial.println("Message arrived in topic: " + String(topic));
//     Serial.println("Message:");
//     for (int i = 0; i < length; i++) {
//         Serial.print((char)payload[i]);
//     }
//     Serial.println();
// }

// void reconnect() {
//     while (!client.connected()) 
//     {
//         int randomNumber = random(0, 101);
//         char clientId[4]; // Allocate space for 3 digits plus null terminator
//         snprintf(clientId, sizeof(clientId), "%d", randomNumber);
//         Serial.println("Attempting MQTT connection...");

//         if (client.connect(clientId, mqtt_username, mqtt_password)) 
//         {
//             Serial.println("Connected to MQTT broker");
//             client.subscribe("teambaton/feeds/test");
//         } 
//         else 
//         {
//             Serial.print("Failed to connect to MQTT broker, rc=");
//             Serial.print(client.state());
//             Serial.println(" Retrying in 5 seconds...");
//             delay(5000);
//         }
//     }
// }

// void setup() {
//     Serial.begin(115200);
//     setup_wifi("Siuuuuuuu", "10k1tieng");
//     client.setServer(mqtt_server, mqtt_port);
//     client.setCallback(callback); // Set the callback here
//     reconnect();
// }

// void loop() {
//     if (!client.connected()) {
//         reconnect();
//     }
//     client.loop(); // Allow the client to handle MQTT operations
// }
