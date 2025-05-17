#ifndef POSICIONABLE_HPP
#define POSICIONABLE_HPP

#include "Punto.hpp"

class Posicionable
{
private:
  Punto posicion;
  
public:
  Posicionable(const Punto& posicion);
  Posicionable(float posX, float posY);
  
  void setPosicion(const Punto &);
  void setPosicion(float x, float y);

  Punto getPosicion() const;
};

#endif // POSICIONABLE_HPP