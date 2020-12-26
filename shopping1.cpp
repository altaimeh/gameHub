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
    cout << "Welcome to the Deli / Bread department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Pasta (35), price: $6.99 / pasta salad" << endl;
    cout << "1. Ravioli Agliolio (15), price: $7.99 / ravioli" << endl;
    cout << endl;
    cout << "Cold Sandwiches: " << endl;
    cout << "2. Chocolate Cake (50), price: $7.99 / cake" << endl; 
    cout << "3. Chicken Salad (20), price: $5.99 / chicken salad" << endl;
    cout << "4. Egg Salad (35), price: $6.99 / egg salad" << endl;
    cout << "5. Tuna (25), price: $5.99 / tuna sandwich" << endl;
    cout << "6. Turkey (40), price: $4.99 / turkey sandwich" << endl;
    cout << endl;


}

void print_seafood_meat_department() {
    cout << "Welcome to the Seafood / Meat department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Strip Steak (250), price: $8.99 / piece of steak" << endl;
    cout << "1. Rib-Eye (100), price: $7.99 / rib-eye" << endl;
    cout << "2. Tenderloin (300), price: $6.99 / tenderloin" << endl;
    cout << "3. Sirloin (400), price: $11.99 / sirloin" << endl;
    cout << "4. Flank (300), price: $9.99 / flank" << endl;
    cout << "5. Shrimp (1000), price: $0.75" << endl;
    cout << "6. Crab (400), price: $3.99 / crab" << endl;
    cout << "7. Lobster (500), price: $10.99 / lobster" << endl;
    cout << "8. Chicken (350), price: $6.99 / chicken" << endl; 

}

void print_pasta_condiments_department() {
    cout << "Welcome to the Pasta / Condiments department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Great Value Whole Wheat Rotini (300), price: $1.75 / box" << endl;
    cout << "1. No Yolks Broad Noodles (300), price: $1.99 / packet" << endl; 
    cout << "2. White Wine (400), price: $4.99 / wine bottle" << endl;
    cout << "3. Parmesan cheese (300), price: $0.75 / slice" << endl;
    cout << "4. Butter (500), price: $1.25 / stick of butter" << endl;
    cout << "5. Thousand Island Sauce (300), price: $1.99 / sauce" << endl;
    cout << "6. Ketchup (300), price: $3.99 / ketchup sauce" << endl;
    cout << "7. Mustard (400), price: $3.99 / mustard sauce" << endl;
    cout << "8. Teriyaki Sauce (350), price: $3.99 / teriyaki sauce" << endl;
}

void print_dry_goods_department() {
    cout << "Welcome to the Deli / Bread department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Cereal (400), price: $1.75 / cereal box" << endl;
    cout << "1. Hummus (300), price: $2.99 / hummus" << endl;
    cout << "2. Peanut Butter (500), price: $2.99 / peanut butter jar" << endl;
    cout << "3. Eggs (1500), price: $3.99 / box of egg" << endl;
    cout << "4. Frozen Fruit (1500), price: $2.99 / frozen fruit box" << endl;
    cout << "5. Tofu (1000), price: $3.99 / tofu box" << endl;
    cout << "6. Granola bars (2000), price: $1.99 / bar" << endl;
    cout << "7. Salmon (500), price: $2.99 / salmon fish" << endl;
    cout << "8. Chickpeas (2000), price: $1.99 / box of chickpeas" << endl;
    cout << "9. Beef Jerky (2000), price: $2.99 / beef jerky" << endl;
    cout << "10. Canned Fruit (1000), price: $1.99 / canned fruit" << endl;
    cout << "11. Macaroni and cheese (400), price: $2.99 / box of mac and cheese" << endl;
}

void print_baby_pet_department() {
    cout << "Welcome to the Baby / pet department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. 3-stage baby bath (20), price: $30 / baby bath" << endl;
    cout << "1. Stuffed Animals (50), price: $15.99 / stuffed animal" << endl;
    cout << "2. Souped-Up Baby Food Maker, price: $20 / baby food maker" << endl;
    cout << "3. Breast-feeding bootle (30), price: $11 / bottle" << endl;
    cout << "4. Strollers (20), price: $1000 / stroller" << endl;
    cout << "5. Diaper Bags (30), price: $200 / diaper bag" << endl;
    cout << "6. Portable Cribs (40), price: $200 / portable crib" << endl;
    cout << "7. Bath Towels (60), price: $13 / towel" << endl;
    cout << "8. Pacifiers (100), price: $5.50 / pacifier" << endl;
    cout << "9. Food Bags (1000), price: $9.99 / food bag" << endl;
    cout << "10. 3-in-1 Potty Trainers (100), price: $24.99 / potty trainer" << endl;
    cout << "11. Baby Healing Ointments (200), price: $14 / jar of ointment" << endl;
    cout << "12. Thermometers (300), price: $16.99 / thermometer" << endl;
    cout << "13. Baby toys (300), price: $15.99 / toy" << endl;
    cout << "14. Baby Wipes (400), price: $40 / packets of wipes" << endl;
    cout << "15. Vitamin A pills (500), price: $9.99 / bottle of bills" << endl;
    cout << "16. Vitamin B pills (500), price: $9.99 / bottle of bills" << endl;
    cout << "17. Vitamin C pills (500), price: $9.99 / bottle of bills" << endl;
    cout << "18. Vitamin D pills (500), price: $9.99 / bottle of bills" << endl;
    cout << "19. Car Seats (300), price: $200 / car seat" << endl;
    cout << "20. Sunscreen (300), price: $4.99 / tube of sunscreen" << endl;

}

void print_paper_goods_department() {
    cout << "Welcome to the Paper Goods department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Smythson London Bus Correspondence Cards (200), price: $3 / card" << endl;
    cout << "1. Choosing Keeping Pink Rivoli Writing Paper Pad (200), price: $3 / card" << endl;
    cout << "2. G. Lalo Mode de Paris Boxed Stationery (200), price: $5 / letter" << endl;
    cout << "3. Maurèle Catalonia Letter Papers (200), price: $35 / ream of paper" << endl;
    cout << "4. Papier Mercí Note-Card Set (200), price: $25 / note-card set" << endl;
    cout << "5. Fotofolio 10 Assorted Postcards (200), price: $15 / postcard" << endl;
    cout << "6. Marie Antoinette Notecards (200), price: $3 / card" << endl;
    cout << "7. Cable Management Boxes (200), price: $30 / box" << endl;
    cout << "8. Sticky Notes (500), price: $4 / sticky note" << endl;
    cout << "9. File Organizers (300), price: $30 / file organizer" << endl;
    cout << "10. WaveRest Mouse Pads with wrist support (350), price: $7 / mouse pad" << endl;

}

void print_dairy_department() {
    cout << "Welcome to the Dairy department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
    cout << endl;
    cout << "0. Arla Medium Cheddar Snack Cheese (200), price: $4 / 6-oz bag" << endl;
    cout << "1. Organic Valley Mozzarella Stringles Organic String Cheese (300), price: $5 / 1-oz stick" << endl;
    cout << "2. Finlandia 7-oz. Swiss Premium Cheese Slices (250), price: $4.50 / 7-oz package" << endl;
    cout << "3. Good Culture Low-Fat Cottage Cheese Classic (300), price: $1.50 / 5-oz container" << endl;
    cout << "4. Muuna Black Cherry Cottage Cheese (300), price: $1.25 / 5-oz container" << endl;
    cout << "5. Organic Valley Neufchatel Cream Cheese (300), price: $3.50 / 8-oz container" << endl;
    cout << "6. Arla Herbs and Spices Cream Cheese (250), price: $3 / 7-oz container" << endl;
    cout << "7. Daiya Plain Cream Cheese (400), price: $6.50 / 8-oz container" << endl;
    cout << "8. Eggland’s Best Organic Hard-Cooked Peeled Eggs (200), price: $4.50 / bag of six" << endl;
    cout << "9. Organic Valley Lowfat 1% Milk (300), price: $5 / half-gallon" << endl;
    cout << "10. Silk Unsweetened Almond and Coconut Blend (400), price: $2.50 / half-gallon" << endl;
    cout << "11. Icelandic Provisions Key Lime Skyr (200), price: $1.50 / 5-oz container" << endl;
    cout << "12. So Delicious Unsweetened Vanilla (250), price: $4.50 / 32-oz container" << endl;
    cout << "13. Chobani NonFat Plain Greek Yogurt (300), price: $4.50 / 32-oz container" << endl;
    cout << "14. Stonyfield Organic Blueberry 0% Fat Greek Yogurt (400), price: $1.50 / 5-oz container" << endl;



}

void print_frozen_department() {
    cout << "Welcome to the Frozen department!" << endl;
    cout << "Please select items to add to cart" << endl;
    cout << "Available items in stock:" << endl;
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
                cout << "How many pasta would you like to buy today?" << endl;
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
                cout << "How many ravioli angliolio would you like to buy today?" << endl;
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
                cout << "How many chocolate cakes would you like to buy today?" << endl;
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
                cout << "How many chicken salads would you like to buy today?" << endl;
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
                cout << "How many egg salads would you like to buy today?" << endl;
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
                cout << "How many tunas would you like to buy today?" << endl;
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
                cout << "How many turkeys would you like to buy today?" << endl;
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

    if(departments == 3) { 
        print_seafood_meat_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many strip steaks would you like to buy today?" << endl;
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
                cout << "How many rib-eye would you like to buy today?" << endl;
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
                cout << "How many tenderloin would you like to buy today?" << endl;
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
                cout << "How many sirloin would you like to buy today?" << endl;
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
                cout << "How many flank would you like to buy today?" << endl;
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
                cout << "How many shrimp would you like to buy today?" << endl;
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
                cout << "How many crab would you like to buy today?" << endl;
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
                cout << "How many lobster would you like to buy today?" << endl;
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
                cout << "How many chicken would you like to buy today?" << endl;
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

    if(departments == 4) { 
        print_pasta_condiments_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many whole weat rotinis would you like to buy today?" << endl;
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
                cout << "How many no yolks broad noodles would you like to buy today?" << endl;
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
                cout << "How many white wines would you like to buy today?" << endl;
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
                cout << "How many parmesan cheese would you like to buy today?" << endl;
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
                cout << "How many butter would you like to buy today?" << endl;
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
                cout << "How many thousand island sauce would you like to buy today?" << endl;
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
                cout << "How many ketchup would you like to buy today?" << endl;
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
                cout << "How many mustard would you like to buy today?" << endl;
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
                cout << "How many teriyaki sauce would you like to buy today?" << endl;
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

    if(departments == 5) { 
        print_dry_goods_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many boxes of cereal would you like to buy today?" << endl;
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
                cout << "How many hummus would you like to buy today?" << endl;
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
                cout << "How many jars of peanut butter would you like to buy today?" << endl;
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
                cout << "How many eggs would you like to buy today?" << endl;
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
                cout << "How many frozen fruit would you like to buy today?" << endl;
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
                cout << "How many tofu would you like to buy today?" << endl;
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
                cout << "How many granola bar would you like to buy today?" << endl;
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
                cout << "How many salmon would you like to buy today?" << endl;
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
                cout << "How many chickpeas would you like to buy today?" << endl;
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
                cout << "How many beef jerkies would you like to buy today?" << endl;
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
                cout << "How many canned fruit would you like to buy today?" << endl;
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
                cout << "How many boxes of mac and cheese would you like to buy today?" << endl;
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

    if(departments == 6) {
        print_baby_pet_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many 3-stage baby baths would you like to buy today?" << endl;
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
                cout << "How many stuffed animals would you like to buy today?" << endl;
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
                cout << "How many baby food makers would you like to buy today?" << endl;
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
                cout << "How many breast-feeding bottles would you like to buy today?" << endl;
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
                cout << "How many strollers would you like to buy today?" << endl;
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
                cout << "How many diaper bags would you like to buy today?" << endl;
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
                cout << "How many portable cribs would you like to buy today?" << endl;
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
                cout << "How many bath towels would you like to buy today?" << endl;
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
                cout << "How many pacifiers would you like to buy today?" << endl;
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
                cout << "How many food bags would you like to buy today?" << endl;
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
                cout << "How many potty trainers would you like to buy today?" << endl;
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
                cout << "How many baby healing ointments would you like to buy today?" << endl;
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
                cout << "How many thermometers would you like to buy today?" << endl;
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
                cout << "How many baby toys would you like to buy today?" << endl;
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
                cout << "How many baby wipes would you like to buy today?" << endl;
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
                cout << "How many Vitamin A pills would you like to buy today?" << endl;
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
                cout << "How many Vitamin B pills would you like to buy today?" << endl;
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
                cout << "How many Vitamin C pills would you like to buy today?" << endl;
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
                cout << "How many Vitamin D pills would you like to buy today?" << endl;
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
                cout << "How many car seats pills would you like to buy today?" << endl;
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
                cout << "How many sunscreen would you like to buy today?" << endl;
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

    if(departments == 7) {

        print_paper_goods_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many smythson cards would you like to buy today?" << endl;
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
                cout << "How many rivoli cards would you like to buy today?" << endl;
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
                cout << "How many stationery letters would you like to buy today?" << endl;
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
                cout << "How many catalonia reams of paper would you like to buy today?" << endl;
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
                cout << "How many papier merci note-card sets would you like to buy today?" << endl;
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
                cout << "How many fotofolio postcards would you like to buy today?" << endl;
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
                cout << "How many marie antoinette notecards would you like to buy today?" << endl;
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
                cout << "How many cable management boxes would you like to buy today?" << endl;
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
                cout << "How many sticky notes would you like to buy today?" << endl;
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
                cout << "How many file organizers would you like to buy today?" << endl;
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
                cout << "How many mouse pads would you like to buy today?" << endl;
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

    if(departments == 8) { 

        print_dairy_department();
        cin >> decisions;
        switch (decisions) {
            case 0: 
                cout << "How many arla snack cheese bags would you like to buy today?" << endl;
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
                cout << "How many organic valley mozzarella string cheese sticks would you like to buy today?" << endl;
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
                cout << "How many finlandia swiss premium cheese slice packages would you like to buy today?" << endl;
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
                cout << "How many good culture low-fat cottage cheese classic container would you like to buy today?" << endl;
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
                cout << "How many muuna black cherry cottage cheese containers would you like to buy today?" << endl;
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
                cout << "How many organic valley neufchatel cream cheese containers would you like to buy today?" << endl;
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
                cout << "How many arla herbs and spices cream cheese containers would you like to buy today?" << endl;
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
                cout << "How many daiya plain cream cheese containers would you like to buy today?" << endl;
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
                cout << "How many eggland's best organic hard-cooked peeled eggs bags would you like to buy today?" << endl;
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
                cout << "How many organic valley lowfat 1% milk half-gallons would you like to buy today?" << endl;
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
                cout << "How many silk unsweetened almond and coconut blend half-gallons would you like to buy today?" << endl;
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
                cout << "How many icelandic provisions key lime skyr containers would you like to buy today?" << endl;
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
                cout << "How many so delicious unsweetened vanilla containers would you like to buy today?" << endl;
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
                cout << "How many chobani nonfat plain greek yogurt containers would you like to buy today?" << endl;
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
                cout << "How many stonyfield organic blueberry 0% fat greek yogurt containers would you like to buy today?" << endl;
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


}
};
 

