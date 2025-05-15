#include "MedicionBase.hpp"
#include "Posicion.hpp"
#include <memory>
#include <iostream>
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {};


void Posicion::imprimir() {
  cout << "En tiempo " << getTiempo() << " la posición es :" << endl << "Latitud: " << latitud << ", Longitud: " << longitud << ", Altitud: " << altitud << endl;
}