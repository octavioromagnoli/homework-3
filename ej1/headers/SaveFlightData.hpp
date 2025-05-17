#ifndef SAVEFLIGHTDATA_HPP
#define SAVEFLIGHTDATA_HPP

#include "Presion.hpp"
#include "Posicion.hpp"
#include <fstream>
using namespace std;

class SaveFlightData
{
public:
  Posicion posicion;
  Presion presion;
  SaveFlightData(const Posicion &p, const Presion &q);
  void serializar(ofstream& out);
  void deserializar(ifstream& in);
  void imprimir();
};
#endif // SAVEFLIGHTDATA_HPP