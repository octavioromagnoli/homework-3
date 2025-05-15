#include <iostream>
#include "Presion.hpp"
#include "Posicion.hpp"

int main() {
  std::cout << "Hello, world!" << std::endl;
  Presion pato(10, 12, 2);
  pato.imprimir();
  Posicion perro(10,11,12,23);
  perro.imprimir();
  return 0;
}