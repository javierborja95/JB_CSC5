/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 3:54 PM
 * Purpose: Figure out how much fence you need for a length by width area.
 */

//System Libraries
#include <iostream>//Input/ Output Stream Library
using namespace std;//iostream uses the standard namespace

//User LIbraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main( ) {
    cout <<"Hello and welcome to the fence solver.\n";
    //Declare Variables Here
    int length,  //in feet
        width,   //in feet
        tofence; //total fence in feet
    
    //Input data
    cout <<"In order to tell you how much fence you need, you must give me a few dimensions.\n";
    cout <<"How long in feet is the area you want fenced?\n\n";
    cout <<"Please press return after entering a number.\n";
    cin >> length;
    
    cout <<"How wide in feet is the area you want fenced?\n\n";
    cout <<"Please press return after entering a number.\n";
    cin >> width;
    
    //Process Data
    tofence = (length * 2) + (width * 2);
        
    //Output Data
    cout <<"You will need ";
    cout <<tofence;
    cout <<" feet in total fence for your project.\n";
    cout <<"Thank you for using the fence solver!";
            
    //Exit Stage Right!
    return 0;
}

