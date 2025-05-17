#include "Elipse.hpp"

Elipse::Elipse(const Punto &posicion, float semiMayor, float semiMenor) : Posicionable(posicion), semiMayor(semiMayor), semiMenor(semiMenor) {};

Elipse::Elipse(float x, float y, float semiMayor, float semiMenor) : Posicionable(x, y), semiMayor(semiMayor), semiMenor(semiMenor) {};

float Elipse::getSemiMayor() const
{
  return semiMayor;
}

void Elipse::setSemiMayor(float semiMayor)
{
  this->semiMayor = semiMayor;
}

float Elipse::getSemiMenor() const
{
  return semiMenor;
}

void Elipse::setSemiMenor(float semiMenor)
{
  this->semiMenor = semiMenor;
}