/**
 * simple demo to show sha1 calculation
 */
#include <Arduino.h>
#include <Hash.h>

void setup() {
    Serial.begin(9600);
}

void loop() {

    // usage as String
    // SHA1:a94a8fe5ccb19ba61c4c0873d391e987982fbbd3

    Serial.print("SHA1:");
    Serial.println(sha1("abc"));
    delay(1000);
}
