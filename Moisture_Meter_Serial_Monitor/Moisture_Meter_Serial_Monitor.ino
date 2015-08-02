int moistureSensor = 0;   //one nail goes to +5V, the other nail goes to this analogue pin
int moisture_val;

void setup() {
  Serial.begin(9600);     //open serial port
}

void loop() {
  moisture_val = analogRead(moistureSensor);   // read the value from the nails
  Serial.print("moisture sensor reads ");
  Serial.println( moisture_val );     // print the moisture level to the serial monitor
  delay(500);
}
