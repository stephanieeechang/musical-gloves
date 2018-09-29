#include <pitchToFrequency.h>
#include <pitchToNote.h>
#include <frequencyToNote.h>
#include <MIDIUSB.h>
// Iron Man Gloves right hand (reverse)

//#include <AltSoftSerial.h>
//AltSoftSerial BTSerial;
#include <Wire.h>
#include "Adafruit_TCS34725.h"
#include <MIDI.h>

// our RGB -> eye-recognized gamma color
byte gammatable[256];

const int buttonPinSharp = 7;
const int buttonPinFlat = 8;
int buttonStateSharp = 0; 
int buttonStateFlat = 0;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    Serial.println("Color Sensor Test!");
  pinMode(buttonPinSharp, INPUT);
  pinMode(buttonPinFlat, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  buttonStateSharp = digitalRead(buttonPinSharp);
  buttonStateFlat = digitalRead(buttonPinFlat);
  
  Serial.print("sharp ");
  Serial.println(buttonStateSharp);
  
  Serial.print("flat ");
  Serial.println(buttonStateFlat);
  delay(200);
}                              
