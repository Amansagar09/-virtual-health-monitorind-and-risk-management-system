// node MCU
#include <Wire.h>
#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>
// WiFi network info.
char ssid[] = "JioFi2_CDC9C8";
char wifiPassword[] = "5msg8p37dj";
//char ssid[] = "Quality Thought";
//char wifiPassword[] = "roundtable";
int heartRate =67;
int ecg = 284;
int temp =97;
// Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
char username[] = "851f51a0-965c-11e8-87b0-97a7dd91c15a";
char password[] = "6518112f44e68588f131127c8d23b41fec43d667";
char clientID[] = "4c174430-b41b-11e8-a5e0-433900986fca";
void setup() {
Serial.begin(9600); /* begin serial for debug */
Wire.begin(D1, D2); /* join i2c bus with SDA=D1 and SCL=D2 of NodeMCU */
Cayenne.begin(username, password, clientID, ssid, wifiPassword);
}
void loop() {
Cayenne.loop();
Wire.beginTransmission(8); /* begin with device address 8 */
Wire.write("Hello Arduino");  /* sends hello string */
Wire.endTransmission();    /* stop transmitting */
Wire.requestFrom(8,7); /* request & read data of size 13 from slave */
//while(Wire.available()){
// while(Wire.available()){
//    char c = Wire.read();
//  Serial.print(c);
// }
Serial.println();
heartRate = Wire.read();
//Serial.println("heartRate");
Serial.println(heartRate);//
//Wire.requestFrom(8, 3); /* request & read data of size 13 from slave */
// while(Wire.available()){
//    char c1 = Wire.read();
//  Serial.print(c1);
// }
ecg =  Wire.read();
Serial.println(ecg);
// Wire.requestFrom(8, 4); /* request & read data of size 13 from slave */
// while(Wire.available()){
//    char c2 = Wire.read();
//  Serial.print(c2);
// }
temp = Wire.read();
Serial.println(temp);
//}
Cayenne.virtualWrite(0, heartRate);
Cayenne.virtualWrite(1, ecg);
Cayenne.virtualWrite(2, temp);
Serial.println();
delay(1000);
}
//Default function for processing actuator commands from the Cayenne Dashboard.
//You can also use functions for specific channels, e.g CAYENNE_IN(1) for channel 1 commands.
CAYENNE_IN_DEFAULT()
{
CAYENNE_LOG("CAYENNE_IN_DEFAULT(%u) - %s, %s", request.channel, getValue.getId(), getValue.asString());
//Process message here. If there is an error set an error message using getValue.setError(), e.g getValue.setError("Error message");

