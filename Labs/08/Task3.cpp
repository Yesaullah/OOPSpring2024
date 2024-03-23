/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

// base class 1
class Position{
    protected:
    float x, y, z;
    public:
    Position(){}
    Position(float x, float y, float z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

// base class 2
class Health{
    protected:
    string health;
    public:
    Health(){}
    Health(string health){
        this->health = health;
    }
};

// derived class // inherits from both Position class and Health class
class Character : public  Position, public Health{
    string name;
    int strength;
    public:
    Character(string n, int s, string h, float p1, float p2, float p3) : Position(p1, p2, p3), Health(h){
        name = n;
        strength = s;
    }
    // display method
    void display(){
        cout<<"Character name: "<<name<<endl;
        cout<<"Charcter strenght: "<<strength<<endl;
        cout<<"Character Health status: "<<health<<endl;
        cout<<"Character's position: ("<<x<<", "<<y<<", "<<z<<")"<<endl;
    }
};

int main(){
    Character c1("Pikachu", 40, "Good", 3.0, 5.5, 2.0);

    c1.display();
}









