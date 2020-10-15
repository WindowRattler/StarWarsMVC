#include <string>
#include "forcebeing.h"

using namespace std;

//Jedi class (good guy)
class Jedi : public ForceBeing {
  
  public :
  Jedi(string jediName, int powerLevel) : ForceBeing(powerLevel){
    setName(jediName);
    setGood();
  }
//inline function
  inline int getPowerLevel(){
    return ForceBeing::getPowerLevel() + 1;
   }

};