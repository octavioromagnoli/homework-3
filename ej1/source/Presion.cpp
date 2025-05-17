#include "MedicionBase.hpp"
#include "Presion.hpp"
#include <memory>
#include <iostream>
using namespace std;

Presion::Presion(float p, float q, float t) : MedicionBase(t), presionEstatica(p), presionDinamica(q) {};

void Presion::imprimir()
{
  cout << "En tiempo " << getTiempo() << " las presiones son: " << endl;
  cout << " | presión estática es de " << presionEstatica << endl;
  cout << " | presión dinámica es de " << presionDinamica << endl;
};

void Presion::serializar(ofstream &out)
{
  MedicionBase::serializar(out);
  out.write(reinterpret_cast<char *>(&presionEstatica), sizeof(float));
  out.write(reinterpret_cast<char *>(&presionDinamica), sizeof(float));
}

void Presion::deserializar(ifstream &in)
{
  MedicionBase::deserializar(in);
  in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
  in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

Presion& Presion::operator=(const Presion& otro) {
    if (this != &otro) {
        presionEstatica = otro.presionEstatica;
        presionDinamica = otro.presionDinamica;
        *tiempoMedicion = *otro.tiempoMedicion;
    }
    return *this;
}