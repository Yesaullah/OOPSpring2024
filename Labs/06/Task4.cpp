/*
    Name: yesaullah sheikh
    Roll NO: 23k=0019
*/
#include <iostream>
using namespace std;

// inline function to calculate the batting average
inline float BattingAverage(int RunsScored, int Dismissals){
    if(Dismissals == 0){
        return 0;
    }
    else{
        return static_cast<double>(RunsScored)/Dismissals;
    }
}

// inline function to calculate the strike rate
inline float StrikeRate(int RunsScored, int BallsFaced){
    if(BallsFaced == 0){
        return 0;
    }
    else{
        return static_cast<double>(RunsScored)/BallsFaced*100;
    }
}

int main(){
    int RunsScored, Dismissals, BallsFaced;
    cout<<"Enter the total runs scored: ";
    cin>>RunsScored;
    cout<<"Enter the total dismissals: ";
    cin>>Dismissals;
    cout<<"Enter the total balls faced: ";
    cin>>BallsFaced;

    cout<<"Batting average: "<<BattingAverage(RunsScored, Dismissals)<<endl;
    cout<<"Strike Rate: "<<StrikeRate(RunsScored, BallsFaced)<<endl;

    return 0;
}