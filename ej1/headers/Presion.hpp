#ifndef PRESION_HPP
#define PRESION_HPP

#include "MedicionBase.hpp"

class Presion : public MedicionBase
{
public:
  float presionEstatica;
  float presionDinamica;
  void imprimir() override;
  void serializar(ofstream &) override;
  void deserializar(ifstream &) override;
  Presion &operator=(const Presion &otro);
  Presion(float p, float q, float t);
};

#endif // PRESION_HPP