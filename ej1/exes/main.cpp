#include <iostream>
#include "Presion.hpp"
#include "Posicion.hpp"
#include "SaveFlightData.hpp"
using namespace std;

int main()
{
  cout << endl
       << string(50, '=') << endl;
  cout << "    EJERCICIO 1     " << endl;
  cout << string(50, '=') << endl
       << endl;

  cout << "Se crearan los objetos Posicion y Presion" << endl
       << endl;
  Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
  Presion presion(101.3f, 5.8f, 6.1f);

  posicion.imprimir();
  presion.imprimir();

  cout << endl;

  cout << "Se serializarán dichos datos en el archivo creado (archivo-ej-1) utilizando la clase SaveFlightData " << endl;

  SaveFlightData saveFlightData(posicion, presion);

  // Serializar el objeto en un archivo "archivo-ej-1"
  ofstream outFile("archivo-ej-1", ios::binary);
  if (outFile.is_open())
  {
    saveFlightData.serializar(outFile);
    outFile.close();
    cout << "Datos serializados correctamente en 'archivo-ej-1'.\n";
  }
  else
  {
    cerr << "Error al abrir el archivo para serialización.\n";
  }

  cout << endl
       << "Se deserializarán dichos datos en un nuevo objeto de clase  SaveFlightData " << endl;

  Posicion posNula(0, 0, 0, 0);
  Presion presNula(0, 0, 0);
  // Crear otro objeto SaveFlightData y deserializar la información
  SaveFlightData loadedFlightData(posNula, presNula);
  ifstream inFile("archivo-ej-1", ios::binary);
  if (inFile.is_open())
  {
    loadedFlightData.deserializar(inFile);
    inFile.close();
    cout << "Datos deserializados correctamente desde 'archivo-ej-1'.\n";
  }
  else
  {
    cerr << "Error al abrir el archivo para deserialización.\n";
  }

  cout << endl;

  cout << "Resultado en objeto grabado mediante deserializacion: " << endl;

  // Imprimir los datos deserializados
  loadedFlightData.imprimir();

  cout << endl
       << "Se elimina el archivo \"archivo-ej-1\" (por prolijidad)" << endl;

  return 0;
}