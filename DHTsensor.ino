// Use Adafruit DHT sensor library
// also needs adafruit unified sensor library
#include "DHT.h"    

//Arduino pin 2 connected to DH11 data pin
#define DHTPIN 2

//Type of DHT sensor
#define DHTTYPE DHT11

//Initialize snesor 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // use the serial monitor to display readings (the black box below)
  Serial.begin(9600);
  Serial.println("Humidity and Temperature");

  // Start the sensor
  dht.begin();
}

void loop() {
  // wait between measurements
  delay(30000);

  //read humidity
  float h = dht.readHumidity();

  //read temp (deg C)
  float t = dht.readTemperature();

  //send data to serial monitor for display
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.print("%   Temperature: ");
  Serial.print(t);
  Serial.println("Degrees Celsius");


}
