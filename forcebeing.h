#include <string>
#ifndef f
#define f

using namespace std;


class ForceBeing {
  private:
   int power_level;
   string name;
   bool evil;

  protected :
  ForceBeing(int level) {
      power_level = level;
  }

  void setPowerLevel(int level) {
    power_level = level;
  }

  void setName(string characterName) {
    name = characterName;
  }

  public :
  virtual int getPowerLevel() {
    return power_level;
  }

  virtual string getName() {
    return name;
  }

  void setEvil() {
    evil = true;
  }

  void setGood() {
    evil = false;
  }

};
#endif