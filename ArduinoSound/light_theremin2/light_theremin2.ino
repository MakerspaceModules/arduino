void setup() {
  // initialize serial communications (for debugging only):
  Serial.begin(9600);
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  int sensorReading2 = analogRead(A1);
  // print the sensor reading so you know its range
  Serial.println(sensorReading2);
  
  // map the analog input range (in this case, 400 - 1000 from the photoresistor)
  // to the output pitch range (120 - 1500Hz)
  // change the minimum and maximum input numbers below
  // depending on the range your sensor's giving:
  int thisPitch = map(sensorReading, 100, 500, 400, 800);

  // play the pitch:
 
  if (sensorReading > 300) {
    tone(9, 440,10);
    delay(1);        // delay in between reads for stability
  }
  
  else if (sensorReading2 > 950) {
    tone(9, 660,10);
    delay(1);  
  } 

  else {
    delay(1);
  }
}
