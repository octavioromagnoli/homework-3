#ifndef POSICION_HPP
#define POSICION_HPP

#include "MedicionBase.hpp"

class Posicion : public MedicionBase
{
public:
  float latitud;
  float longitud;
  float altitud;
  Posicion(float lat, float lon, float alt, float t);
};

#endif //  POSICION_HPP