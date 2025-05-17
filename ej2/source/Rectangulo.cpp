#include "Rectangulo.hpp"
#include "Posicionable.hpp"

Rectangulo::Rectangulo(const Punto &posicion, float ancho, float alto) : Posicionable(posicion), ancho(ancho), alto(alto) {};

Rectangulo::Rectangulo(float x, float y, float ancho, float alto) : Posicionable(x, y), ancho(ancho), alto(alto) {};

float Rectangulo::getAncho() const
{
  return ancho;
}

float Rectangulo::getAlto() const
{
  return alto;
}

void Rectangulo::setAncho(float newAncho)
{
  ancho = newAncho;
}

void Rectangulo::setAlto(float newAlto)
{
  alto = newAlto;
}