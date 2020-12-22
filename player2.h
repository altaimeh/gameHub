#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class player2 {

public:

void print_vector(vector<int> noobVector) {
    cout << "Your guesses were: " << endl;
    for(int i = 0; i < noobVector.size(); i++) {
        cout << noobVector[i] << "\t";
    }
    cout << endl;
    if(noobVector.size() > 5) {
        cout << "That's wack! You can do better than that" << endl;
    }

    if(noobVector.size() < 5 && noobVector.size() >= 3) { 
        cout << "Not too bad..." << endl;
    }

    if(noobVector.size() < 3) {
        cout << "YOU ARE A GOD!" << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

void play_game_2() {
    vector<int> guesses;
    int count = 0;
    string player2;  

    int random = rand() % 101;
    cout << "Welcome!" << endl;
    cout << "Player 2 what is your name?" << endl;
    cin >> player2;
    cout << "Hi there " << player2 << "!" << endl; 
    cout << "Lets play!" << endl;
    cout << "Guess a number " << player2 << " : " << endl;

    //cout << random << endl;
    while(true) {
        int guess;
        cin >> guess;
        count++; 
        guesses.push_back(guess);
        
        
        if(guess == random) {
            cout << "You did it dawg!" << endl;
            break;
        }
        else if(guess < random) {
            cout << "Too Low!" << endl;
        }
        else {
            cout << "Too High!" << endl;
        }
    }
    ifstream input("best_score_2.txt");
    if(!input.is_open()) {
        cout << "Error! Cannot open file!" << endl;
        return;
    }
    int best_score;
    input >> best_score;
    ofstream output("best_score_2.txt");
    if(!output.is_open()) {
        cout << "Error! Cannot open file!" << endl;
        return;
    }
    if(count < best_score) {
        output << count;
    }
    else {
        output << best_score;
    }
    print_vector(guesses);
}

};
