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
  
  // Método usado na biblioteca do TMP36. Não usa map.
  float _vRef = 5.0;
  float _tensaoSensor = (valorBrutoSensor/1024.0) * _vRef;
  // O sensor TMP36 tem 0.5V de OffSet
  float _tempC = (_tensaoSensor - .5) * 100;
  Serial.print("--> Método da biblioteca ");
  Serial.println(_tempC);
  
  delay(1000);
}