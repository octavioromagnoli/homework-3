#include "SaveFlightData.hpp"
#include "Presion.hpp"
#include "Posicion.hpp"
#include <fstream>

SaveFlightData::SaveFlightData(const Posicion &p, const Presion &q) : posicion(Posicion(0, 0, 0, 0)), presion(Presion(0, 0, 0)) {
  posicion = p;
  presion = q;
};

void SaveFlightData::serializar(ofstream &out){
  posicion.serializar(out);
  presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream &in){
  posicion.deserializar(in);
  presion.deserializar(in);
}

void SaveFlightData::imprimir(){
  posicion.imprimir();
  presion.imprimir();
}

