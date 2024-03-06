/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23K-0019
*/
#include <iostream>
using namespace std;

class Engine{
    string enginetype;
    string enginemodel;
    public:
    Engine(){} // default constructor
    Engine(string enginetype, string enginemodel){
        this->enginemodel = enginemodel;
        this->enginetype = enginetype;
    }
    // getters 
    string getEngineModel() const{
        return enginemodel;
    }
    string getEnginetype() const{
        return enginetype;
    }
    // setters
    void setEnginemodel(string enginemodel){
        this->enginemodel = enginemodel;
    }
    void setEnginetype(string enginetype){
        this->enginetype = enginetype;
    }

};
class Wheel{
    bool condition;
    string wheelbrand;
    public:
    Wheel(){} // defaut constructor
    Wheel(bool condition, string wheelbrand){ // parameterzied cinstructor
        this->condition = condition;
        this->wheelbrand = wheelbrand;
    }
    // getter
    bool getCondition() const {return condition;}
    string getWheelBrand() const{return wheelbrand;}
    // setter 
    void setCondition(bool condition){this->condition = condition;}
    void setWheelBrand(string wheelbrand){this->wheelbrand = wheelbrand;}
};
class Headlights{
    bool working;
    public:
    Headlights(){}
    Headlights(bool working){
        this->working = working;
    }
    //getter
    bool getWorking() const{return working;}
    void setWorking(bool working){this->working = working;}
};
class Steering{
    string steeringtype;
    public:
    Steering(){} // default constructor
    Steering(string steeringtype){ // parameterzied constructor
        this->steeringtype = steeringtype;
    }
    // getter
    string getType() const{
        return steeringtype;
    }
    // setter
    void setType(string steeringtype){
        this->steeringtype = steeringtype;
    }
};

class Car{
    int ID;
    string model;
    Engine *e; // aggregration
    Wheel *wheel; // aggregration
    Headlights lights; // composition
    Steering steering; // composition
    public:
    // default constructor
    Car(){}
    // parameterized constructor
    int i; // loop controlling variable
    Car(int ID, string model, Engine *e, Wheel *wheel){
        this->ID = ID;
        this->model = model;
        this->e = e;
        this->wheel = wheel;
    }
    void displayCarDetails(){
        cout<<"\nIdentification number: "<<ID<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine Type: "<<e->getEnginetype()<<endl;
        cout<<"Engine Model: "<<e->getEngineModel()<<endl;
        cout<<"Wheel's Condition: "<<wheel->getCondition()<<endl;
        cout<<"Wheel's Brand: "<<wheel->getWheelBrand()<<endl;
        cout<<"Headlights working? "<<lights.getWorking()<<endl;
        cout<<"Steering type: "<<steering.getType()<<endl;
    }
    void driveforwards(){
        cout<<"The car has started to move forwards."<<endl;
    }
    void reverse(){
        cout<<"The car is reversing."<<endl;
    }
    void right(){
        cout<<"The car is turning towards right."<<endl;
    }
    void left(){
        cout<<"The car is turning towards left."<<endl;
    }
    // getters
    int getID() const {return ID;}
    string getModel() const {return model;}
    Headlights getLights() const {return lights.getWorking();}
    Steering getSteering() const {return steering.getType();}
    // setters
    void setID(int ID){this->ID = ID;}
    void setModel(string model){this->model = model;}
    void setLights(bool w){lights.setWorking(w);}
    void setSteering(string s) {steering.setType(s);}
};

int main(){
	cout<<"Name: Mohammad Yesaullah Sheikh\nRoll no: 23K-0019"<<endl;
    Engine e("V8", "A-2023");
    Wheel w("New", "Dunlop");
    Car c1(19, "GLI", &e, &w);


    // calling member function for car object
    int id; string model; string steeringtype; string functioning;

    cout<<"Enter The Steering Type: ";
    cin>>steeringtype;
    cout<<"Are The Headlights working? (Yes or NO) ";
    cin>>functioning;

    c1.setSteering(steeringtype);
    if(functioning == "yes" || functioning == "Yes"){
        c1.setLights(true);
    }
    else{
        c1.setLights(false);
    }
    // displaying the details of car object
    c1.displayCarDetails();

    // using other car class methods
    cout<<"\n";
    c1.driveforwards(); c1.right(); c1.driveforwards(); c1.left(); c1.reverse();
    
    return 0;
}
