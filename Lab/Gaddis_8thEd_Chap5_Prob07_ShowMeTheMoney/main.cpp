/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 5, 2016, 1:03 PM
 * Purpose: How to double your money
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Manipulate output
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    int pennies=1;//Initial pay per day
    int payDay=0; //Pay at the end of the month
    
    //Input Data

    //Process Data
    for(int day=1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(10)<<pennies/100.0f;
        cout<<" Pay earned $"<<setw(11)<<payDay/100.0f<<endl;
        pennies*=2;
    }               
    //Output Data

    return 0;
}

