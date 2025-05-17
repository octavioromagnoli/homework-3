#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include "Posicionable.hpp"
#include "Punto.hpp"

class Rectangulo : public Posicionable
{
private:
  float ancho;
  float alto;

public:
  Rectangulo(const Punto &posicion, float ancho, float alto);
  Rectangulo(float x, float y, float ancho, float alto);

  float getAncho() const;
  float getAlto() const;
  void setAncho(float newAncho);
  void setAlto(float newAlto);
};

#endif // RECTANGULO_HPP