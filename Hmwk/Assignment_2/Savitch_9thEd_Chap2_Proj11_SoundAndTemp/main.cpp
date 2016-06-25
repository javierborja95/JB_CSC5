/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 4:49 PM
 * Purpose: User inputs a starting and ending temperature. Velocity of sound at T Initial temperature
 * is calculated and outputs the velocity in single temperature increments until it reaches T Final.
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
int   tIni,           //Initial temperature of dry air in C
      tFin;           //Final Temperature of dry air in C
float velocty;        //Velocity of sound in m/s. velocity=331.3+(.61*T)

    //Input Data
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);
cout<<"This program figures out the velocity of sound at 2 specific temperatures, and displays all the velocities\n";
cout<<"in between the two temperatures.\n\n";
cout<<"What is the initial temperature in Celcius?: ";
      
cin>>tIni;
cout<<"C°"<<endl;
cout<<"What is the final temperature in Celcius?: ";
cin>>tFin;
cout<<"C°"<<endl;

    //Process Data
if (tIni<=tFin)
{do
{
velocty=331.3f+(.61f*tIni);

    //Output Data

cout<<"At "<<tIni<<"° C, the velocity of sound is "<<velocty<<" m/s\n";
tIni=tIni+1;
}while(tIni<=tFin);
}
else{
do
{
velocty=331.3f+(.61f*tIni);

    //Output Data

cout<<"At "<<tIni<<"° C, the velocity of sound is "<<velocty<<" m/s\n";
tIni=tIni-1;
}while(tIni>=tFin);
}
   
    //Exit Stage Right!
    return 0;
}

