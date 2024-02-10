/*
	Name: Mohammad Yesaullah Sheikh
	Roll-no: 23K-0019
*/
#include <iostream>
#include <cmath>

using namespace std;

int LCM(int a, int b);
int GCD(int a, int b);

int main(){
	int num1, num2;
	cout<<"Enter first integer value: ";
	cin>>num1;
	cout<<"Enter second integer value: ";
	cin>>num2;
	
	cout<<"\nThe LCM is: "<<LCM(num1, num2)<<endl;
	cout<<"The GCD is: "<<GCD(num1, num2)<<endl;
	
	return 0;
}

int LCM(int a, int b){
	int lcm;
	int ABS;
	ABS = abs(a*b);
	lcm = ABS/GCD(a,b);
	return lcm;
}

int GCD(int a, int b){ //recursive case
	int gcd;
	/*
	Divide the larger number by the smaller number.
	Replace the larger number with the smaller number and the smaller number with the remainder obtained in step 1.
	Repeat steps 1 and 2 until the remainder is 0.
	The divisor at the step when the remainder becomes 0 is the GCD.8*/
	if(b==0){
		return a; //base case
	}
	else{
		return GCD(b, a%b); //Euclidean algorithm
	}
}
	

