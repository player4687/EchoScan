#include <arduino.h>

#define TRIG_PIN = 18
#define ECHO_PIN = 19 
#define LED_PIN = 23

const float DETECT_DISTANCE_CM = 30.0; 

void setup() {
    Serial.begin(115200);

    pinMode(TRIG_PIN, OUTPUT); 
    pinMode(ECHO_PIN, INPUT); 
    pinMode(LED_PIN, OUTPUT); 
 

digitalWrite(LED_PIN, LOW);
 digitalWrite(TRIG_PIN, LOW); 

 Serial.println(`ESD has been started.);

}

void loop() { 
    digitalWrite(TRIG_PIN, LOW); 
    delayMicroseconds(2);

    digitalWrite(TRIG_PIN, HIGH); 
    delayMicroseconds(10); 
    digitalWrite(TRIG_PIN, LOW); 

    unsigned long duration = pulselin(ECHO_PIN, HIGH,
    30000);

    if (duration == 0) {
        digitalWrite(LED_PIN, LOW); 
        Serial.println("Nothing detected"); 
    } else {
        float distanceCm = duration *0.0343 / 2.0; 

        Serial.print("Distance: ");
        Serial.print(distanceCm);
        Serial.println(" cm");
    
        if(distanceCm > 0 &&
        distanceCm < DETECT_DISTANCE_CM) {
            digitalWrite(LED_PIN, HIGH); 
            Serial.println("Object detected within 30 cm!");
        } else {
            digitalWrite(LED_PIN, LOW); 
        }
    }

    delay(100); 

}