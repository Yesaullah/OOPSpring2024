#include <iostream>

using namespace std;

struct student {
	int marks_math;
	int marks_english;
	int marks_science;
};

// The program should calculate the total marks, average marks, and display the grade for each student.

int main(){
	int n; // variable for the number of students 
	cout << "Enter the number of students: ";
	cin >> n;
	int i;
	int total;
	float avg;
	char grade;
	student data[n];
	for(i=0; i<n; i++){
		cout << "\nEnter marks in Math: ";
		cin >> data[i].marks_math;
		cout << "Enter marks in English: ";
		cin >> data[i].marks_english;
		cout << "Enter marks in Science: ";
		cin >> data[i].marks_science;
		total = data[i].marks_english + data[i].marks_math + data[i].marks_science;
		avg = total/3;
		if (total >= 90){
			grade = 'A';
		}
		else if(total>=80 && total<=89){
			grade = 'B';
		}
		else if(total>=70 && total<=79){
			grade = 'C';
		}
		else if(total>=60 && total<=69){
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		cout << "Math marks are: " << data[i].marks_math;
		cout << "\nEnglish marks are: " << data[i].marks_english;
		cout << "\nScience marks are: " << data[i].marks_science;
		cout << "\nAverage is: " << avg;
		cout << "\nTotal marks are: " << total;
		cout << "\nThe Grade is: " << grade;
	}
}
