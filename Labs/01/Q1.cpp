#include <iostream>

using namespace std;

int main(){
	int n; // a number to check if it is prime or not
	cout << "Enter an Integer value: "; // a prompt to enter an integer value 
	cin >> n; //taking input for the positive integer
	if (n == 0 || n == 1) { //1 and 0 are not prime numbers 
		cout << "It is not a prime number.";
	}
	else {
		int i; 
		for(i=2 ; i<=9; i++){
			if (n%i == 0){ //condition to check if a number is a prime number 
				cout << "It is not a prime number.";
				break; // this will exit the loop when the condition is met 
			}
			else if(n%i != 0) {
				cout << "\nIt is a prime number.";
				break;
			}
		}
	}
}
