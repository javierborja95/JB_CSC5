/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 1:33 PM
 * Purpose: Find the average to 5 numbers
 */

//System Libraries
#include <iostream>//Input/ Output Stream Library
using namespace std;//iostream uses the standard namespace

//User LIbraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    int x1=28,x2=32,x3=37,x4=24,x5=33; //values we will average
    float avg;
    
    //Input Data
    
    //Process Data
    avg=(x1+x2+x3+x4+x5)/5;
    
    //Output Data
    cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}

