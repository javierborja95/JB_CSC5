/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 2:14 PM
 * Purpose: User types in the room capacity and the amount of people attending.
 * If the number of people attending is greater than the room capacity, it is illegal 
 * and we tell the user how many people to exclude. If the number of people is less
 * than the room capacity, we tell the user how many additional people can be included.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int maxCap,  //Maximum room capacity
        att,     //Expected attendence
        extra,   //Extra number of people allowed
        exclude; //Number of people to be excluded if attendance greater than maxCap
    char ans;    //Y or N answer
    
    //Input Data
    cout<<"This will determine if your meeting is in violation of fire law regulations.\n"
          "Press return after answering each question.\n\n";
    do
    {
    cout<<"What is the Maximum room capacity of this room?\n";
    cin>>maxCap; //Maximum room capacity
    cout<<"How many people will be attending this meeting?\n";
    cin>>att;    //Expected attendance
    
    //Output Data
    if(att<=maxCap) //If attendance is less or equal than the max capacity 
    {
    extra=maxCap-att; //Extra number of people allowed
    cout<<"Your meeting is in code.\n"
          "You may allow "<<extra<<" extra people for this meeting.\n";        
    }
    else
    {
    exclude=att-maxCap; //Number of people to be excluded
    cout<<"WARNING!\n"
          "You are in violation of fire law regulations.\n"
          "In order to be up to code, you must exclude "<<exclude<<" people from your meeting.\n";
    }
         
    cout<<"Do you want to run this program again?\n"
          "Type in Y or N: ";
    cin>>ans;
    }
    while(ans=='y'||ans=='Y');
    //Exit Stage Right!
    return 0;
}