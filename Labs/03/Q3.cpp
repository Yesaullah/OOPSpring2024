/*
	Name: Mohammad Yesaullah Sheikh
	Roll no: 23k-0019
*/
#include <iostream>
#include <string>

using namespace std;

class calendar{
	// data members
	string january[31];
	string february[31];
	string march[31];
	string april[31];
	string may[31];
	string june[31];
	string july[31];
	string august[31];
	string september[31];
	string october[31];
	string november[31];
	string december[31];
	string current_year;
	// methods
	public:
		void add_task(int date, int month, string task){
			switch (month){
				case 1:
					january[date-1] = task;
					break;
				case 2:
					february[date-1] = task;
					break;
				case 3:
					march[date-1] = task;
					break;
				case 4:
					april[date-1] = task;
					break;
				case 5:
					may[date-1] = task;
					break;
				case 6:
					june[date-1] = task;
					break;
				case 7:
					july[date-1] = task;
					break;
				case 8:
					august[date-1] = task;
					break;
				case 9:
					september[date-1] = task;
					break;
				case 10:
					october[date-1] = task;
					break;
				case 11:
					november[date-1] = task;
					break;
				case 12:
					december[date-1] = task;
					break;
				default: 
					cout<<"Enter a valid month.";
					break;
			}
		}
		void remove_task(int date, int month){
			switch (month){
				case 1:
					january[date-1] = "";
					break;
				case 2:
					february[date-1] = "";
					break;
				case 3:
					march[date-1] = "";
					break;
				case 4:
					april[date-1] = "";
					break;
				case 5:
					may[date-1] = "";
					break;
				case 6:
					june[date-1] = "";
					break;
				case 7:
					july[date-1] = "";
					break;
				case 8:
					august[date-1] = "";
					break;
				case 9:
					september[date-1] = "";
					break;
				case 10:
					october[date-1] = "";
					break;
				case 11:
					november[date-1] = "";
					break;
				case 12:
					december[date-1] = "";
					break;
				default: 
					cout<<"Enter a valid month.";
					break;
			}
		}
		void display_tasks(){
			int i, j;
			for(i=1; i<=12; i++){
				switch (i){
					case 1:
						cout<<"Tasks for January: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<january[j]<<endl;
						}
						break;
					case 2:
						cout<<"Tasks for February: "<<endl;
						for (j=0; j<29; j++){
							cout<<"	Day "<<j+1<<": "<<february[j]<<endl;
						}
						break;
					case 3:
						cout<<"Tasks for March: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<march[j]<<endl;
						}
						break;
					case 4:
						cout<<"Tasks for April: "<<endl;
						for (j=0; j<30; j++){
							cout<<"	Day "<<j+1<<": "<<april[j]<<endl;
						}
						break;
					case 5:
						cout<<"Tasks for May: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<may[j]<<endl;
						}
						break;
					case 6:
						cout<<"Tasks for June: "<<endl;
						for (j=0; j<30; j++){
							cout<<"	Day "<<j+1<<": "<<june[j]<<endl;
						}
						break;
					case 7:
						cout<<"Tasks for July: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<july[j]<<endl;
						}
						break;
					case 8:
						cout<<"Tasks for August: "<<endl;
						for (j=0; j<30; j++){
							cout<<"	Day "<<j+1<<": "<<august[j]<<endl;
						}
						break;
					case 9:
						cout<<"Tasks for September: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<september[j]<<endl;
						}
						break;
					case 10:
						cout<<"Tasks for October: "<<endl;
						for (j=0; j<30; j++){
							cout<<"	Day "<<j+1<<": "<<october[j]<<endl;
						}
						break;
					case 11:
						cout<<"Tasks for November: "<<endl;
						for (j=0; j<31; j++){
							cout<<"	Day "<<j+1<<": "<<november[j]<<endl;
						}
						break;
					case 12:
						cout<<"Tasks for December: "<<endl;
						for (j=0; j<30; j++){
							cout<<"	Day "<<j+1<<": "<<december[j]<<endl;
						}
						break;
				}
			}		
		}	
};

int main(){
	calendar data;
	string task;
	int month;
	int date;
	int choice;
	restart:
	cout<<"------------------------------------------------------\n";
	cout<<"--> Press '1' if you want to add a task.\n--> Press '2' if you want to remove a task.\n--> Press '3' if you want to display tasks for each month's each day.\n--> Press '0' to exit the program."<<endl;
	cout<<"------------------------------------------------------\n";
	cout<<"\n--> Enter your choice: ";
	cin>>choice;
	cout<<"\n";
	cout<<"------------------------------------------------------\n";
	switch (choice){
		case 1:
			cout<<"Enter Month (in numbers): ";
			cin>>month;
			cout<<"Enter Day (in numbers): ";
			cin>>date;
			cout<<"Enter the Task: ";
			cin.ignore();
			getline(cin, task);
			data.add_task(date, month, task);
			cout<<"\n";
			goto restart;
			break;
		case 2:
			cout<<"Enter Month (in numbers): ";
			cin>>month;
			cout<<"Enter Day (in numbers): ";
			cin>>date;
			data.remove_task(date, month);
			cout<<"\n";
			goto restart;
			break;
		case 3:
			data.display_tasks();
			cout<<"\n";
			goto restart;
			break;
		case 0:
			exit(0);
			break;
	}
	
	
}
