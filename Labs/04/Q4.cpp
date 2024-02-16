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
	
	public:
		// parameterized constructor
		Office(string pLocation = " ", int pCapacity = 0, string pf1 = "", string pf2 = "", string pf3 = "") : Location(pLocation), SeatingCapacity(pCapacity), furniture{pf1, pf2, pf3} {}
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
    Office o1("Hyderabad");
    Office o2("Hyderbad", 55);
    Office o3("Hyderabad", 55, "Chair", "Table", "Cupboard");

    cout << "Office 1:" << endl;
    o1.display();
    cout << "Office 2:" << endl;
    o2.display();
    cout << "Office 3:" << endl;
    o3.display();

    return 0;
}

