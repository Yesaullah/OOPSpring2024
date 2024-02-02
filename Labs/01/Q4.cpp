#include <iostream>

using namespace std;

int difference (int ind1, int ind2){ // function which will check which one of the two vertical lines is smaller
	if (ind1 < ind2){
		return ind1;
	}
	else if (ind2 < ind1){
		return ind2;
	}
	else {
		return ind1; // when both of them are equal
	}
}

int main(){
	int n; // variable for the size of the array
	cout << "--> Enter the number of vertical lines: ";
	cin >> n;
	cout << "\n";
	int height[n]; // declaring array of size n
	// taking inputs for the array
	int i, j; // loop controlling variables
	for (i=0; i<n; i++){
		cout << "--> Enter the height of the vertical line " << i + 1 << ": ";
		cin >> height[i];
	}
	int temp; // temporary variable
	int area = 0;
	for (i=0; i<n; i++){
		for(j=0; j<n; j++){
			if (i != j){ // they must not be equal in order to have some area 
				if (i>j){
					temp = (i-j) * difference(height[i], height[j]);
					if (temp > area){
						area = temp;
					}
				}
				else {
					temp = (j-i) * difference(height[i], height[j]);
					if (temp > area){
						area = temp;
					}
				}
			}
			else {
				continue;
			}
		}
	}
	
	cout << "\n--> The max area of water is: " << area;
}
