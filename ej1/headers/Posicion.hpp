#ifndef POSICION_HPP
#define POSICION_HPP

#include "MedicionBase.hpp"
#include <fstream>

class Posicion : public MedicionBase
{
public:
  float latitud;
  float longitud;
  float altitud;
  void imprimir() override;
  void serializar(ofstream &) override;
  void deserializar(ifstream &) override;
  Posicion(float lat, float lon, float alt, float t);
  Posicion &operator=(const Posicion &otro);
};

#endif //  POSICION_HPP