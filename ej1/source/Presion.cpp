#include "MedicionBase.hpp"
#include "Presion.hpp"
#include <memory>
using namespace std;

Presion::Presion(float p, float q, float t) : MedicionBase(t), presionEstatica(p), presionDinamica(q) {};
