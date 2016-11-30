const int xPin = A5;
const int yPin = A4;
const int zPin = A3;  

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  analogReference(EXTERNAL);    //connect 3.3v to AREF
  
  Serial.print(analogRead(xPin) - 507);
  Serial.print("\t");
  
  Serial.print(analogRead(yPin) - 512);
  Serial.print("\t");
  
  Serial.print(analogRead(zPin) - 615);
  Serial.println();

  delay(10);       }              
