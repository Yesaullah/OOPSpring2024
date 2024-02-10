/*
	Name: Mohammad Yesaullah Sheikh
	Roll no: 23k-0019
*/

#include <iostream>
#include <string>

using namespace std;

struct book{
	string title;
	string author;
	string genre;
	int year;
	int s_no;
};

void displaybook(int n, book data[]);
void modifybook(int n, book data[]);
void addbook(int n);


int main(){
	int n; //variable to store the number of books
	cout << "Enter the number of books: ";
	cin >> n;
	book *data = new book[n];
	
	int i; // loop controlling variable
	// filling in the data into the array)
	for (i=0; i<n; i++){
		cout << "BOOK: " << i+1 << endl;
		cin.ignore();
		cout << "Enter the title of the book: ";
		getline(cin, data[i].title);
		cout << "Enter the name of the author: ";
		getline(cin, data[i].author);
		cout << "Enter the genre of the book: ";
		getline(cin, data[i].genre);
		cout << "Enter the date year of publication: ";
		cin >> data[i].year;
		cout << "Enter the book's serial number: ";
		cin >> data[i].s_no;
	}
	
	string choice;
	
	// displaying the information according to the users choice
	cout << "\nDo you want to view any book's data? (Yes or No)\n";
	cin >> choice;
	if (choice == "Yes"){
		displaybook(n, data);
	}
	
	// modification of book data
	cout << "\nDo you want to modify any book's data? (Yes or No)\n";
	cin >> choice;
	if (choice == "Yes"){
		modifybook(n, data);
	}
	
	//addition of books
	cout << "\nDo you want to add any book? (Yes or No)\n";
	cin >> choice;
	if (choice == "Yes"){
		addbook(n);
	}
}

void displaybook(int n, book data[]){
	int i;
	string name;
	cin.ignore();
	cout << "Enter the book's name: ";
		getline(cin, name);
		for(i=0; i<n; i++){
			if(name == data[i].title){
				cout << "Serial number: " << data[i].s_no << endl;
				cout << "Title: " << data[i].title << endl;
				cout << "Author: " << data[i].author << endl;
				cout << "Genre: " << data[i].genre << endl;
				cout << "Year of publication: " << data[i].year << endl;
			}
		}
}

void modifybook(int n, book data[]){
	int num;
	int i;
	cout << "Enter the serial number of the book: ";
	cin >> num;
	for(i=0; i<n; i++){
		if(num == data[i].s_no){
			cout << "Current information stored about the book: " << endl;
			cout << "Serial number: " << data[i].s_no << endl;
			cout << "Title: " << data[i].title << endl;
			cout << "Author: " << data[i].author << endl;
			cout << "Genre: " << data[i].genre << endl;
			cout << "Year of Publication: " << data[i].year << endl;
			cout << "\nEnter new data now: " << endl;
			cout << "Enter the title of the book: ";
			cin >> data[i].title;
			cout << "Enter the name of the author: ";
			cin >> data[i].author;
			cout << "Enter the genre of the book: ";
			cin >> data[i].genre;
			cout << "Enter the date year of publication: ";
			cin >> data[i].year;
			cout << "Enter the book's serial number: ";
			cin >> data[i].s_no;
			cout << "\n";
		}
	}
}

void addbook(int n){
	int num;
	cout << "Enter the number of books you want to add: ";
	cin >> num;
	
	book *data = new book[n+num];
	
	int i;
	int j = n;
	for (i=0; i<num; i++){
		cout << "BOOK: " << i+1<< endl;
		cin.ignore();
		cout << "Enter the title of the book: ";
		getline(cin, data[j].title);
		cout << "Enter the name of the author: ";
		getline(cin, data[j].author);
		cout <<"Enter the genre of the book: ";
		getline(cin, data[j].genre);
		cout << "Enter the date year of publication: ";
		cin >> data[j].year;
		cout << "Enter the book's serial number: ";
		cin >> data[j].s_no;
		cout << "\n";
		j++;
	}
}

