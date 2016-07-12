/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 12:17 PM
 * Purpose: Output check, numbers in english.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    string date,  //Date 01/01/15
             fN,  //Person paying first name
             lN,  //Person paying last name
             fH,  //Account holder first name
             lH;  //Account holder last name
    float  amnt;  //Check amount
    
    //Input Data
    cout<<"Input today's date in (01/01/16) format:\n";
    cin>>date;
    cout<<"Input your first and last name, omit your middle initial if you have one:\n";
    cin>>fN>>lN;
    cout<<"Input the amount in $: ";
    cin>>amnt;
    cout<<"Input the account holder's first and last name, omit the middle initial:\n";
    cin>>fH>>lH;
    
    //Process Data
    
    //Output Data
    cout<<fH<<" "<<lH<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP"<<setw(30)<<"Date: "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of: "<<fN<<" "<<lN<<setw(20)<<"$ "<<fixed
            <<setprecision(2)<<showpoint<<amnt<<endl;
    cout<<endl;
    
    return 0;
}

