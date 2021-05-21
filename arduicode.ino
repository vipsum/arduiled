int bombillo = 12;
int led2 = 13;
int espera = 200;
void setup(){
  pinMode(bombillo, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  digitalWrite(bombillo, HIGH);
  delay(espera * 2);
  digitalWrite(bombillo, LOW);
  delay(espera);
    
  digitalWrite(led2, HIGH);
  delay(espera);
  digitalWrite(led2, LOW);
  delay(espera * 2);
}