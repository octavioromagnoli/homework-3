#include "MedicionBase.hpp"
#include <memory>
using namespace std;

MedicionBase::MedicionBase(int t) : tiempoMedicion(make_unique<float>(t)) {};

float MedicionBase::getTiempo(){
  return *tiempoMedicion;
}