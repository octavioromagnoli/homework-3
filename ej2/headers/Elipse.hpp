#ifndef ELIPSE_HPP
#define ELIPSE_HPP
#include "Posicionable.hpp"
#include "Punto.hpp"

class Elipse : public Posicionable
{
private:
  float semiMayor;
  float semiMenor;

public:
  Elipse(const Punto &posicion, float semiMayor, float semiMenor);
  Elipse(float x, float y, float semiMayor, float semiMenor);
  void setSemiMayor(float smayor);
  float getSemiMayor() const;

  void setSemiMenor(float smenor);
  float getSemiMenor() const;
};

#endif // ELIPSE_HPP