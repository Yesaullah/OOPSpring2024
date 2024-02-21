/*
	Name: Mohammad Yesaullah
	Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

class Office{
	string Location;
	int SeatingCapacity;
	string furniture[3];
	int size;
	public:
		// parameterized constructor
		Office(string pLocation, int pCapacity, int psize){
			size = psize;
            string* furniture = new string[size]; // dynamically allocating memory fir the array
            Location = pLocation;
            SeatingCapacity = pCapacity;
        } 
        // destructor
        ~Office(){
            delete[] furniture;
        }
		
        // function to set values for the furniturre array
        void SetFurniture(string item, int i) {
            furniture[i-1] = item;
        }
        // function to display the data
        void display(){
			int i;
			cout<<"	--> Location: "<<Location<<endl;
			cout<<"	--> Seating capacity: "<<SeatingCapacity<<endl;
			for(i=0; i<3; i++){
				cout<<"	--> Furniture item "<<i+1<<": "<<furniture[i]<<endl;
			}
		}
};

int main() {
    // dynamically creating an object
    Office *o1 = new Office("Hyderabad", 50, 3);
	//setting values for the furniture array
    o1->SetFurniture("Desk", 1);
    o1->SetFurniture("Chair", 2);
    o1->SetFurniture("Mirror", 3);
    cout<<"Office information is as follows: "<<endl;
    o1->display(); // calling the display method defined in the function

    o1->~Office(); // destructor is called
    delete[] o1; // deallocating the memory

    return 0;
}


