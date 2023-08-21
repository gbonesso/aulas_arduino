/*
Blink
É o programa "Oi Mundo" para o Arduino.
O programa abaixo liga o led por um segundo e então
desliga o led por um segundo, repetidamente.
Dessa maneira criamos um "pisca-pisca" com o Arduino.

O circuito:
- Temos um led embutido na placa ligado no pino 13. Podemos
utilizar esse led para visualizar o funcionamento do programa
ou ligar um led no pino 13 (não esquece de ligar um resistor em 
série com o led...)

Baseado em:
https://docs.arduino.cc/built-in-examples/basics/Blink
*/

// O método setup() é executado somente uma vez, 
// quando o programa é iniciado
void setup()
{
  // LED_BUILTIN é o pino 13, representa o led embutido na placa
  // Inicializa o pino 13 como saída
  pinMode(LED_BUILTIN, OUTPUT); 
}

// O método loop() é executado indefinidamente, 
// enquando o Arduino estiver energizado
void loop()
{
  // Liga o led, colocando 5V no pino 13
  digitalWrite(LED_BUILTIN, HIGH); 
  // Espera por 1000 milisegundos(s) (1 segundo)
  delay(1000); 
  // Desliga o led, colocando 0V no pino 13
  digitalWrite(LED_BUILTIN, LOW);
  // Espera por 1000 milisegundos(s) (1 segundo)
  delay(1000);
}
