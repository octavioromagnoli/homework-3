#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP

#include "IMediciones.hpp"
#include <memory>
using namespace std;

class MedicionBase : public IMediciones
{
protected:
  unique_ptr<float> tiempoMedicion;
public:
  MedicionBase(float t = 0);
  float getTiempo();
  virtual void imprimir() = 0;
  void serializar(ofstream &) override;
  void deserializar(ifstream &) override;
  virtual ~MedicionBase() = default;
};

#endif // MEDICIONBASE_HPP