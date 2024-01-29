#include <iostream>

using namespace std;

int main() {
	int size; //variable for the size of the array
	
	//taking input for the size of array 
	cout << "--> Enter the size of the array: ";
	cin >> size;
	cout << "\n";
	
	int arr[size]; //array to store the integers
	int target; //variable to store the target integer
	int i, j; //variables to control the loops 
	
	//taking inputs for the array
    cout << "--> Enter integer inputs for the array: ";
    cout << "\n";
    for (i = 0; i < size; i++) {
        cout << "    Input " << i + 1 << ": ";
        cin >> arr[i];
    }
	
	// taking input for the target integer value 
	cout << "\n--> Enter the target integer: ";
	cin >> target;
	cout << "\n";
	
	int temp, ind, sum, flag; // variable to store values of array element, index of that array element, the sum of two aray elements, and a flag variable to check if the condition has been met.
	
	for(i=0; i<size; i++){
		temp = arr[i];
		ind = i;
		flag = 0;
		for(j=0; j<size; j++){
			if(i == j){
				continue; // moving onto the next iteration if the values of i and j are same 
			}
			else {
				sum = temp + arr[j];
				if(sum == target){
					cout << "[" << ind << "," << j << "]";
                    break;  // exit inner loop if the pair has been found 
                    flag = 1;
				}
				else {
					continue;
				}
			}
		}
		if(flag == 1){
			break; // exit the outer loop if the target pair has been found 
		}
		else {
			continue; // continuing the loop for the next iteration if the pair hasnt been found 
		}
	}
}
