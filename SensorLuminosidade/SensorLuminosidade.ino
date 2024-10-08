#include <Arduino.h>


// Valor Permanente do Pin
const int sensorPin = 15;
const int ledPin = 4;
const int potenPin = 34;

void setup() {
  Serial.begin(115200);
  while(!Serial);
  Serial.println("INICIEI!");
  
  // Inicialização
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(potenPin, INPUT);
}

void loop() {
  // Ler valor do estado do sensor de iluminação
  int valLuz = analogRead(sensorPin);
  int valPoten = analogRead(potenPin);

  // HIGH = Apertado
  Serial.println(valPoten);
  if (valLuz > valPoten) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}