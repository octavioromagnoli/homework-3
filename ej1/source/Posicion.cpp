#include "MedicionBase.hpp"
#include "Posicion.hpp"
#include <memory>
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {};
