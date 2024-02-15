/*
	Name: Yesaullah Sheikh
	Roll no: 23k-0019
**/
#include <iostream>
using namespace std;

class Book{
	string name;
	string author;
	string ISBN;
	int PageCount;
	int PagesRead;
	
	public:
		//default constructor
		Book(){
			name = "A Gentle Reminder";
			author = "Bianca Sparacino";
			ISBN = "123456789";
			PageCount = 100;
			PagesRead = 0;
		}
		//parameterized conctructor
		Book(string title, string writer, string num, int pages, int pagesread){
			name = title;
			author = writer;
			ISBN = num;
			PageCount = pages;
			PagesRead = pagesread;
		}
		//method to update the pages read
		void Read(){
			if(PagesRead<PageCount){
				PagesRead++; // incrementing the number of pages read whenever thi method is called in the main function
			}
			if(PagesRead == PageCount){
				cout<<"You have finished the book."<<endl;
			}
			else {
				int remaining = PageCount - PagesRead;
				cout<<"You have read "<<PagesRead<<" pages. "<<remaining<<" pages are still remaining to be read."<<endl;
			}
		}
		void display(){
			cout<<"Book Name: "<< name<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"ISBN: "<<ISBN<<endl;
			cout<<"Total pages: "<<PageCount<<endl;
		}
};

int main(){
	string title, writer, num;
	int pages, pagesread;
	Book b1("Harry Potter", "J. K. Rowling", "987654321", 500, 249);
	b1.display();
	b1.Read();
	
	return 0;
}
