/*
    Name: Mohammad Yesaullah Sheikh
    Roll no: 23K-0019
*/
#include <iostream> 
using namespace std;

class Square{
    private:
    float sidelength;
    float area;
    float allareas;
    public:
    //default constructor
    Square() {}
    //parameterized constructor
    Square(float sidelength){
        this->sidelength = sidelength;
        area = 0;
        allareas = 0;
    }
    void CalculateArea(){
        area = (this->sidelength) * (this->sidelength);
        allareas += area;
    }
    // getters and setters 
    void setlength(float sidelength){
        this->sidelength = sidelength;
    }
    void setArea(float area){
        this->area = area;
    }
    void setallareas(float allareas){
        this->allareas = allareas;
    }
    float getlength(){
        return sidelength;
    }
    float getarea(){
        return area;
    }
    float getallareas(){
        return allareas;
    }
};