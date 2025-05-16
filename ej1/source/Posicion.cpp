#include "MedicionBase.hpp"
#include "Posicion.hpp"
#include <memory>
#include <iostream>
#include <fstream>
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {};

void Posicion::imprimir()
{
  cout << "En tiempo " << getTiempo() << " la posición es :" << endl
       << " | Latitud: " << latitud << ", Longitud: " << longitud << ", Altitud: " << altitud << endl;
}

void Posicion::serializar(ofstream &out)
{
  MedicionBase::serializar(out);
  out.write(reinterpret_cast<char *>(&latitud), sizeof(float));
  out.write(reinterpret_cast<char *>(&longitud), sizeof(float));
  out.write(reinterpret_cast<char *>(&altitud), sizeof(float));
}

void Posicion::deserializar(ifstream &in)
{
  MedicionBase::deserializar(in);
  in.read(reinterpret_cast<char *>(&latitud), sizeof(float));
  in.read(reinterpret_cast<char *>(&longitud), sizeof(float));
  in.read(reinterpret_cast<char *>(&altitud), sizeof(float));
}

Posicion& Posicion::operator=(const Posicion& otro) {
    if (this != &otro) {
        latitud = otro.latitud;
        longitud = otro.longitud;
        altitud = otro.altitud;
        *tiempoMedicion = *otro.tiempoMedicion;
    }
    return *this;
}