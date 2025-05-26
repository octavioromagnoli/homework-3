#include <iostream>
#include "vectGenerator.hpp"
#include "JSONbuilder.hpp"
#include <vector>
#include <string>
using namespace std;

int main()
{
  vectGenerator<vector<int>> generaIntList;
  vectGenerator<double> generaDouble;
  vectGenerator<string> generaString;

  
  generaDouble.addValues(1.3, 2.1, 3.2);
  generaString.addValues("Hola", "Mundo");
  vector<int> vec1 = {1, 2};
  vector<int> vec2 = {3, 4};
  generaIntList.addValues(vec1, vec2);
  // cout << generaIntList.proccessData();

  // cout << generaDouble.proccessData() << endl;
  // cout << generaString.proccessData() << endl;
  
  JSONbuilder builder;
  builder.assignTag(generaDouble,"vec_doubles");
  builder.assignTag(generaString,"palabras");
  builder.assignTag(generaIntList,"listas");

  int linelength = 50;
  cout << string(linelength, '-') << endl <<  "\t\tJSON resultante "<< endl << string(linelength, '-') << endl << endl;

  builder.logJSON();

  
  return 0;
}