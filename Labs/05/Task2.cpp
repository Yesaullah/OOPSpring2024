/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23K-0019
*/
#include <iostream>
using namespace std;

class LoanHelper{
    static const float rate; // interest rate
    float amount; // total amount 
    int months; // the number of months the loan has to be paid off in
    public:
    LoanHelper(){}; // default constructor
    LoanHelper(float amount, int months){ // parameterized constuctor
        this->amount = amount;
        this->months = months;
    }
    // setters
    void SetAmount(float amount){
        this->amount = amount;
    }
    void SetMonths(int months){
        this->months = months;
    }
    // getters
    int getMonths(){
        return months;
    }
    float getAmount(){
        return amount;
    }
    float calculateAmount(){
        float temp;
        float temp2;
        temp = amount/months;
        temp2 = temp + temp*(rate/100);
        return temp2;
    }
};

const float LoanHelper::rate = 0.25; // interest rate is set as 0.25%

int main(){
    LoanHelper h1(1000, 5);
    cout<<"\n--> You have to pay "<<h1.calculateAmount()<<" every month for "<<h1.getMonths()<<" months to repay your loan.\n"<<endl;

    LoanHelper h2;
    float amount;
    int months;
    cout<<"Enter the amount of loan taken: ";
    cin>>amount;
    cout<<"Enter the  number of months for which loan is taken: ";
    cin>>months;
    h2.SetAmount(amount);
    h2.SetMonths(months);
    cout<<"\n--> You have to pay "<<h2.calculateAmount()<<" every month for "<<h2.getMonths()<<" months to repay your loan.\n"<<endl;

    return 0;
}
