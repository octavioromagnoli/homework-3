#include <iostream>
#include <vectGenerator.hpp>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vectGenerator<vector<int>> generaIntList;
  vectGenerator<double> generaDouble;
  vectGenerator<string> generaString;

  vector<int> vec1 = {1, 2,};
  vector<int> vec2 = {3, 4};
  vector<int> vec3 = {3, 4};
  generaIntList.addValues(vec1, vec2, vec3);
  cout << generaIntList.proccessData();

  generaDouble.addValues(4.6, 2.3, 3.3);
  cout << generaDouble.proccessData();
  generaString.addValues("Hola", "mundo");
  cout << generaString.proccessData();
  return 0;
}