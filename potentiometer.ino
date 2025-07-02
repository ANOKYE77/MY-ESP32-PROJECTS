//Expirement 3 : Reading a potentiometer using ESP32
//Define  the analog pin 
const int potPin =2;
//GPI013 is input only

void setup() {
  Serial.begin(115200);
  // start serial moniror at 115200 baud rate 

}

void loop() {
  int potValue = analogRead(potPin);
  // read analog value (0-4095)
  Serial.print( "potentiometer value:");
  Serial.println(potValue);
  //print the value 
  delay(200);
  // Delay for readability
}