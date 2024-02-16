/*
	Name: Mohammad Yesaullah Sheikh
	Roll no: 23K-0019
*/
#include <iostream>
using namespace std;

class Smartphone{
	// data members
	string Brand, Model, DisplayResolution;
	int RAM, ROM, Storage;
	
	public:
	
	// member functions
	// getters
	string getBrand(){
		return Brand;
	}
	string getModel(){
		return Model;
	}
	string getDisplayResolution(){
		return DisplayResolution;
	}
	int getRAM(){
		return RAM;
	}
	int getROM(){
		return ROM;
	}
	int getStorage(){
		return Storage;
	}
	// setters
	void setBrand(string brand){
		Brand = brand;
	}
	void setModel(string model){
		Model = model;
	}
	void setDisplayResolution(string resolution){
		DisplayResolution = resolution;
	}
	void setRAM(int ram){
		RAM = ram;
	}
	void setROM(int rom){
		ROM = rom;
	}
	void setStorage(int storage){
		Storage = storage;
	}
	// other methods
	void call(string name){
		cout<<"--> Calling "<<name<<"."<<endl;
	}
	void message(string name){
		cout<<"--> Message sent to "<<name<<"."<<endl;
	}
	void wifi(string network){
		cout<<"--> Connecting to wifi network "<<network<<"."<<endl;
	}
	void browsing(string website){
		cout<<"--> Browsing the internet for "<<website<<"."<<endl;
	}
};

int main(){
	// object 1 of the class Smartphone
	Smartphone samsung;
	// calling setter methods
	cout<<"-----------------------------------------"<<endl;
	samsung.setBrand("Samsung");
	samsung.setDisplayResolution("3088 x 1440");
	samsung.setModel("S23 Ultra");
	samsung.setRAM(12);
	samsung.setROM(1234);
	samsung.setStorage(12345);
	// calling getter methods
	cout<<"--> Brand: "<<samsung.getBrand()<<endl;
	cout<<"--> Model: "<<samsung.getModel()<<endl;
	cout<<"--> Display Resolution: "<<samsung.getDisplayResolution()<<endl;
	cout<<"--> RAM: "<<samsung.getRAM()<<endl;
	cout<<"--> ROM: "<<samsung.getROM()<<endl;
	cout<<"--> Storage: "<<samsung.getStorage()<<endl;
	// calling other methods defined in the class
	samsung.call("Yesaullah");
	samsung.message("Amarha");
	samsung.wifi("PTCL-FF");
	samsung.browsing("youtube.com");
	cout<<"-----------------------------------------"<<endl;
	
	cout<<"\n";
	
	// object 2 of the Smartphone class'
	Smartphone iphone;
	// calling setter methods
	cout<<"-----------------------------------------"<<endl;
	iphone.setBrand("Iphone");
	iphone.setDisplayResolution("1000 x 10000");
	iphone.setModel("15 Pro Max");
	iphone.setRAM(98);
	iphone.setROM(987);
	iphone.setStorage(9876);
	// calling getter methods
	cout<<"--> Brand: "<<iphone.getBrand()<<endl;
	cout<<"--> Model: "<<iphone.getModel()<<endl;
	cout<<"--> Display Resolution: "<<iphone.getDisplayResolution()<<endl;
	cout<<"--> RAM: "<<iphone.getRAM()<<endl;
	cout<<"--> ROM: "<<iphone.getROM()<<endl;
	cout<<"--> Storage: "<<iphone.getStorage()<<endl;
	// calling other methods defined in the class
	iphone.call("Yesaullah");
	iphone.message("Amarha");
	iphone.wifi("PTCL-FF");
	iphone.browsing("instagram.com");
	cout<<"-----------------------------------------"<<endl;
}
