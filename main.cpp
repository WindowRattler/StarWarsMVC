//with the powerLevel conversion

//template function example is found in sith.h and occurs 
//with the powerLevel conversion


//macro functions
#define truePowerJedi(jedi) cout << #jedi << " " << endl;
#define truePowerSith(sith) cout << #sith << " " << endl;
using namespace std;

//main method
    int main() {
        Sith darthVader("Darth Vader",100);
        Jedi lukeSkywalker("Luke Skywalker",99);
        int jedi(100), sith(99);
        StarWars::printWinner(StarWars::getWinner(darthVader,lukeSkywalker));
        StarWars::printPower(StarWars::getWinner(darthVader, lukeSkywalker));
        StarWars::printBetter(StarWars::getWinner(darthVader, lukeSkywalker));
        truePowerJedi(jedi)
        cout << jedi << " <--true power\n" << endl;
        truePowerSith(sith)
        cout << sith<< " <--true power\n"  << endl;
        return 0;
}