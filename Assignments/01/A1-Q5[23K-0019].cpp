/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23K-0019
*/
#include <iostream>
using namespace std;

class Restaurant{
    string Name;
    string Location;
    string Menu[3]; // assuming max dishes are 3
    int Prices[3]; // prices for the 3 dishes
    string codes[5]; //assuming that there could be no more than 5 coupon
    int static count; // a class variable shared by all objects of this class for redeemed coupons
    
    public:
    string restaurant_code;
    public:
    string getRestaurantCode() const {
        return restaurant_code;
    }
    // parameterized conctructor
    int i;
    Restaurant(){};
    Restaurant(string n, string l, string *menu, float *price, string *coupons, string res_code) {
        Name = n;
		Location = l;
        restaurant_code = res_code;
		for(i=0; i<3; i++) {
			Menu[i] = menu[i]; // initializing the menu array
			Prices[i] = price[i]; // initializing the prices array
		} 
        for(i=0; i<5; i++){
            codes[i] = coupons[i]; // initializing the coupon codes array
        }
    }
    //displaying the menu
    void DisplayMenu(){
        cout<<"Menu: "<<endl;
        for(i=0; i<3; i++){
            cout<<"   "<<i+1<<") "<<Menu[i]<<"  $"<<Prices[i]<<endl;
        }
    }
    int total = 0;
    int GenerateBill(int *quantity){
        total = 0; // total bill
        int amount = 0; // amount for each menu item
        for(i=0; i<3; i++){
            amount = Prices[i]*quantity[i];
            cout<<quantity[i]<<" "<<Menu[i]<<" = "<<amount<<endl;
            total  += amount;
        }
        return total;
    }
    int discount(int percent, int t){
        total = t;
        int temp = total*(percent/100);
        total -= temp; // disconted amount
        return total;
    }
};
int Restaurant::count = 0; // initializing the static class variable to zero
class Coupon{
    string couponCode;
    // it is assumed that the coupons will automatically expire after december of a year
    int validFrom; // month 
    int validTill; // month
    string restaurantCode;
    public:
    Coupon(string code, int start, int end, string res_code){
        couponCode = code;
        validFrom = start;
        validTill = end;
        restaurantCode = res_code;
    }
    bool isvalid(int current_month, string res_code){
        if(current_month <= validTill && res_code == restaurantCode){
            return true;
        }
        else {
            return false;
        }
    }
};
class User: public Restaurant{
    string name;
    int age;
    string mobNum;
    string coupons[5]; // assuming user can have max 5 coupons at once.
    string redeemed_coupons[5];
    public:
    User(string n, int a, string m):name(n),age(a),mobNum(m) {};
    int ptr_red = 0; //  pointer for storing the number of redeemed coupons
    int i;
    void accumulatecoupon(string c){
        for(i=0; i<5; i++){
            if(coupons[i].empty()){
                coupons[i] = c; 
                break;
            }
        }
    }
    bool HasValidCoupon(string code, string res_code){
        for(i=0; i<5; i++){
            if(coupons[i]==code && res_code==restaurant_code){
                return true;
            }
            else{
                return false;
            }
        }
    }
    void redeemCoupon(string code){
        for(i=0; i<ptr_red; i++){
            if(code==restaurant_code && code!=redeemed_coupons[ptr_red-1]){
                redeemed_coupons[ptr_red]=code; 
                cout<<"Congratulations! Your coupon has been redeemed." <<endl;
                ptr_red++;
                break;
            }
            else {
                cout<<"Invalid coupon."<<endl;
            }
        }
    }

};
int main() {
    cout << "************************************" << endl;
    cout << "Name: Mohammad Yesaullah Sheikh.\nRoll no: 23K-0019\n" << endl;
    cout << "************************************" << endl;

    // For restaurant 1
    string menu1[3] = {"Sushi", "Pad Thai", "Mango Tango"};
    int price1[3] = {10, 20, 30};
    string coupon1[5] = {"FH-BOGO-1", "FH-BOGO-2", "FH-BOGO-3", "", ""};

    // For restaurant 2
    string menu2[3] = {"Binary Burger", "Quantum Quinoa", "Data Donuts"};
    int price2[3] = {40, 60, 80};
    string coupon2[5] = {"PB-BOGO-1", "PB-BOGO-2", "PB-BOGO-3", "PB-BOGO-4", "PB-BOGO-5"};

    // Create an instance of Restaurant using the constructor
    Restaurant r1("Food Haven", "City Center", menu1, price1, coupon1, "FH");
    Restaurant r2("Pixel Bites", "cyber Street", menu2, price2, coupon2, "PB");

    cout<<"Menu of Food Haven: "<<endl;
    r1.DisplayMenu();
    cout<<"Menu of Pixel Bites: "<<endl;
    r2.DisplayMenu();

    Coupon c1("FH-BOGO-1", 1, 10, "FH");
    Coupon c2("PB-BOGO-2", 3, 12, "PB");

    User u1("Yesaullah", )

    return 0;
}
