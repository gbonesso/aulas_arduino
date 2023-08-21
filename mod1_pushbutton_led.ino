/*
Módulo 1

Baseado em:
https://docs.arduino.cc/built-in-examples/digital/Button
*/

// Área de declaração de variáveis e constantes globais
// Constantes não podem mudar. Usamos para definir números de pinos
const int pinoLed = 13;  // Pino do LED
const int pinoBotao = 2; // Pino do pushbutton (chave táctil)

// Variáveis podem ser modificadas
int estadoBotao = 0; // Variável para ler o estado do botão

void setup() {
  // Inicializa o pino do LED como saída
  pinMode(pinoLed, OUTPUT);
  // inicializa o pino do botão como entrada
  pinMode(pinoBotao, INPUT);
}

void loop()
{
  // Lê o estado do pino do botão
  estadoBotao = digitalRead(pinoBotao);
  
  // Verifica se o botão está pressionado.
  // Se estiver, a variável estadoBotao será HIGH
  if(estadoBotao == HIGH) {
    // Liga o LED
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
  	// Desliga o LED
    digitalWrite(LED_BUILTIN, LOW);
  }
}
