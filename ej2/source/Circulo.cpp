#include "Circulo.hpp"

Circulo::Circulo(const Punto &pos, float r) : Posicionable(pos), radio(r) {};

Circulo::Circulo(float posX, float posY, float r) : Posicionable(posX, posY), radio(r) {};

float Circulo::getRadio() const {
  return radio;
}

void Circulo::setRadio(float r) {
  radio = r;
}
