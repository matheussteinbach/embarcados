#include <Arduino.h>


// Valor Permanente do Pin
const int buttonPin = 34;
const int ledPin =	26;

// Valor que vai mudar do botão
int buttonState = 0;

void setup() {
  Serial.begin(115200);
  while(!Serial);
  Serial.println("INICIEI!");
  
  // Inicialização
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Ler valor do estado do botão
  buttonState = digitalRead(buttonPin);

  // HIGH = Apertado
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Estou ligado");
  } else {
    digitalWrite(ledPin, LOW);
  }
}