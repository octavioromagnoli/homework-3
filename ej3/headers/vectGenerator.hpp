#ifndef VECTGENERATOR_HPP
#define VECTGENERATOR_HPP

#include <vector>
#include <iostream>
#include <sstream>
#include <type_traits>
using namespace std;

template <typename T>
class vectGenerator
{
private:
  vector<T> vectorResultante;

  string proccesDoubles(vector<double> vecDoubles)
  {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vecDoubles.size(); i++)
    {
      if (i != vecDoubles.size() - 1)
      {
        oss << vecDoubles[i] << ", ";
      }
      else
      {
        oss << vecDoubles[i] << "]";
      }
    }
    return oss.str();
  };

  string proccessStrings(vector<string> vecStrings)
  {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vecStrings.size(); i++)
    {
      if (i != vecStrings.size() - 1)
      {
        oss << "\"" << vecStrings[i] << "\", ";
      }
      else
      {
        oss << "\"" << vecStrings[i] << "\"]";
      }
    }
    return oss.str();
  };

  string proccessIntLists(vector<vector<int>> vectIntLists)
  {
    ostringstream oss;
    oss << "[ " << endl;
    for (size_t i = 0; i < vectIntLists.size(); i++)
    {
      oss << "         " << "[";
      for (size_t j = 0; j < vectIntLists[i].size(); j++)
      {

        oss << vectIntLists[i][j];

        if (j != vectIntLists[i].size() - 1)
        {
          oss << ", ";
        }
      }
      oss << "]";
      if (i != vectIntLists.size() - 1)
      {
        oss << ", " << endl;
      }
      else
      {
        oss << endl;
      }
    }
    oss << "         ]";
    return oss.str();
  };

public:

  vectGenerator() = default;

  template <typename... Args>
  void addValues(Args... argumentos)
  {
    (vectorResultante.push_back(argumentos), ...);
  }

  string proccessData()
  {
    ostringstream oss;

    if constexpr (is_floating_point_v<T>)
    {
      oss << proccesDoubles(vectorResultante);
    }

    if constexpr (is_same_v<T, string>)
    {
      oss << proccessStrings(vectorResultante);
    }

    if constexpr (is_same_v<T, vector<int>>)
    {
      oss << proccessIntLists(vectorResultante);
    }

    return oss.str();
  }
};

#endif // VECTGENERATOR_HPP