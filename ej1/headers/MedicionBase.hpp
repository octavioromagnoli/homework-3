#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP

#include <memory>
using namespace std;

class MedicionBase
{
private:
  unique_ptr<float> tiempoMedicion;

public:
  MedicionBase();
  float getTiempo();
  virtual void imprimir() = 0;
  virtual ~MedicionBase() = default;
};

#endif // MEDICIONBASE_HPP