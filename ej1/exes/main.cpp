#include <iostream>
#include "Presion.hpp"
#include "Posicion.hpp"
#include "SaveFlightData.hpp"

int main()
{
  Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
  Presion presion(101.3f, 5.8f, 6.1f);

  posicion.imprimir();
  presion.imprimir();

  cout << endl;

  // Crear un objeto SaveFlightData con posicion y presion como parámetros
  SaveFlightData saveFlightData(posicion, presion);

  // Serializar el objeto en un archivo "archivo-ej-1"
  std::ofstream outFile("archivo-ej-1", std::ios::binary);
  if (outFile.is_open())
  {
    saveFlightData.serializar(outFile);
    outFile.close();
    std::cout << "Datos serializados correctamente en 'archivo-ej-1'.\n";
  }
  else
  {
    std::cerr << "Error al abrir el archivo para serialización.\n";
  }

  Posicion posNula(0, 0, 0, 0);
  Presion presNula(0, 0, 0);
  // Crear otro objeto SaveFlightData y deserializar la información
  SaveFlightData loadedFlightData(posNula, presNula);
  std::ifstream inFile("archivo-ej-1", std::ios::binary);
  if (inFile.is_open())
  {
    loadedFlightData.deserializar(inFile);
    inFile.close();
    std::cout << "Datos deserializados correctamente desde 'archivo-ej-1'.\n";
  }
  else
  {
    std::cerr << "Error al abrir el archivo para deserialización.\n";
  }

  cout << endl;

  // Imprimir los datos deserializados
  loadedFlightData.imprimir();

  return 0;
}