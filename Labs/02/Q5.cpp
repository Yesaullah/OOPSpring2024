/*
	Name: Mohammad Yesaullah Sheikh 
	Roll no: 23K-0019
*/
#include <iostream>
#include <string>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int ptr = 0; // a global variable which will point to the next empty space in the array


struct item{
	string name;
	float price;
	int quantity;
	int ID;
};

item data[100];
void add_item(item data[], int ptr);
void display_item(int id);
void update_item(int id);

int main(){
	int id;
	repeat:
	cout<<"\t\t\t\tWELCOME TO THE PRODUCT MANAGEMENT SYSTEM"<<endl;
	cout<<"\nChoose from the options below: "<<endl;
	cout<<"	--> Press '1' if you want to add an item.\n	--> Press '2' if you want to view any item's information by entering the item ID.\n	--> Press '3' if you want to update any item's information.\n	--> Press '0' if you want to exit the program."<<endl;
	int choice;
	cout<<"\n--> Enter your choice: ";
	cin>>choice;
	if (choice==1){
		/*call function*/ add_item(data, ptr);
		goto repeat;
	}
	else if(choice==2){
		cout<<"Enter item id: "<<endl;
		cin>>id;
		/*call function*/ display_item(id);
		goto repeat;
	}
	else if(choice==3){
		cout<<"Enter item id: "<<endl;
		cin>>id;
		/*call function*/ update_item(id);
		goto repeat;
	}
	else if(choice==0){
		cout<<"You have successfully exited the program.";
		exit(0);
	}
	else {
		cout<<"You entered an invalid option.";
		return 0;
		sleep(5);
		system("cls");
		goto repeat;
	}
	
	return 0;
}

void add_item(item data[], int ptr){
	cout<<"\n***You are now required to add the item details***"<<endl;
	cout<<"\n	--> Enter Name: ";
	cin.ignore();
	getline(cin, data[ptr].name);
	cout<<"	--> Enter ID: ";
	cin>>data[ptr].ID;
	cout<<"	--> Enter Price: ";
	cin>>data[ptr].price;
	cout<<"	--> Enter Quantity: ";
	cin>>data[ptr].quantity;
	cout<<"\n***The item is added successfully***";
	ptr++;
	sleep(5);
	system("cls");
}
void display_item(int id){
	int i;
	for(i=0; i<=ptr; i++){
		if(id==data[i].ID){
			cout<<"\n	--> Item Name: "<<data[i].name<<endl;
			cout<<"	--> Item ID: "<<data[i].ID<<endl;
			cout<<"	--> Item Price: "<<data[i].price<<endl;
			cout<<"	--> Item Quantity: "<<data[i].quantity<<endl;
		}
		else{
			cout<<"***No item matching the entered ID found***";
		}
	}
	sleep(5);
	system("cls");
	
}
void update_item(int id){
	int i;
	for(i=0; i<=ptr; i++){
		if(id==data[i].ID){
			cout<<"***You will now be asked to enter the updated information related to the product***"<<endl;
			cout<<"	--> Enter Name: ";
			cin.ignore();
			getline(cin, data[ptr].name);
			cout<<"	--> Enter ID: ";
			cin>>data[ptr].ID;
			cout<<"	--> Enter Price: ";
			cin>>data[ptr].price;
			cout<<"	--> Enter Quantity: ";
			cin>>data[ptr].quantity;
			cout<<"\n***The item information is updated successfully***";
		}
	}
	sleep(5);
	system("cls");
}
