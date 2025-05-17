#include "Posicionable.hpp"

Posicionable::Posicionable(const Punto &posicion) : posicion(posicion) {};

Posicionable::Posicionable(float posX, float posY) : posicion(Punto(posX, posY)) {};

void Posicionable::setPosicion(const Punto &newPosicion)
{
  posicion = newPosicion;
}

void Posicionable::setPosicion(float newX, float newY)
{
  posicion.setPosX(newX);
  posicion.setPosY(newY);
}

Punto Posicionable::getPosicion() const
{
  return posicion;
}