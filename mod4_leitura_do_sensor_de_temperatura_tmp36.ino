/*
Módulo 3
Sensor de Temperatura

referência map: https://www.arduino.cc/reference/en/language/functions/math/map/
*/

const int pinoSensor = A0;
const int pinoLed = 13;
int valorBrutoSensor;
int tempCelsius;

void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorBrutoSensor = analogRead(pinoSensor);
  // Saída sensor varia entre 100mv e 1750mv. Dessa maneira
  // o pino analógico vai ler entre 20 e 358, lembrando que
  // 0V -> 0 e 5V ->1024
  tempCelsius = map(valorBrutoSensor, 20, 358, -40, 125);
  Serial.print(valorBrutoSensor);
  Serial.print(" ");
  Serial.println(tempCelsius);
  delay(1000);
}