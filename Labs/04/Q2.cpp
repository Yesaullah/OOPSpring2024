/*
	Name: Yesaullah Sheikh
	Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

/*
	Name: Yesaullah Sheikh
	Roll no: 23k-0019
*/
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
			PageCount = 1000;
			PagesRead = 0;
		}
		//setters
		void setName(string title){
			name = title;
		}
		void setAuthor(string writer){
			author = writer;
		}
		void setISBN(string isbn){
			ISBN = isbn;
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
		void showBookInfo(){
			cout<<"-------------------------------------------\n";
			cout<<"Book Name: "<< name<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"ISBN: "<<ISBN<<endl;
			cout<<"Total pages: "<<PageCount<<endl;
			cout<<"Pages read: "<<PagesRead<<endl;
			cout<<"-------------------------------------------\n";
		}
};

int main(){
	string title, writer, num;
	int pages, pagesread;
	Book b1;
	// taking inputs
	cout<<"-------------------------------------------\n";
	cout<<"Enter the title of the book: ";
	getline(cin, title);
	cout<<"Enter the name of the Author: ";
	getline(cin, writer);
	cout<<"Enter the ISBN number: ";
	getline(cin, num);
	cout<<"-------------------------------------------\n";
	
	cout<<"-------------------------------------------\n";
	cout<<"All the information regarding the book is as follows: "<<endl;
	cout<<"-------------------------------------------\n";
	// calling setters
	b1.setName(title);
	b1.setAuthor(writer);
	b1.setISBN(num);
	
	b1.showBookInfo();
	b1.Read();
	b1.Read();
	b1.Read();
	b1.Read();
	b1.showBookInfo();
	
	return 0;
}
