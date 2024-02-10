/*
	Name: Mohammad Yesaullah Sheikh 
	Roll no: 23K-0019
*/
#include <iostream>
#include <string>

using namespace std;

struct Register{
	int course_id;
	string course_name;
};
struct student : public Register{
	int student_id;
	string first_name;
	string last_name;
	string cell_no;
	string email;
};

int main(){
	student data[5];
	int i;
	//taking inputs for 5 students
	cout<<"Enter information regarding each student: "<<endl;
	for(i=0; i<5; i++){
		cout<<"--> Student "<<i+1<<":"<<endl;
		//cin.ignore();
		cout<<"\t--> Enter student's first name: ";
		cin.ignore();
		getline(cin, data[i].first_name);
		cout<<"\t--> Enter student's last name: ";
		getline(cin, data[i].last_name);
		cout<<"\t--> Enter student's ID: ";
		cin>>data[i].student_id;
		cin.ignore();
		cout<<"\t--> Enter student's cell no: ";
		getline(cin, data[i].cell_no);
		cout<<"\t--> Enter student's email: ";
		getline(cin, data[i].email);
		cout<<"\t--> Enter course name: ";
		getline(cin, data[i].course_name);
		cout<<"\t--> Enter course ID: ";
		cin>> data[i].course_id;
	}
	
	//displaying the informmation
	cout<<"\n--> The information about each student is as follows: "<<endl;
	for(i=0; i<5; i++){
		cout<<"	--> Student "<<i+1<<endl;
		cout<<"		Firstname: "<<data[i].first_name<<endl;
		cout<<"		Lastname: "<<data[i].last_name<<endl;
		cout<<"		ID: "<<data[i].student_id<<endl;
		cout<<"		Cell no: "<<data[i].cell_no<<endl;
		cout<<"		Email: "<<data[i].email<<endl;
		cout<<"		Course Name: "<<data[i].course_name<<endl;
		cout<<"		Course ID: "<<data[i].course_id<<endl;
	}
	
	return 0;
}





