/*
	Name: <ohammad Yesaullah Sheikh
	Roll no: 23k-0019
*/
#include <iostream>
#include <list>
#include <windows.h>
#include <unistd.h>
using namespace std;

int ptr_pets = 0;
int ptr_adopters = 0;
class Pet{
	protected: 
	string HealthStatus;
    string type; // what type of the pet is it
	int Hungerlevel;
	int Happinesslevel;
	string skills[10];
	bool adopted;
	int ptr_skills = 0; // a variable to store the next empty element in skills array
	
	public:
		void setHunger(int hunger){
			Hungerlevel = hunger;
		}
        void setHealth(string health) { 
            HealthStatus = health;
        }
        void setHappiness(int Happiness){
            Happinesslevel = Happiness;
        }
        void setAdopted(bool adopted) {
            this->adopted = adopted;
        }
        bool getAdopted(){
            return adopted;
        }
        void setType(string type){
            this->type = type;
        }
        string getType(){
            return type;
        }
		void displayPetDetails(){
			cout<<"--> Type: "<<type<<endl;
			cout<<"--> Health status of the pet: "<<HealthStatus<<endl;
			cout<<"--> Hunger level of the pet: "<<Hungerlevel<<endl;
			cout<<"--> Happiness level of the pet: "<<Happinesslevel<<endl;
			int i;
			cout<<"--> Skill(s) of the pet: "<<endl;
			for(i=0; i<ptr_skills; i++){
				cout<<"    "<<i+1<<") "<<skills[i]<<endl;
			}
			cout<<"--> Adopted? "<<adopted<<endl;
		}
		void updateHappiness(int check){
			if(check == 1){
				Happinesslevel++;
			}
			else{
				Happinesslevel--;
			}
		}
		void updateHealth(string health){
			HealthStatus = health;
		}
		void updateHunger(int check){
			if(check == 1){
				Hungerlevel++;
			}
			else{
				Hungerlevel--;
			}
			if(Hungerlevel<=3){
				cout<<"--> You need to feed your pet right now."<<endl;
				Happinesslevel--; // happiness level decrements if the pet is hungry
			}
			else if(Hungerlevel<=5 && Hungerlevel>3){
				cout<<"--> Feed your pet as soon as possible."<<endl;
				Happinesslevel--; // happiness level decrements if the pet is hungry
			}
			else{
				cout<<"--> Your pet is not hungry right now."<<endl;
				Happinesslevel++; // happiness level increments if the pet is full
			}
		}
		void addskills(string skill){
            if(ptr_skills>10){
                cout<<"No more skills can be added"<<endl;
                return;
            }
            else{
                skills[ptr_skills] = skill;
			    ptr_skills++;
            }
		}
};

class Adopter : public Pet{
	// private data members
	string AdopterName;
	string AdopterMobileNum;
	// public data members
	public:
    int num;
    void setName(string name){
        AdopterName = name;
    }
    string getName(){
        return AdopterName;
    }
    void setNumber(string num){
        AdopterMobileNum = num;
    }
    Adopter(){}; // default constructor
	Adopter(string name, string mobilenum){ // parameterized constructor
		AdopterName = name;
		AdopterMobileNum = mobilenum;
	}
	list<string> adoptedPetRecords; // a list to store detailed information about the adopter and the pet
	void adoptpet(Pet &pet){
		adopted = true;
		ptr_adopters++;
		cout<<"--> "<<AdopterName<<" you have adopted a virtual pet successfully."<<endl;
	}
	void returnpet(){
		adopted = false;
		AdopterName = "";
		AdopterMobileNum = "";
		cout<< "--> You have successfully returned the pet."<<endl;
	}
	void displayAdoptedPets(){
            cout<<"--------------------------------------------"<<endl;
			cout<<"--> Pet "<<ptr_pets<<": "<<endl;
			cout<<"   :) Adopter Name: "<<AdopterName<<endl;
			cout<<"   :) Adopter Mobile Number: "<<AdopterMobileNum<<endl;
			cout<<"   :) Pet's health status: "<<HealthStatus<<endl;
			cout<<"   :) Pet's happiness level: "<<Happinesslevel<<endl;
			cout<<"   :) Pet's hunger level: "<<Hungerlevel<<endl;
			int i;
			cout<<"   :) Pet's skills: "<<endl;
			for(i=0; i<ptr_skills; i++){
				cout<<"      "<<i+1<<") "<<skills[i]<<endl;
			}
			cout<<"--------------------------------------------"<<endl;
	}

};

int main() {
    cout<<"Name: Mohammad Yesaullah Sheikh.\nRoll no: 23K-0019\n"<<endl;
    // max number of adopters is 10
    // max number of pets is 20
	Adopter adopters[10]; //aray of adopters
    Pet pets[20]; // array of pets
    repeat: // this is for the repition of the program.
    cout<<"             				***Welcome to Virtual Pets***"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"You have following options to choose from: "<<endl;
    cout<<"1) Press '1' if you want to add a pet.\n2) Press '2' if you want to add an adopter.\n3) Press '3' if you want to return a pet.\n4) Press '4' if you want to view all the pet's details.\n5) Press '0' if you want to exit the program."<<endl;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    system("cls");
    string Type;
    string health;
    int happiness, hunger;
    switch (choice) {
        case 1:
            cout<<"Enter the type of the pet: ";
            cin>> Type;
            pets[ptr_pets].setType(Type);
            pets[ptr_pets].setAdopted(false);
            cout<<"Enter the happiness level of the pet: ";
            cin>> happiness;
            cout<<"Enter hunger level of the pet: ";
            cin>>hunger;
            cin.ignore();
            cout<<"Enter the health status of the pet: ";
            getline(cin, health);
            pets[ptr_pets].setHappiness(happiness);
            pets[ptr_pets].setHealth(health);
            pets[ptr_pets].setHunger(hunger);
            cout<<"Press '1' if you want to add skills for the pet: ";
            int ch;
            cin>>ch;
            if(ch ==1){
                cout<<"Enter the number of skills you want to add for the pet: ";
                int num;
                cin>>num;
                cin.ignore();
                int j;
                for(j=0; j<num; j++){
                    string skill;
                    cout<<"Enter skill "<<j+1<<": ";
                    getline(cin, skill);
                    pets[ptr_pets].addskills(skill);
                }
            }
            ptr_pets++; // increments the number of pets
            cout<<"Number of pets stored: "<<ptr_pets<<endl;
            sleep(3); //gives user time to read the message before continuing on with program
            system("cls");
            goto repeat;
            break;
        case 2:
            if(ptr_adopters > 20){
                cout<<"Sorry, no more adoptions are allowed."<<endl;
            }
            else{
                int j;
                string name, num;
                adopters[ptr_adopters].num = ptr_adopters + 1;
                cin.ignore();
                cout<<"--> Enter Adopter's name: ";
                getline(cin, name);
                cout<<"--> Enter Adopter's mobile number: ";
                getline(cin, num);
                system("cls");
                adopters[ptr_adopters].setName(name);
                adopters[ptr_adopters].setNumber(num);
                for (j=0; j<ptr_pets; j++){
                	int a;
                	bool check = pets[j].getAdopted();
                    if(check==false){
                        pets[j].displayPetDetails();
                        cout<<"\n--> Do you want to adopt this pet? If yes, press '1': ";
                        int temp;
                        cin>>temp;
                        cout<<"\n";
                        if(temp==1){
                        	system("cls");
                            adopters[ptr_adopters].adoptpet(pets[j]);
                            pets[j].setAdopted(1);
                            hap:
                            cout<<"\n--> Has pet become happier? Press '1' if yes, Press '2' if no: ";
                            int temp;
                            cin>>temp;
                            if(temp==1) {
                                adopters[ptr_adopters].updateHappiness(1);
                            }
                            else if(temp==2) {
                                adopters[ptr_adopters].updateHappiness(0);
                            }
                            else{
                            	cout<<"Enter a valid choice: "<<endl;
                            	goto hap;
							}
                            cout<<"\n--> Has pet's health status changed? Press '1' if yes: ";
                            cin>>temp;
                            if(temp == 1){
                                cin.ignore();
                                cout<<"Enter pet's current health status: ";
                                getline(cin, health);
                                adopters[ptr_adopters].updateHealth(health);
                            }
                            else{
                            	cout<<"Health status remains same."<<endl;
							}
							
                            cout<<"\n--> Has pet's hunger level changed? Press '1' if yes: ";
                            cin>>temp;
                            if (temp == 1) {
                            	hung:
                                cout<<"\n--> Has pet become more hungry? Press '1' if yes, Press '2' if no: ";
                                cin>>temp;
                                if(temp == 1){
                                    adopters[ptr_adopters].updateHunger(1);
                                }
                                else if(temp == 2){
                                    adopters[ptr_adopters].updateHunger(0);
                                }
                                else{
                                	cout<<"Enter a valid option: "<<endl;
                                	goto hung;
								}
                            }
                            else{
                            	cout<<"Hunger level remains unchanged."<<endl;
							}
                            break;
                        }
                        else {
                        	system("cls");
                            continue;
                        }
                    }
                    else {
                         continue;
                    }
                }
            }
            sleep(3); 
            system("cls");
            goto repeat;
            break;
        case 3:
            cout<<"Enter you adopter number: ";
            int temp;
            cin>> temp;
            adopters[temp-1].returnpet();
            sleep(3); //gives user time to read the message before continuing on with program
            system("cls");
            goto repeat;
            break;
        case 4:
            system("cls");
            int i;
            for(i=0; i<ptr_pets; i++){
                cout<<"Pet "<<i+1<<": "<<endl;
                pets[i].displayPetDetails();
            }
            sleep(15);
            system("cls");
            goto repeat;
            break;
        case 0:
            exit(0);
            break;
        deafault:
            cout << "Invalid Option. Please try again." << endl;
    }

	return 0;
}
