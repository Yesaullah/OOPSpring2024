#include <iostream>
#include <cstdlib>
using namespace std;

class Table{
    private:
    // private data members
    int MaxSeats; // max seats avaialable on a table
    int SeatsOccupied; // seats occupied on a table
    int SeatsFree; // seats free on a table
    bool clean; // checks if the table is clean
    bool occupancy; // this will be used to check if the table is occupied or not
    public:
    // public data members and methods
    Table(){ // default constructor
        MaxSeats = 4;
        SeatsOccupied = 0;
        SeatsFree = 4;
        clean = true;
        occupancy = false;
    }
    Table(int capacity, bool cl, bool oc){ // perameterized constructor
    	clean = cl;
        occupancy = oc;
        if(capacity == 4 || capacity == 8){
            MaxSeats = capacity;
        }
        else{
            int distance_4, distance_8;
            distance_4 = abs(capacity-4); // this will determine how close is the integer to 4
            distance_8 = abs(capacity-8); // this will determine how close is the integer to 8
            if(distance_4 < distance_8){
                MaxSeats = 4;
            }
            else{
                MaxSeats = 8;
            }
        }
        cout<<"--> The table has been initialized with: clean = yes, occupancy = no."<<endl;
    }
    void TableUse(int people){
        if (clean == true /*checks if the table is clean*/){
            if(people > 0 && people <= 4){
                occupancy = true;
            }
            else if (people > 4 && people <= 8){
                occupancy = true;
            }
            else {
                cout<<"The group of people is too large to sit on any table."<<endl;
            }
        }
        else{
            cout<<"This table is either not clean or it is already occupied, please look for another one."<<endl;
        }
    }
    void Lunch(){ // this method could be called if a group wants to have a lunch. it is necessary to call the TableUse method before using this method.
        clean = false;
        cout<<"--> The group is having lunch at this table."<<endl;
    }
    void leaveTable(){ // This sets the table to unoccupied if it is already occupied. it is necessary to call the TableUse method before using this method.
        occupancy = false;
        cout<<"--> The group has left the table."<<endl;
    }
    void TableCleaner(){ // this method will be called when the group is leaving the table.
        if(occupancy==false){
            clean = true;
            cout<<"--> The table has been cleaned."<<endl;
        }
        else{
            cout<<"Cannot clean the table right now. The table is occupied."<<endl;
        }
    }
    void Empty(){
        SeatsOccupied = 0;
        SeatsFree = MaxSeats;
        cout<<"--> The table is empty now."<<endl;
    }
    bool getOccupancy(){
        return occupancy;
    }
};

// a global array for the tables available
//Table arrTable[20];
//global variable
int ptr_4 = 0; // pointer for tables occupied with max seats 4
int ptr_8 = 0; // pointer for tables occupied with max seats 8
// global functions
void OccupyTable(Table arrTable[], int GroupSize){
    int i;
    if(GroupSize>4 && GroupSize<=8){
        for(i=0; i<3; i++){ //only checking the tables with max seats 8
            bool check;
            check = arrTable[i].getOccupancy();
            if(check == false){
                arrTable[i].TableUse(GroupSize); // this function only sets the occupancy to true
                ptr_8++;
            }
            else{
                continue;
            }
        }
    }
    else if(GroupSize>0 && GroupSize<=4){ // only checking the tables with max seats 4 
        for(i=3; i<5; i++){
            bool check;
            check = arrTable[i].getOccupancy();
            if(check == false){
                arrTable[i].TableUse(GroupSize); // this function only sets the occupancy to true
                ptr_4++;
            }
            else{
                continue;
            }
        }
    }
}
void EmptyTable(Table arrTable[], int TableNum){
    arrTable[TableNum-1].leaveTable(); // this will set the table occupancy to empty
    arrTable[TableNum-1].TableCleaner(); // this will clean the table for next use 
    arrTable[TableNum-1].Empty(); // this will adjust the seats of the table according to the situation
}

int main(){
    cout<<"Name: Mohammad Yesaullah Sheikh.\nRoll no: 23K-0019\n"<<endl;

    Table tables[5]; // class array object
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    int i;
    for(i=0; i<3; i++){
        tables[i] = Table(8, true, false); // create three objects with 8 seats each
    }
    for(i=3; i<5; i++){
        tables[i] = Table(4, true, false); // create two objects  with 4 seats each
    }
        
    //cout<<"---------------------------------------------------------------"<<endl;
    OccupyTable(tables, 6); // calling the globabl function // this is table 2
    OccupyTable(tables, 4); // calling the global function // this is table 1
    cout<<"---------------------------------------------------------------"<<endl;

    // calling the methods for table 1
    // index 3 is used for the array because we have only taken one table of max seats 4 and its  index is 3 in the array.
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Table 1 usage: "<<endl;
    tables[3].TableUse(4);
    tables[3].Lunch();
    tables[3].leaveTable();
    tables[3].TableCleaner();
    cout<<"---------------------------------------------------------------"<<endl;

    // calling the empty table function for table 2 // 1 is passed as the argument becuase the first element of the tables array must have been used for the only table with max seats 8
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Table 2:"<<endl;
    EmptyTable(tables, 1);
    cout<<"---------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
    return 0;
}
