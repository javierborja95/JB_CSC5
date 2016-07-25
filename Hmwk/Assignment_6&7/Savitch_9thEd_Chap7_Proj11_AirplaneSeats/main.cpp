/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 24, 2016, 2:00 PM
 * Purpose: Assigns planes seats.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE1=4;
//Function Prototypes
void display(char[][SIZE1],int);
bool choose(char[][SIZE1]);
//Execution

int main(int argc, char** argv) {
    //Variables
    const int SIZE0=7;
    char seats[SIZE0][SIZE1]={'A','B','C','D','A','B','C','D','A','B','C','D',
    'A','B','C','D','A','B','C','D','A','B','C','D','A','B','C','D',};
    bool next=true;
    //Input Data
    cout<<"This program assigns seats in an airplane."
          " 'X's means the seat is taken."<<endl;
    display(seats,SIZE0);
    for(int i=0;i<28&&next;i++){
        next=choose(seats);
        display(seats,SIZE0);
        if(i==27)cout<<"All the seats are taken."<<endl;
    }
    //Process Data
    
    //Output Data
    cout<<endl;
    return 0;
}

void display(char a[][SIZE1],int SIZE0){
    //Display Data
    for(int i=0;i<SIZE0;i++){
        cout<<i+1<<" ";
        for(int j=0;j<SIZE1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool choose(char a[][SIZE1]){
    //Declare variables
    int  row,column; //Rows/Columns
    char choice;     //Columns
    bool goAgn;      //Go again
    //Input Data
    do{
        goAgn=false;
        cout<<"If you wish to end the program type in '-1'"<<endl;
        cout<<"Choose the row (1-7) and column ('A','B',C','D') that you want.\n";
        cin>>row;
        if(row==-1)return false;
        if(row<-1||row>7)goAgn=true;
        cin>>choice;
        //Process Data
        switch (choice){
            case 'A':case 'a':column=0;break;
            case 'B':case 'b':column=1;break;
            case 'C':case 'c':column=2;break;
            case 'D':case 'd':column=3;break;
            default:goAgn=true;
        }
        if(goAgn)cout<<"Incorrect input. Go again."<<endl;
        if(a[row-1][column]=='X'){
            cout<<"That seat is already taken. Go again."<<endl;
            goAgn=true;
        }
    }while(goAgn==true);
    //Process Data
    a[row-1][column]='X';
    return true;
}