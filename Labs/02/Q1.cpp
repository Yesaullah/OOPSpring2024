/*
	Name: Mohammad Yesaullah Sheikh
	Roll-no: 23K-0019
*/
/*
	The program doesnt print the swapped values because the recursive function keeps calling itself and doesnt have any end to it if the input numbers are same.
*/
#include <iostream>

using namespace std;

int recursiveswap(int &a, int &b){ //using the address operator means that the values of the two variables will be modified in the prginal locations
	int temp; //a temporary variable to store the value of a variable
	if(a==b){
		cout<<"The numbers are already same.";
		return 0;
	}
	else{
		temp = a; 
		a = b;
		b = temp;
		recursiveswap(a, b); // calling the same function again
	}
	
}
int main(){
	int a, b;
	// taking inputs
	cout<<"Enter the integer value for 1st variable: ";
	cin>>a;
	cout<<"Enter the integer value for 2nd variable: ";
	cin>>b;
	
	//calling the recursive function
	recursiveswap(a, b);
	cout<<"After swap:\nNumber 1: "<<a<<"\nNumber 2: "<<b;
	return 0;
}
