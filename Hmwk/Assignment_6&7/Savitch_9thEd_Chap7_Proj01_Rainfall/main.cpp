/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 21, 2016, 5:30 PM
 * Purpose: Gets rainfall for each month and displays averages and difference.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
#include <cstdlib>    //Random Function
#include <ctime>      //Time
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void getRain(float[],int);
void aveDiff(float,float);
//Execution

int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    //Variables
    const int SIZE=12;
    float rain[SIZE]={};
    
    //Input Data
    getRain(rain,SIZE);
    //Process Data
    
    //Output Data
    return 0;
}

void getRain(float rain[],int months){
    //Declare Variables
    float average;
    //Get Data and Process Data
    cout<<"Rain for:"<<setw(19)<<"Average "<<"Difference"<<endl;
    for(int i=0;i<months;i++){
        rain[i]=(rand()%1000/100.0f);
        average=(i==0)?rain[i]:
            average=((average*(i))+(rain[i]))/(i+1);
    //Output Data
        switch (i){
            case 0:cout<<"January   ";break;
            case 1:cout<<"February  ";break;
            case 2:cout<<"March     ";break;
            case 3:cout<<"April     ";break;
            case 4:cout<<"May       ";break;
            case 5:cout<<"June      ";break;
            case 6:cout<<"July      ";break;
            case 7:cout<<"August    ";break;
            case 8:cout<<"September ";break;
            case 9:cout<<"October   ";break;
            case 10:cout<<"November  ";break;
            default:cout<<"December  ";break;
        }
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<" = "<<rain[i]<<"\""<<setw(7)<<average<<"\"   ";
        if(i>0)aveDiff(average,rain[i]);
        else cout<<"-----"<<endl;
    }
}

void aveDiff(float ave,float rain){
    //Declare Variables
    float diff;
    //Process Data
    diff=rain-ave;
    //Output
    if(diff>0)cout<<"+";
    cout<<diff<<endl;
}