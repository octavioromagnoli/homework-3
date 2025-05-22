#ifndef VECTGENERATOR_HPP
#define VECTGENERATOR_HPP

#include <vector>
#include <iostream>
#include <sstream>
#include <type_traits>
using namespace std;

// is_integral_v<T>
template <typename T>
class vectGenerator
{
private:
  vector<T> vectorResultante;

public:
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
      oss << "[";
      for (size_t i = 0; i < vectorResultante.size(); i++)
      {
        if (i != vectorResultante.size() - 1)
        {
          oss << vectorResultante[i] << ", ";
        }
        else
        {
          oss << vectorResultante[i] << "]";
        }
      }
    }

    if constexpr (is_same_v<T, string>)
    {
      oss << "[";
      for (size_t i = 0; i < vectorResultante.size(); i++)
      {
        if (i != vectorResultante.size() - 1)
        {
          oss << "\"" << vectorResultante[i] << "\", ";
        }
        else
        {
          oss << "\"" << vectorResultante[i] << "\"]";
        }
      }
    }

    if constexpr (is_same_v<T, vector<int>>)
    {
      for (size_t i = 0; i < vectorResultante.size(); i++)
      {
        oss << "[";
        for (size_t j = 0; j < vectorResultante[i].size(); j++)
        {

          oss << vectorResultante[i][j];

          if (j != vectorResultante[i].size() - 1)
          {
            oss << ", ";
          }
        }
        oss << "]";
        if (i != vectorResultante.size() - 1)
        {
          oss << ", " << endl;
        }
        else
        {
          oss << endl;
        }
      }
    }

    return oss.str();
  }
};

#endif // VECTGENERATOR_HPP