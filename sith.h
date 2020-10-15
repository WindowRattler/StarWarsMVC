#include <string>
#include "forcebeing.h"

using namespace std;


//Sith class (bad guy)
class Sith : public ForceBeing {
  public :
  Sith(string sithName, int powerLevel) : ForceBeing(powerLevel) {
    setName(sithName);
    setEvil();
  }
//template function
template <typename T>
  inline T getPowerLevel() {
    return ForceBeing::getPowerLevel() - 1;
  }

  string getName() {
    return "Sith Lord: " + ForceBeing::getName();
  }
};