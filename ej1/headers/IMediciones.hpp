#ifndef IMEDICIONES_HPP
#define IMEDICIONES_HPP

#include <fstream>
using namespace std;

class IMediciones
{
public:
  virtual ~IMediciones() = default;
  virtual void serializar(ofstream &) = 0;
  virtual void deserializar(ifstream &) = 0;
};

#endif // IMEDICIONES_HPP