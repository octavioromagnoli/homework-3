#ifndef PRESION_HPP
#define PRESION_HPP

#include "MedicionBase.hpp"

class Presion : public MedicionBase
{
public:
  float presionEstatica;
  float presionDinamica;
  Presion(float p, float q, float t);
};

#endif // PRESION_HPP