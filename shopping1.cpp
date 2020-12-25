#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class shopping1 {

public:

void print_departments() {
    cout << "Welcome to my store!" << endl;
    cout << "Which department would you like to shop?" << endl;
    cout << "0. Fruits" << endl;
    cout << "1. Veggies" << endl;
    cout << "2. Deli / Bread" << endl;
    cout << "3. Seafood / Meat" << endl;
    cout << "4. Pasta / Condiments" << endl;
    cout << "5. Dry Goods" << endl;
    cout << "6. Baby / pet" << endl;
    cout << "7. Paper Goods" << endl;
    cout << "8. Dairy" << endl;
    cout << "9. Frozen" << endl;
}

void print_fruit_department() {
    cout << "Welcome to the Fruit department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << "0. Green Apples (100), price: $0.50 / apple" << endl;
    cout << "1. Oranges (400), price: $0.75 / orange" << endl;
    cout << "2. Bananas (600), price: $0.30 / banana" << endl;
    cout << "3. Red Apples (250), price: $0.90 / red apple" << endl;
}

void print_veggies_department() {
    cout << "Welcome to the Veggies department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << "0. Tomatoes (500), price: $0.20 / tomato" << endl;
    cout << "1. Cabbages (400), price: $0.60 / cabbage" << endl;
    cout << "2. Asparaguses (350), price: $0.50 / asparagus" << endl;
    cout << "3. Artichokes (200), price: $0.30 / artichoke" << endl;
    cout << "4. Arugulas (200), price: $0.30 / arugula" << endl;
    cout << "5. Spinach (400), price: $0.60 / spinach" << endl;
    cout << "6. Beets (200), price: $0.90 / beet" << endl;
    cout << "7. Bok Choys (100), price: $0.85 / bok choy" << endl;
    cout << "8. Green Beans (1000), price: $0.30 / green bean" << endl;
    cout << "9. Broccolis (500), price: $0.50 / broccoli" << endl;
    cout << "10. Brussel Sprouts (800), price: $0.60 / brussel sprout" << endl;
    cout << "11. Carrots (1000), price: $0.10 / carrot" << endl;
    cout << "12. Cauliflower (400), price: $0.10 / cauliflower" << endl;
    cout << "13. Celery (600), price: $0.10 / celery stick" << endl;
    cout << "14. Cucumbers (700), price: $0.05 / cucumber" << endl;
    cout << "15. Eggplants (700), price: $0.20 / eggplant" << endl;
    cout << "16. Soybeans (1500), price: $0.05 / soybean" << endl;
    cout << "17. Lettuce (800) , price: $0.25 / lettuce" << endl;
    cout << "18. Onions (900), price: $0.15 / onion" << endl;
    cout << "19. Green Peppers (400), price: $0.13 / green pepper" << endl;
    cout << "20. Potatoes (2000), price: $0.15 / potato" << endl;

}

void shop() {
    vector<int> items;
    vector<int> cart;
    int decisions;
    int returnToMenu;
    int decisionToReturnToMenu;
    int departments;
    int amountBuy;
    print_departments();
    cin >> departments;
    if(departments == 0) { 
        print_fruit_department();
        cin >> decisions;
        switch(decisions) {
            case 0: 
                cout << "How many Green Apples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);  
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(returnToMenu == 1) {
                    print_departments();
                }
            break;

            case 1: 
                cout << "How many Oranges would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(returnToMenu == 1) {
                    print_departments();
                }
            break;

            case 2: 
                cout << "How many Bananas would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(returnToMenu == 1) {
                    print_departments();
                }
            break;

            case 3: 
                cout << "How many Red Apples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(returnToMenu == 1) {
                    print_departments();
                }
            break;
        }
        }
        if(departments == 1) {
            print_veggies_department();
            cin >> decisions;
            switch(decisions) {
                case 0:
                    cout << "How many tomatoes would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 1:
                    cout << "How many cabbages would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 2:
                    cout << "How many asparaguses would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 3:
                    cout << "How many artichokes would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 4:
                    cout << "How many argulas would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;
                
                case 5:
                    cout << "How many spinach would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 6:
                    cout << "How many beets would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 7:
                    cout << "How many bok choys would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 8:
                    cout << "How many green beans would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 9:
                    cout << "How many broccolis would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 10:
                    cout << "How many brussel sprouts would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 11:
                    cout << "How many carrots would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 12:
                    cout << "How many cauliflowers would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 13:
                    cout << "How many celery would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 14:
                    cout << "How many cucumbers would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 15:
                    cout << "How many eggplants would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 16:
                    cout << "How many soybeans would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 17:
                    cout << "How many lettuces would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 18:
                    cout << "How many onions would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 19:
                    cout << "How many green peppers would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

                case 20:
                    cout << "How many potatoes would you like to buy today?" << endl;
                    cin >> amountBuy;
                    cart.push_back(amountBuy);  
                    cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                    cout << "0. Check Out" << endl;
                    cout << "1. return to departments" << endl;
                    cin >> decisionToReturnToMenu;
                    if(returnToMenu == 1) {
                        print_departments();
                    }
                break;

            }
        }
    }

};

