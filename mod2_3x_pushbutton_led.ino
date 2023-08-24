/**************\
 ** Módulo 2 **
\**************/
const int pinoLedVermelho = 13;
const int pinoLedAmarelo = 12;
const int pinoLedVerde = 11;
const int pinoBotaoVermelho = 2;
const int pinoBotaoAmarelo = 3;
const int pinoBotaoVerde = 4;
int estadoBotaoVermelho = 0;
int estadoBotaoAmarelo = 0;
int estadoBotaoVerde = 0;

void setup(){
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoBotaoVermelho, INPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoBotaoAmarelo, INPUT);
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoBotaoVerde, INPUT);
}

void loop(){
  estadoBotaoVermelho = digitalRead(pinoBotaoVermelho);
  estadoBotaoAmarelo = digitalRead(pinoBotaoAmarelo);
  estadoBotaoVerde = digitalRead(pinoBotaoVerde);
  
  if (estadoBotaoVermelho == HIGH){
  	digitalWrite(pinoLedVermelho, HIGH);
  } else {
  	digitalWrite(pinoLedVermelho, LOW);
  }
  
  if (estadoBotaoAmarelo == HIGH){
  	digitalWrite(pinoLedAmarelo, HIGH);
  } else {
  	digitalWrite(pinoLedAmarelo, LOW);
  }
  
  if (estadoBotaoVerde == HIGH){
  	digitalWrite(pinoLedVerde, HIGH);
  } else {
  	digitalWrite(pinoLedVerde, LOW);
  }
}