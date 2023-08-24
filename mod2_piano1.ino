/*
Módulo 2 - Projeto Piano
*/
const int pinoLedVermelho = 13;
const int pinoLedAmarelo = 12;
const int pinoLedVerde = 11;
const int pinoBotaoVermelho = 2;
const int pinoBotaoAmarelo = 3;
const int pinoBotaoVerde = 4;
const int pinoBuzzer = 10; // O buzzer (piezo) será conectado ao pino 10
int estadoBotaoVermelho = 0;
int estadoBotaoAmarelo = 0;
int estadoBotaoVerde = 0;
int delayBuzzer = 0; // Variável para armazenar o tempo de espera do buzzer

void setup(){
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoBotaoVermelho, INPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoBotaoAmarelo, INPUT);
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoBotaoVerde, INPUT);
  pinMode(pinoBuzzer, OUTPUT);  // O pino do buzzer deve ser configurado como saída
}

void loop(){
  estadoBotaoVermelho = digitalRead(pinoBotaoVermelho);
  estadoBotaoAmarelo = digitalRead(pinoBotaoAmarelo);
  estadoBotaoVerde = digitalRead(pinoBotaoVerde);
  
  if (estadoBotaoVermelho == HIGH){
  	digitalWrite(pinoLedVermelho, HIGH); // Liga led vermelho
    delayBuzzer = 100;
  }
  
  if (estadoBotaoAmarelo == HIGH){
    digitalWrite(pinoLedAmarelo, HIGH); // Liga led amarelo
    delayBuzzer = 200;
  }
  
  if (estadoBotaoVerde == HIGH){
    digitalWrite(pinoLedVerde, HIGH); // Liga led amarelo
    delayBuzzer = 500;
  }
  
  if(delayBuzzer > 0) {
    digitalWrite(pinoBuzzer, HIGH); // Liga o buzzer
    delayMicroseconds(delayBuzzer);
    digitalWrite(pinoBuzzer, LOW); // Desliga o buzzer
    delayMicroseconds(delayBuzzer);
    delayBuzzer = 0; // Evita que o som seja tocado constantemente
    digitalWrite(pinoLedVermelho, LOW); 
    digitalWrite(pinoLedAmarelo, LOW); 
    digitalWrite(pinoLedVerde, LOW);
  }
    
}