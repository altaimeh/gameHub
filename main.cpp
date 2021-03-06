#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include "player1.cpp"
#include "shopping1.cpp"
#include "fighting1.cpp"

using namespace std;


int main() {
    srand(time(NULL));
    int choice;
    player1 guessing1;
    shopping1 shop1;
    fights fighting1;  
    
    
    do {
        cout << "Welcome to the game room!" << endl;
        cout << "Please choose from the following options" << endl;
        cout << "0. Quit" << endl;
        cout << "1. Play the guessing game" << endl;
        cout << "2. Play the shopping game" << endl;
        cout << "3. Play the fighting game" << endl;
        cin >> choice;
        switch(choice) {
            case 0:
                cout << ":( until next time!" << endl;
                return 0;
            case 1:
                guessing1.play_game_1();
                break;
            case 2:
                shop1.shop(); 
                break;
            case 3:
                fighting1.fight();
                break;
            }
        }
        while(choice != 0);
} 