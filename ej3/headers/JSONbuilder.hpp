#ifndef JSONBUILDER_HPP
#define JSONBUILDER_HPP
#include <iostream>
#include "vectGenerator.hpp"
#include <sstream>
using namespace std;

class JSONbuilder
{
private:
  vector<pair<string, string>> toLog;

public:

  JSONbuilder() = default;

  template <typename T>
  void assignTag(vectGenerator<T> &addedVector, string newTag)
  {
    toLog.push_back(pair(newTag, addedVector.proccessData()));
  }

  void logJSON()
  {
    ostringstream oss;
    oss << "{ ";
    for (size_t i = 0; i < toLog.size(); i++)
    {
      if (i != 0) oss << "  ";
      oss << "\"" << toLog[i].first << "\":" << toLog[i].second;
      if (i != toLog.size() - 1)
      {
        oss << ",";
      }
      oss << endl;
    }
    oss << "}" << endl;
    cout << oss.str();
  }
};

#endif // JSONBUILDER_HPP