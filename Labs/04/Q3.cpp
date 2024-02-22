/*
	Name: Mohammad Yesaullah Sheikh
	Roll no: 23k-0019
*/
#include <iostream>
#include <string>

using namespace std;

class WeekDays {
	// private data members
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int currentDay;

	public:
	// public data members and methods
    WeekDays() { // default constructor
        currentDay = 0;
    }
	
    WeekDays(int day) { // parameterized cnstructor
        if (day>6) {
            day = day%7;
            currentDay = day;
        }
        else{
        	currentDay = day;
		}
    } 

    string getCurrentDay(){ // method to get the current day
    	int temp = currentDay - 1;
        return days[temp];
    }

    string getNextDay(){ // method to get the next day
        return days[(currentDay)%7];
    }

	string getPreviousDay() {
    	int temp = (currentDay - 1 + 7) % 7;
    	return days[temp];
	}

	
	string getNthDay(int n) {
    	return days[(currentDay + n - 1) % 7];
	}
    
};

int main() {
    WeekDays week(2);
    cout << "--> Current Day: " << week.getCurrentDay() << endl;
    cout << "--> Next Day: " << week.getNextDay() << endl;
    cout << "--> Previous Day: " << week.getPreviousDay() << endl;
    int n;
    cout<<"--> Enter the value of n: ";
    cin>>n;
    cout<<"--> nth" << " day:"<< week.getNthDay(n);
	return 0;
}
