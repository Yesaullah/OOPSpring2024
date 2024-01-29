#include <iostream>

using namespace std;

int main(){
	int n; // variable for the size of the array
	cout << "--> Enter the number of vertical lines: ";
	cin >> n;
	cout << "\n";
	int height[n]; // declaring array of size n
	// taking inputs for the array
	int i; // loop controlling variable
	for (i=0; i<n; i++){
		cout << "--> Enter the height of the vertical line " << i + 1 << ": ";
		cin >> height[i];
	}
	//max will store the largest value and max1 will store the second largest value
	int max = height[0];
	int max1 = height[0];
	// variables to store the values of the x-coordinates
	int a = 1;
	int b = 1; 
	
	for (i=1; i<n; i++){
		if (height[i] > max){
			max = height[i];
			a = i+1;
		}
	}
	for (i=1; i<n; i++){
		if (height[i] > max1 && height[i] < max){
			max1 = height[i];
			b = i+1;
		}
	}
	int diff; //variable to store the separation over x-axis
	if (a > b){
		diff = a - b;
	}
	else {
		diff = b - a;
	}
	int area; //variable to store the max area of water
	area = max1 * diff;
	
	cout << "\n--> The max area of water is: " << area;
}
