#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Posicionable.hpp"

class Circulo : public Posicionable
{
private:
  float radio;

public:
  Circulo(const Punto &pos, float r);
  Circulo(float posX, float posY, float r);

  void setRadio(float);
  float getRadio() const;
};
#endif // CIRCULO_HPP