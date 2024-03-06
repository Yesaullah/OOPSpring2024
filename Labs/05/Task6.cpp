/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

class GraphicsRenderingEngine{
    public:
    void display(){
        cout<<"Inside Graphics Rendering Engine"<<endl;
    }
};
class InputHandler{
    public:
    void display(){
        cout<<"Inside Input Handler"<<endl;
    }
};
class PhysicsEngine{
    public:
    void display(){
        cout<<"Inside Physics Engine"<<endl;
    }
};
class GameEngine{
    private: 
    GraphicsRenderingEngine g; // composition
    InputHandler i; // composition
    PhysicsEngine p; // compoition

    public:
    void display(){
        cout<<"Inside  Game Engine"<<endl;
        g.display();
        i.display();
        p.display();
    }
};
int main(){
    cout<<"Name: Mohammad Yesaullah Sheikh\nRoll no: 23K-0019"<<endl;
    GameEngine g1;
    g1.display();

    // we can access the other classes using g1
    // if we delete the object g1 then we wont be able to access the other classes objects
    // if we delete g1, the other objects also get deleted
}