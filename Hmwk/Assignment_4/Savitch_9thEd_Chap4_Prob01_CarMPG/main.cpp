/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 5, 2016, 6:40 PM
 * Purpose: Figures out MPG of vehicle.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
float LGCONV=.264179; //1 Liter = 0.264179 gallons
//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    float LConsum, //Liters consumed by car
          nMiles,  //Number of miles traveled
          gConsum, //Gallons consumed
          mpg;     //Miles per gallon
    char  resp;    //'Y' or 'N' response
    
    //Input Data
    cout<<"This program figures out the Miles per Gallon of your vehicle.\n";
    do{
        cout<<"Please enter the Liters of Gasoline consumed in your trip: ";
        cin>>LConsum;
        cout<<"Enter the number of miles traveled: ";
        cin>>nMiles;

        //Process Data
        gConsum=LConsum*LGCONV;//Convert L to Gallons
        mpg=nMiles/gConsum;    //Miles per Gallons

        //Output Data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Because your vehicle consumed "<<gConsum<<" gallons in a trip of "
            <<nMiles<<" miles,\n";
        cout<<"your vehicle has and efficiency of "<<mpg<<" miles per gallon\n";
        cout<<"Do you wish to enter another vehicle? 'Y' or 'N' ";
        cin>>resp;
    }while(resp=='Y'||resp=='y');
                
    return 0;
}

