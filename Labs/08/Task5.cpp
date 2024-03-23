/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/

#include <iostream>
using namespace std;

class Vehicle{
    protected:
    string make;
    string model;
    int year;
    public:
    Vehicle(string Make, string Model, int Year) : make(Make), model(Model), year(Year){}
    void DisplayVehicle() const {
        cout<<"Make of the vehicle: "<<make<<endl;
        cout<<"Model of the vehicle: "<<model<<endl;
        cout<<"Release Year of the vehicle: "<<year<<endl;
    }
};

class Car : public Vehicle{
    protected:
    int doors;
    float fueleff;
    public:
    Car(string Make, string Model, int Year, int door, float fuel) : Vehicle(Make, Model, Year), doors(door), fueleff(fuel){}
    void DisplayCar() const {
        Vehicle::DisplayVehicle();
        cout<<"Number of doors: "<<doors<<endl;
        cout<<"Fuel efficiency (mpg): "<<fueleff<<endl;
    }
};

class ElectricCar : public Car{
    int BatteryLife;
    public:
    ElectricCar(string Make, string Model, int Year, int door, float fuel, int BLife) : Car(Make, Model, Year, door, fuel), BatteryLife(BLife){}   
    void DisplayECar() const {
        Car::DisplayCar();
        cout<<"Battery life (miles): "<<BatteryLife<<endl;
    }
};

int main(){
    ElectricCar ecar1("Tesla", "Model Y", 2022, 4, 90, 500000);
    ecar1.DisplayECar();
}