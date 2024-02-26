/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
#include <cmath>

using namespace std;

class RollerCoaster {
    private:
    // data members
    string AttractionName;
    float  Height; // max height which the roller coaster reaches
    float Length; // length of the track of the roller coaster
    float Speed; // Speed of the roller coaster
    int Capacity; // Max number of people the roller coaster can accomodate
    int CurrentNumRiders; // number of people riding the roller coaster at some particular instance
    bool RideInProgress; // checks if the ride is currently in progress or not

    public:
    // default constructor
    RollerCoaster(){
        AttractionName = "Roller Coaster";
        Height = 500.0;
        Length = 2000.0;
        Capacity = 20;
        RideInProgress = false; // false means the ride is not in progress right now 
    }
    // parameterized constructor
    RollerCoaster(string n, float h, float l, int c, float s, int r){
        AttractionName = n;
        Length = l;
        Height = h;
        Speed = s;
        CurrentNumRiders = r;
        if(c>3){
            if(c%2 == 0 || c%3 == 0){ // this if statement checks if the capacity is a multiple of 2 or 3
                Capacity = c;
            }
            else{
                Capacity = round(c/2.0)*2.0; // If it's not a multiple of  2 or 3 then we round it to the nearest multiple of 2
            }
        }
        else{
            cout<<"***Minimum Limit Of The Riders Not Reached***"<<endl;
        }
    }
    // getters for the data members
    string getName(){
        return AttractionName;
    }
    float getHeight(){
        return Height;
    }
    float getLenght(){
        return Length;
    }
    int getCapacity(){
        return Capacity;
    }
    float getSpeed(){
        return Speed;
    }
    int  getCurrentNumRiders(){
        return CurrentNumRiders;
    }
    bool getRideInPorgress(){
        return RideInProgress;
    }
    // setters for the data members
    void setName(string n){
        AttractionName = n;
    }
    void setHeight(float h){
        Height = h;
    }
    void setLenght(float l){
        Length = l;
    }
    void setSpeed(float s){
        Speed = s;
    }
    void setCapacity(int c){
        if(c>3){
            if(c%2 == 0 || c%3 == 0){ // this if statement checks if the capacity is a multiple of 2 or 3
                Capacity = c;
            }
            else{
                Capacity = round(c/2.0)*2.0; // If it's not a multiple of  2 or 3 then we round it to the nearest multiple of 2
            }
        }
        else{
            cout<<"***Minimum Limit Of The Riders Not Reached***"<<endl;
        }
    }
    void setCurrentNumRiders(int r) {
        CurrentNumRiders = r;
    }
    void setRideInProgress(bool check){
        RideInProgress = check;
    }
    // function to  add riders to the ride
    int SeatRiders(int r){
        if(RideInProgress==false){
            if(CurrentNumRiders+r <= Capacity){
                CurrentNumRiders = CurrentNumRiders + r;
                return 0;
            }
            else{
                int rem = r - (Capacity - CurrentNumRiders);
                CurrentNumRiders = Capacity; // as the current riders equal the capacity
                return rem;
            }
        }
        else{
            cout<<"***A Ride Is In Progress Right Now***"<<endl;
        }
    }
    // function to start the ride
    int StartTheRide(){
        if(RideInProgress==false){
            if(CurrentNumRiders == Capacity){
                RideInProgress = true; 
                cout<<"***The Ride Has Been Started***"<<endl;
            }
            else{
                int rem = Capacity - CurrentNumRiders;
                cout<<"***Ride Cannot Start Right Now, Some Seats Are Vacant***"<<endl;
                return rem;
            }
        }
        else{
            cout<<"***A Ride Is Already In Progress***"<<endl;
            return -1;
        }
    } 
    // function to stop the ride
    void StopRide(){
        if(RideInProgress==true){
            RideInProgress = false;
            cout<<"***Ride Has Been Stopped***"<<endl;
        }
        else{
            cout<<"***Ride Has Already Ended***"<<endl;
        }
    }
    // function to unload the riders if the ride is not in progress
    void unloadRiders(){
        if(RideInProgress==false){
            CurrentNumRiders = 0;
        }
        else{
            cout<<"***Ride Is In Progress Right Now***"<<endl;
        }
    }
    // function to accelerate the roller coaster
    void accelerate(){
        Speed += 9; // my roll no is 0019
        cout<<"Speed increased to "<<Speed<<"."<<endl;
    }
    // function to apply the brakes
    void ApplyBrakes(){
        Speed -= 1; // my roll no is 0019
        cout<<"Speed reduced to "<<Speed<<"."<<endl;
    }
};

int main(){
    cout<<"************************************"<<endl;
    cout<<"Name: Mohammad Yesaullah Sheikh.\nRoll no: 23K-0019"<<endl;
    cout<<"************************************\n"<<endl;
    // making objects of the class
    RollerCoaster r1; // using the default constructor
    RollerCoaster r2("Thunder twister", 600, 3000, 30, 40, 20); // using the parameterized constructor
    
    // displaying the data stored in  the object created by default constructor
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Data for the Roller Coaster 1:"<<endl;
    cout<<"Ride name: "<<r1.getName()<<endl;
    cout<<"Maximum height: "<<r1.getHeight()<<endl;
    cout<<"Length of the ride: "<<r1.getLenght()<<endl;
    cout<<"Speed: "<<r1.getSpeed()<<endl;
    cout<<"Seating capacity: "<<r1.getCapacity()<<endl;
    cout<<"Current riders: "<<r1.getCurrentNumRiders()<<endl;
    cout<<"Is ride in progress: "<<r1.getRideInPorgress()<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Data for the Roller Coaster 2:"<<endl;
    cout<<"Ride name: "<<r2.getName()<<endl;
    cout<<"Maximum height: "<<r2.getHeight()<<endl;
    cout<<"Length of the ride: "<<r2.getLenght()<<endl;
    cout<<"Speed: "<<r2.getSpeed()<<endl;
    cout<<"Seating capacity: "<<r2.getCapacity()<<endl;
    cout<<"Current riders: "<<r2.getCurrentNumRiders()<<endl;
    cout<<"Is ride in progress? "<<r2.getRideInPorgress()<<endl;
    cout<<"--------------------------------------------------\n"<<endl;

    // calling functions for the second  object
    r2.setName("Cyclone Chaos");
    r2.setHeight(700);
    r2.setLenght(2500);
    r2.setCapacity(25);
    r2.setSpeed(50);
    r2.setCurrentNumRiders(8);
    r2.SeatRiders(18);
    r2.StartTheRide();
    r2.accelerate();
    r2.accelerate();
    r2.accelerate();
    r2.ApplyBrakes();
    r2.StopRide();
    r2.unloadRiders();

    // displaying the new data about roller coaster 2
    cout<<"\n--------------------------------------------------"<<endl;
    cout<<"Data for the Roller Coaster 2:"<<endl;
    cout<<"Ride name: "<<r2.getName()<<endl;
    cout<<"Maximum height: "<<r2.getHeight()<<endl;
    cout<<"Length of the ride: "<<r2.getLenght()<<endl;
    cout<<"Speed: "<<r2.getSpeed()<<endl;
    cout<<"Seating capacity: "<<r2.getCapacity()<<endl;
    cout<<"Current riders: "<<r2.getCurrentNumRiders()<<endl;
    cout<<"Is ride in progress? "<<r2.getRideInPorgress()<<endl;
    cout<<"--------------------------------------------------\n"<<endl;

    return 0;
}
