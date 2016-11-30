const int PinLed = 11;
void setup() {
  for(int i= 3; i<11; i++){
    pinMode(i, OUTPUT);
   
  }
    for(int t= 3; t<11; t++){
    digitalWrite(t, HIGH);
    }
    pinMode(PinLed, 11);
    
    
       delay(5000);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);
    } //9
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
delay(1000);
 for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);
    } //8
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(1000);
     for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    
    //7
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(1000);
   
    for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    //6
     digitalWrite(3, HIGH);
     digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(1000);
     for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    //5
    digitalWrite(3, HIGH);
digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
     digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(1000);
    for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    //4
     digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
     digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(1000);
     for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    //3
     digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(1000);
     for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);}
    //2
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);
    }
    //1
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(1000);
    for(int z= 3; z<11; z++){
    digitalWrite(z, LOW);
    }
    //0
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(11,HIGH);
  int tono=map;
  tone(8, 10, 20);
  delay(5000);
  digitalWrite(11, LOW);
  tone(0, 0, 0);
  
         }
