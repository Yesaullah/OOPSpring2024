/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/

#include <iostream>
using namespace std;

class BankAccount{
    int AccountID;
    double Balance;
    int* TransactionHistory;
    int NumTransactions;
    public:
    int i;
    // default constructor
    // BankAccount(){}
    // parameterized constructor
    BankAccount(int AccountID, double Balance, int* history, int NumTransactions){
        this->AccountID = AccountID;
        this->Balance = Balance;
        this->NumTransactions = NumTransactions;
        TransactionHistory = new int(NumTransactions);
        for(i=0; i<NumTransactions; i++){
            TransactionHistory[i] = history[i];
        }
    }
    // copy constructor
    BankAccount(const BankAccount &original){
        this->AccountID = original.AccountID;
        this->Balance = original.Balance;
        this->NumTransactions = original.NumTransactions;
        TransactionHistory = new int(original.NumTransactions);
        for(i=0; i<original.NumTransactions; i++){
            TransactionHistory[i] = original.TransactionHistory[i];
        }
    }
    // destructor
    ~BankAccount() {
        delete[] TransactionHistory;
    }
    // display function
    void Displayinfo(){
        cout<<"Account ID: "<<AccountID<<endl;
        cout<<"Balance: "<<Balance<<endl;
        cout<<"Number of Transactions: "<<NumTransactions<<endl;
        cout<<"Transaction History: "<<endl;
        for(i=0; i<NumTransactions; i++){
            cout<<" Transaction "<<i+1<<": "<<TransactionHistory[i]<<endl;
        }
    }
    void UpdateTransactions(){
        delete[] TransactionHistory;
        cout<<"Enter the new number of transactions made; ";
        cin>>NumTransactions;

        TransactionHistory = new int(NumTransactions);
        for(i=0; i<NumTransactions; i++){
            cout<<"Enter Transaction "<<i+1<<": ";
            cin>>TransactionHistory[i];
        }
    }
};

int main(){
    int transactions;
    double balance;
    int ID;
    // taking inputs
    cout<<"Enter Account ID: ";
    cin>>ID;
    cout<<"Enter Account Balance: ";
    cin>>balance;
    cout<<"Enter Number of Transactions: ";
    cin>>transactions;
    int history[transactions];
    int i;
    cout<<"Enter details of each transaction: "<<endl;
    for(i=0; i<transactions; i++){
        cout<<" Transaction "<<i+1<<": ";
        cin>>history[i];
    }
    BankAccount acc1(ID, balance, history, transactions);
    BankAccount acc2 = acc1;
    cout<<"\nAccount 1 info:"<<endl;
    acc1.Displayinfo();
    cout<<"\nAccount 2 info:"<<endl;
    acc2.Displayinfo();

    cout<<"\n";
    acc1.UpdateTransactions();
    cout<<"\nUpdated information of account 1:"<<endl;
    acc1.Displayinfo();

    cout<<"\nAccount 2 info: "<<endl;
    acc2.Displayinfo();
}
