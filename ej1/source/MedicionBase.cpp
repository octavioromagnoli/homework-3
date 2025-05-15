#include "MedicionBase.hpp"
#include <memory>
using namespace std;

MedicionBase::MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)) {};

float MedicionBase::getTiempo(){
  return *tiempoMedicion;
}