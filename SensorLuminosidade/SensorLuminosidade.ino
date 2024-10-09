#include <Arduino.h>

const int sensorPin = 15;
const int ledPin = 4;
const int potenPin = 34;

void setup() {
  Serial.begin(115200);
  while(!Serial);
  
  // Inicialização
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(potenPin, INPUT);
  Serial.println("INICIEI!");
}

void loop() {
  // Ler valor do sensor de iluminação
  int valLuz = analogRead(sensorPin);
  int valPoten = analogRead(potenPin);

  // Valor baixo = Muita luz, Valor alto = Pouca luz
  Serial.print("Luz:");
  Serial.println(valLuz);
  Serial.print("Potenciometro:");
  Serial.println(valPoten);
  if (valLuz > valPoten) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}