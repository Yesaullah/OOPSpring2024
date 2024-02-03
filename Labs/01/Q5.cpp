#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct event {
	string name;
	string date;
	string vanue;
	string organizer;
};

int main(){
	int n; //this variable will store the number of events 
	cout << "--> Enter the number of events: ";
	cin >> n;
	cout << "\n";
	
	event *data = new event[n]; // allocating memory dynamically
	
	int i; // loop controlling variable 
	
	// taking inputs for all the events
	for(i=0; i<n; i++){
		cout << "\n";
		cout << "--> Event " << i+1 << ":\n";
		cout << "	--> Enter the event's name: ";
		cin >> data[i].name;
		cout << "	--> Enter the event's date: ";
		cin >> data[i].date;
		cout << "	--> Enter the event's venue: ";
		cin >> data[i].vanue;
		cout << "	--> Enter the name of organizer: ";
		cin >> data[i].organizer;
	}
	
	// Displaying all the data related to each event 
	cout << "\n";
	cout << "--> Every event's relevant details are:\n";
	for (i=0; i<n; i++){
		cout << "\n	--> Event number: " << i+1;
		/*cout << "\n		--> Name: " << data[i].name;
		cout << "\n		--> Date: " << data[i].date;
		cout << "\n		--> Venue: " << data[i].vanue;
		cout << "\n		--> Organizer: " << data[i].organizer;
		cout << "\n"; */
		cout << "Event Name: ";
        cin.ignore();
        cin.getline(data[i].name, sizeof(data[i].name));
        cout << "Date: ";
        cin.getline(data[i].date, sizeof(data[i].date));
        cout << "Venue: ";
        cin.getline(data[i].vanue, sizeof(data[i].vanue));
        cout << "Organizer: ";
        cin.getline(data[i].organizer, sizeof(data[i].organizer));
	}
	
	// Displaying all events that match the provided date, including their complete details.
	string Date;
	cout << "\n--> Enter the date for which you want to check the events: ";
	cin >> Date;
	for(i=0; i<n; i++){
		if (Date == data[i].date){
			cout << "\n	Event name: " << data[i].name;
			cout << "\n	Event venue: " << data[i].vanue;
			cout << "\n	Event organizer: " << data[i].organizer;
			cout << "\n";
		}
	}
	
	delete[] data;
	
	return 0;
}




