const int Pin_Del_Sensor = A0;
const float Temperatura_De_Referencia = 20.0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int NumeroPin = 2; NumeroPin < 5; NumeroPin++) {
  pinMode(NumeroPin, OUTPUT);
  digitalWrite(NumeroPin, LOW);
}
}

void loop() {
  int Valor_Del_Sensor = analogRead(Pin_Del_Sensor);
  Serial.print("Valor de sensor:  ");
  Serial.print(Valor_Del_Sensor);
  // put your main code here, to run repeatedly:
  float Tension = (Valor_Del_Sensor/1024.0)*5.0;
  Serial.print(", Voltios: ");
  Serial.print(Tension);
  Serial.print(", grados c: ");
  float  Temperatura = (Tension - 0.5) *100;
  Serial.println(Temperatura);
  if(Temperatura < Temperatura_De_Referencia) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  if(Temperatura >= Temperatura_De_Referencia+2 && Temperatura < Temperatura_De_Referencia+4){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  if(Temperatura >= Temperatura_De_Referencia+4 && Temperatura < Temperatura_De_Referencia+6){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  if(Temperatura > Temperatura_De_Referencia+6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  }
