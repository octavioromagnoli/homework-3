#include "Punto.hpp"

Punto::Punto(float x, float y) : posX(x), posY(y) {}

float Punto::getPosX() const {
  return posX;
}

float Punto::getPosY() const {
  return posY;
}

void Punto::setPosX(float x) {
  posX = x;
}

void Punto::setPosY(float y) {
  posY = y;
}