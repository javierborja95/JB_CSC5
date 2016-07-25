/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 25, 2016, 12:30 PM
 * Purpose: Views and edits the schedules of Jeff and Anna.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>     //Strings
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE=5;
//Function Prototypes
void viewScd(string[][SIZE]);
void mark(string[][SIZE]);
//Execution

int main(int argc, char** argv) {
    //Variables
    int choice,ans;
    string jeff[SIZE][SIZE]={"Jeff ","Monday ","Tuesday","Wdnesdy","Thrsday",
                             "11-12","   o   ","   o   ","   o   ","   o   ",
                             "12-1 ","   o   ","   o   ","   o   ","   o   ",
                             "1-2  ","   o   ","   o   ","   o   ","   o   ",
                             "2-3  ","   o   ","   o   ","   o   ","   o   "};
    string anna[SIZE][SIZE]={"Anna ","Monday ","Tuesday","Wdnesdy","Thrsday",
                             "11-12","   o   ","   o   ","   o   ","   o   ",
                             "12-1 ","   o   ","   o   ","   o   ","   o   ",
                             "1-2  ","   o   ","   o   ","   o   ","   o   ",
                             "2-3  ","   o   ","   o   ","   o   ","   o   "};
    do{
    //Input Data
        cout<<"Select 1 to view a schedule.\n"
              "Select 2 to edit a schedule.\n"
              "Select 3 to view all schedules.\n";
        cin>>choice;

    //Process Data
        switch(choice){
            case 1:cout<<"Select 1 for Jeff\n"
                         "Select 2 for Anna"<<endl;
                    cin>>choice;
                    if(choice==1)viewScd(jeff);
                    else viewScd(anna);break;
            case 2:cout<<"Select 1 for Jeff\n"
                         "Select 2 for Anna"<<endl;
                    cin>>choice;
                    if(choice==1)mark(jeff);
                    else mark(anna);break;
            case 3:viewScd(jeff);viewScd(anna);break;
            default:cout<<"Incorrect input"<<endl;
        }
        cout<<"Do you wish to run this program again? 1 for yes, anything else to exit."
            <<endl;
        cin>>ans;
    }while(ans==1);
    //Output Data
    cin.ignore();

    return 0;
}

void viewScd(string a[][SIZE]){
    //Output Data
    cout<<"o's Show free hour slots\nx's show busy hour slots"<<endl;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void mark(string a[][SIZE]){
    //Declare Variables
    int row,col;
    char choice;
    //Input Data
    cout<<"Select 1 to mark time slot as busy,\n"
          "Select 2 to mark time slot as free."<<endl;
    cin>>choice;
    if (choice=='1'){
        viewScd(a);
        cout<<"Input the row[1,4] and column[1,4] you wish to edit. Separate by space.\n";
        cin>>row>>col;
        a[row][col]="   x   ";
        viewScd(a);
    }
    else{
        viewScd(a);
        cout<<"Input the row[1,4] and column[1,4] you wish to edit. Separate by space.\n";
        cin>>row>>col;
        a[row][col]="   o   ";
        viewScd(a);
    }
}