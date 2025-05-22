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

  vector<int> vec1 = {1, 2, 4, 6};
  vector<int> vec2 = {3, 4};
  vector<int> vec3 = {3, 4, 5};
  generaIntList.addValues(vec1, vec2, vec3);
  cout << generaIntList.proccessData();
  return 0;
}