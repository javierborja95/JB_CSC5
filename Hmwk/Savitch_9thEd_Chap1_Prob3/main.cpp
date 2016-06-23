/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 3:30 PM
 * Purpose: Modify previous code by changing multiplication sign to division, and divide by 0
 */

//System Libraries
#include <iostream>//Input/ Output Stream Library
using namespace std;//iostream uses the standard namespace

//User LIbraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main( ) {
    cout <<"Hello and welcome to the pod solver.\n";
    //Declare Variables
    int number_of_pods, peas_per_pods, total_peas; 
    
    //Input Data
    cout << "Please press return after entering a number.\n";
    cout << "Enter the number of pods :\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pods;
    
    //Process Data
    total_peas = number_of_pods / peas_per_pods;  //If I divide by 0 then -> RUN FAILED (exit value 1, total time: 9s)
        
    //Output Data
    cout <<"If you have ";
    cout << number_of_pods;
    cout <<" pea pods\n";
    cout <<"and ";
    cout << peas_per_pods;
    cout <<" peas in each pod, then\n";
    cout <<"you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n\n";
    
    cout <<"Good bye and thank you for using the pod solver.\n";
    
    //Exit Stage Right!
    return 0;
}

