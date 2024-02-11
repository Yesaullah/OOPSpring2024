/*
	Name: Mohammad Yesaullah Sheikh
	Roll no: 23k-0019
*/
#include <iostream>

using namespace std;

// user defined function for checking the subset array
bool hasSubsetSum(int arr[], int size, int targetSum);

int main(){
	int arr[] = {4, 5, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int targetSum = 7;
	
	// calling the recursive function
	if(hasSubsetSum(arr, size, targetSum) == true){
		cout<<"Subset with sum equal to "<<targetSum<<" exists.";
	}
	else{
		cout<<"Subset with sum equal to "<<targetSum<<" does not exists.";
	}
	
	return 0;
}

bool hasSubsetSum(int arr[], int size, int targetSum){
	// this is a recursive function
	// base case:
	if(size==0){
		return false; // if the array size is 0 there cant be any subset
	}
	if(arr[size-1]>targetSum){
		return hasSubsetSum(arr, size-1, targetSum); // if the last element of the array is greater than the target value itself than it can be ignored
	} 
	else {
        return hasSubsetSum(arr, size-1, targetSum-arr[size-1]) // including the last element of the array and then checking the other elements of the array
				|| // OR
			   hasSubsetSum(arr, size-1, targetSum); // excluding the last element and start checking from the second last element.
    }
    return true;
}




