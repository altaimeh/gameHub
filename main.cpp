#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include "player1.cpp"
#include "shopping1.cpp"

using namespace std;


int main() {
    srand(time(NULL));
    int choice;
    player1 guessing1;
    shopping1 shop1;
    
    
    do {
        cout << "Welcome to 'Can You Guess The Number!'" << endl;
        cout << "Please choose from the following options" << endl;
        cout << "0. Quit" << endl;
        cout << "1. Play the guessing game" << endl;
        cout << "2. Play the shopping game" << endl;
        cin >> choice;
        switch(choice) {
            case 0:
                cout << "Rip...come again!" << endl;
                return 0;
            case 1:
                guessing1.play_game_1();
                break;
            case 2:
                shop1.shop(); 
                break;
            }
        }
        while(choice != 0);
} 