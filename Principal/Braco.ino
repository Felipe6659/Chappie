//--------------------  MAIN  -------------------------\\

#include <Servo.h>

int valorServoPararado = 90; 

Servo servoBracoDireito;
Servo servoBracoEsquerdo;

Servo rodaDireita;
Servo rodaEsquerda;

void setup() 
{
  Serial.begin(115200);
  servoBracoEsquerdo.attach(3);
  servoBracoDireito.attach(5);
  Serial.println("Começando em 10 segundos: ");
}

void loop() 
{
  subirBraco();
  delay(1000);
  parar();
  delay(3000);
} 

