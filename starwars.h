#include <string>


using namespace std;

//method that sets up players and determines winner
//passes by reference
class StarWars {

    public:
     static string getWinner(ForceBeing &player1, ForceBeing &player2) {
        return player1.getPowerLevel() > player2.getPowerLevel() ? player1.getName() : player2.getName();
       
    }
    //Overloading the print method in StarWars using winner
    static void printWinner(string winner) {
        cout << "\n\t\t\tThe winner is:\t" + winner << "\n"<< endl;
    }
    static void printPower(string winner){
        cout << winner << " is most powerful!!\n" << "\n" << endl;
    }
    static void printBetter(string winner){
        cout << "Surely "<< winner << " is best!!\n" << "\n" << endl;
    }
};