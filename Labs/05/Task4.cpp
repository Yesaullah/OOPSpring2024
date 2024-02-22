/*
    Name: Mohammad yesaullah Sheikh
    Roll no: 23K-0019
*/
#include <iostream>

using namespace std;

class BankAccount{
    string accountnumber;
    string accountholdername;
    double balance;
    public:
    //parameterized constructr
    BankAccount(string accountnumber, string accountholdername, double balance){
        this->accountholdername = accountholdername;
        this->accountnumber = accountnumber;
        this->balance = balance;
    }
    //member fuctions
    void deposit(double bal){
        balance = balance + bal;
    }
    void withdraw(double bal){
        if(balance>=bal){
            balance = balance - bal;
        }
    }
    void display(){
        cout<<"Bank Account Information: "<<endl;
        cout<<" --> Account Holder Name: "<<accountholdername<<endl;
        cout<<" --> Account Number: "<<accountnumber<<endl;
        cout<<" --> Balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount accounts[3] = {
        BankAccount("1000", "Hamza Sheikh", 1500.0),
        BankAccount("1002", "Murtaza jafri", 2000.0),
        BankAccount("1003", "yesaullah sheikh", 2500.0)
    };
    int i;
    for(i=0; i<3; i++){
        cout<<"Account "<<i+1<<": "<<endl;
        cout<<"Initial information: "<<endl;
        accounts[i].display();
        cout<<"After deposition: "<<endl;
        accounts[i].deposit(5);
        accounts[i].display();
        cout<<"After withdrawal: "<<endl;
        accounts[i].withdraw(5);
        accounts[i].display();
    }

    return 0;
}
