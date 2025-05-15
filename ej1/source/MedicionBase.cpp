#include "MedicionBase.hpp"
#include <memory>
#include <fstream>
using namespace std;

MedicionBase::MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)) {};

float MedicionBase::getTiempo()
{
  return *tiempoMedicion;
}

void MedicionBase::serializar(ofstream &out)
{
  out.write(reinterpret_cast<const char *>(tiempoMedicion.get()), sizeof(float));
}

void MedicionBase::deserializar(ifstream &in){
  float newValue;
  in.read(reinterpret_cast<char *>(&newValue), sizeof(float));
  *tiempoMedicion = newValue;
}