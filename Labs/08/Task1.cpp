/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

// BASE CLASS
class Book{ 
    protected:
    string Title, Author, Publisher;
    public: 
    // constructors
    Book(){}
    Book(string title, string author, string publisher){
        Title = title;
        Author = author;
        Publisher = publisher;
    }
    // display method
    void Display(){
        cout<<"Book Information: "<<endl;
        cout<<" Title: "<<Title<<endl;
        cout<<" Author: "<<Author<<endl;
        cout<<" Publisher: "<<Publisher<<endl;
    }
};

// DERIVED CLASS
class FictionBook : public Book{
    string Genre;
    string Protagonist;
    public:
    // constructor
    FictionBook(string title, string author, string publisher, string genre, string protagonist){
        Title = title;
        Author = author;
        Publisher = publisher;
        Genre = genre;
        Protagonist = protagonist;      
    }
    // Display method
    void Display(){
        cout<<"Fiction Book's Information: "<<endl;
        cout<<" Title: "<<Title<<endl;
        cout<<" Genre: "<<Genre<<endl;
        cout<<" Protagonist: "<<Protagonist<<endl;
        cout<<" Author: "<<Author<<endl;
        cout<<" Publisher: "<<Publisher<<endl;
    }
};

int main(){
    FictionBook book1("The Tales Of A Young Love", "Syed Muneeb", "Hamza Sheikh", "Romance", "Murtaza Jaffri");

    book1.Display();
}