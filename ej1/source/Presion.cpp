#include "MedicionBase.hpp"
#include "Presion.hpp"
#include <memory>
#include <iostream>
using namespace std;

Presion::Presion(float p, float q, float t) : MedicionBase(t), presionEstatica(p), presionDinamica(q) {};

void Presion::imprimir()
{
  cout << "En tiempo " << getTiempo() << " las presiones son: " << endl;
  cout << "La presión estática es de " << presionEstatica << endl;
  cout << "La presión dinámica es de " << presionDinamica << endl;
};