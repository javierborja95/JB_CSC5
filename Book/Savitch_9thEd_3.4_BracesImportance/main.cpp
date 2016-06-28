/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 6:14 PM
 * Purpose: Illustrates the importance of using braces in if-else statements.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    float fuelRd; //fuel gauge reading
    
    //Input Data
    cout<<"Enter the fuel gauge reading: ";
    cin>>fuelRd;
    //Process Data
                   
    //Output Data
    cout<<"First with braces:\n";
    
    if(fuelRd<.75)
    {
        if(fuelRd<.25)
            cout<<"Fuel very low. Caution!\n";
    }
    else
    {
        cout<<"Fuel over 3/4. Don't stop now!\n";
    }
    
    cout<<"Now without braces:\n";
    
    if(fuelRd<.75)
        if(fuelRd<.25)
            cout<<"Fuel very low. Caution!\n";
    else
        cout<<"Fuel over 3/4. Don't stop now!\n";
    return 0;
}

