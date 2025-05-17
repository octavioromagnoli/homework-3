#ifndef PROCESADORFIGURA_HPP
#define PROCESADORFIGURA_HPP

#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Rectangulo.hpp"
constexpr float PI = 3.141592653589793;

template <typename T>
class ProcesadorFigura
{
public:
  void calcularArea(T &)
  {
    cout << "No se reconoce la figura, no se puede calcular su área" << endl;
  }
};

template <>
class ProcesadorFigura<Circulo>
{
public:
  float calcularArea(Circulo &circulo)
  {
    return circulo.getRadio() * PI;
  }
};

template <>
class ProcesadorFigura<Elipse>
{
public:
  float calcularArea(Elipse &elipse)
  {
    return elipse.getSemiMayor() * elipse.getSemiMenor() * PI;
  }
};

template <>
class ProcesadorFigura<Rectangulo>
{
public:
  float calcularArea(Rectangulo & rectangulo)
  {
    return rectangulo.getAlto() * rectangulo.getAncho();
  }
};



#endif // PROCESADORFIGURA_HPP