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
    cout << "0. Green Apples (1000), price: $0.50 / apple" << endl;
    cout << "1. Oranges (4000), price: $0.75 / orange" << endl;
    cout << "2. Bananas (6000), price: $0.30 / banana" << endl;
    cout << "3. Red Apples (2500), price: $0.90 / red apple" << endl;
    cout << "4. Apricots (4000), price: $0.30 / apricot" << endl;
    cout << "5. Blueberries (5000), price: $0.10 / blueberry" << endl;
    cout << "6. Blackberries (5000), price: $0.10 / blackberry" << endl;
    cout << "7. Cherries (5000), price: $0.10 / cherry" << endl;
    cout << "8. Cranberries (5000), price: $0.10 / cranberry" << endl;
    cout << "9. Gooseberries (5000), price: $0.10 / gooseberry" << endl;
    cout << "10. Raspberries (5000), price: $0.10 / raspberry" << endl;
    cout << "11. Strawberries (5000), price: $0.10 / strawberry" << endl;
    cout << "12. Grapes (10000), price: $0.05 / grape" << endl;
    cout << "13. Peaches (1000), price: $0.25 / peach" << endl;
    cout << "14. Pinneaples (2500), price: $0.90 / pinneaple" << endl;
    cout << "15. Pomegranates (3000), price: $0.45 / pomegranate" << endl;
    cout << "16. Watermelons (1000), price: $1.50 / watermelon" << endl;

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

void print_deli_bread_department() {
    cout << "Welcome to the Veggies department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "5. Pasta (35), price: $6.99 / pasta salad" << endl;
    cout << "6. Ravioli Agliolio (15), price: $7.99 / ravioli" << endl;
    cout << endl;
    cout << "Cold Sandwiches: " << endl;
    cout << "0. Chocolate Cake (50), price: $7.99 / cake" << endl; 
    cout << "1. Chicken Salad (20), price: $5.99 / chicken salad" << endl;
    cout << "2. Egg Salad (35), price: $6.99 / egg salad" << endl;
    cout << "3. Tuna (25), price: $5.99 / tuna sandwich" << endl;
    cout << "4. Turkey (40), price: $4.99 / turkey sandwich" << endl;
    cout << endl;


}
void shop() {
    vector<int> items;
    vector<int> cart;
    int decisions;
    int decisionToReturnToMenu;
    int departments;
    //string departmentChoices;
    int amountBuy;
    print_departments();
    // while((departmentChoices != "0") || (departmentChoices != "1") || (departmentChoices != "2") ||
    //       (departmentChoices != "3") || (departmentChoices != "4") || (departmentChoices != "5") ||
    //       (departmentChoices != "6") || (departmentChoices != "7") || (departmentChoices != "8") ||
    //       (departmentChoices != "9")) {
        cin >> departments;
        // if(departments != 0) {
        //     cin >> departments;
        // }
        // if(departments != 1) {
        //     cin >> departments;
        // }
        // if(departments != 2) {
        //     cin >> departments;
        // }
        // if(departments != 3) {
        //     cin >> departments;
        // }
        // if(departments != 4) {
        //     cin >> departments;
        // }
        // if(departments != 5) {
        //     cin >> departments;
        // }
        // if(departments != 6) {
        //     cin >> departments;
        // }
        // if(departments != 7) {
        //     cin >> departments;
        // }
        // if(departments != 8) {
        //     cin >> departments;
        // }
        // if(departments != 9) {
        //     cin >> departments;
        // }
    // while((departments != 0) || (departments != 1) || (departments != 2) ||
    //       (departments != 3) || (departments != 4) || (departments != 5) ||
    //       (departments != 6) || (departments != 7) || (departments != 8) ||
    //       (departments != 9)) { 
    //cin >> departments;
    if(departments == 0) { 
        print_fruit_department();
        cin >> decisions;
        switch(decisions) {
            case 0: 
                cout << "How many green apples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);  
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 1: 
                cout << "How many oranges would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 2: 
                cout << "How many bananas would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 3: 
                cout << "How many red apples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 4: 
                cout << "How many apricots would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 5: 
                cout << "How many blueberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 6: 
                cout << "How many blackberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 7: 
                cout << "How many cherries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 8: 
                cout << "How many cranberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 9: 
                cout << "How many gooseberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 10: 
                cout << "How many raspberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 11: 
                cout << "How many strawberries would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 12: 
                cout << "How many grapes would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 13: 
                cout << "How many peaches would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 14: 
                cout << "How many pinneaples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 15: 
                cout << "How many pomegranates would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;

            case 16: 
                cout << "How many watermelons would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
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
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;
        }

        }

    if(departments == 2) { 

        print_deli_bread_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many green apples would you like to buy today?" << endl;
                cin >> amountBuy;
                cart.push_back(amountBuy);  
                cout << "Would you like to check out or return to the list of departments to buy more groceries today?" << endl;
                cout << "0. Check Out" << endl;
                cout << "1. return to departments" << endl;
                cin >> decisionToReturnToMenu;
                if(decisionToReturnToMenu == 1) {
                    print_departments();
                }
            break;


        }
    }

//}
}
}; 

