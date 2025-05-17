#include <iostream>
#include "Punto.hpp"
#include "Circulo.hpp"
#include "Rectangulo.hpp"
#include "Elipse.hpp"
#include "ProcesadorFigura.hpp"

using namespace std;


int main() {
  Punto origen(0, 0);

  Circulo circu(origen, 4);
  Rectangulo rect(2, 2, 3, 3);
  Elipse elips(origen, 14, 12);

  ProcesadorFigura<Circulo> procesaCirculo;
  ProcesadorFigura<Rectangulo> procesaRectangulo;
  ProcesadorFigura<Elipse> procesaElipse;

  cout << "Área del círculo: " << procesaCirculo.calcularArea(circu) << endl;
  cout << "Área del rectángulo: " << procesaRectangulo.calcularArea(rect) << endl;
  cout << "Área de la elipse: " << procesaElipse.calcularArea(elips) << endl;

}