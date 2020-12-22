#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include "player1.h"
#include "player2.h"

using namespace std;


int main() {
    srand(time(NULL));
    int choice;
    player1 guessing1;
    player2 guessing2;
    
    do {
        cout << "Welcome to 'Can You Guess The Number!'" << endl;
        cout << "Please choose from the following options" << endl;
        cout << "0. Quit" << endl;
        cout << "1. Player 1 play the game" << endl;
        cout << "2. Player 2 play the game" << endl;
        cin >> choice;
        switch(choice) {
            case 0:
                cout << "Rip...come again!" << endl;
                return 0;
            case 1:
                guessing1.play_game_1();
                break;
            case 2:
                guessing2.play_game_2();
                break;
            }
    }
    
    while(choice != 0);

}