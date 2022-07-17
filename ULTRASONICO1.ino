
const int Trigger = 8;
const int Echo = 7;

int tiempo;
int distancia;



void setup() {
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo,INPUT);
  digitalWrite(Trigger,LOW);
}
 
void loop() {
  
  digitalWrite(Trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger,LOW);
  tiempo = pulseIn(Echo,HIGH);
  distancia = tiempo/60;

  Serial.println(distancia);
  delay(210);

}
