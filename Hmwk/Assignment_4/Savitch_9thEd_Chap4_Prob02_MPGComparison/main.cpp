/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 5, 2016, 6:40 PM
 * Purpose: Figures out MPG of two vehicles and compares their MPGs.
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
    float LCons1, //Liters consumed by car 1
          LCons2, //Liters consumed by car 2
          nMiles1,//Number of miles traveled by car 1
          nMiles2,//Number of miles traveled by car 2
          gCons1, //Gallons consumed by car 1
          gCons2, //Gallons consumed by car 2
          mpg1,   //Miles per gallon of car 1
          mpg2;   //Miles per gallon of car 2
    char  resp;   //'Y' or 'N' response
    
    //Input Data
    cout<<"This program figures out the Miles per Gallon of two vehicles.\n";
    do{
        cout<<"Please enter the Liters of Gasoline consumed by car 1: ";
        cin>>LCons1;
        cout<<"Enter the number of miles traveled by car 1: ";
        cin>>nMiles1;
        //End Car 1
        cout<<"Please enter the Liters of Gasoline consumed by car 2: ";
        cin>>LCons2;
        cout<<"Enter the number of miles traveled by car 2: ";
        cin>>nMiles2;
        //End Car 2

        //Process Data
        gCons1=LCons1*LGCONV;   //Convert L to Gallons
        mpg1=nMiles1/gCons1;    //Miles per Gallons
        //End Car 1
        gCons2=LCons2*LGCONV;   //Convert L to Gallons
        mpg2=nMiles2/gCons2;    //Miles per Gallons
        //End Car 2

        //Output Data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Car 1 consumed "<<gCons1<<" gallons in "<<nMiles1<<" miles.\n"
              "Car one has an efficiency of "<<mpg1<<" miles per gallon.\n";
        //End Car 1
        cout<<"Car 2 consumed "<<gCons2<<" gallons in "<<nMiles2<<" miles.\n"
              "Car two has an efficiency of "<<mpg2<<" miles per gallon.\n";
        //End Car 2
        if(mpg1>mpg2)
             cout<<"Car one has the best fuel efficiency.\n";
        else if(mpg1>mpg2)
             cout<<"Car two has the best fuel efficiency.\n";
        else cout<<"Both cars have equal fuel efficiency.\n";

        cout<<"Do you wish to run this program again? 'Y' or 'N' ? ";
        cin>>resp;
    }while(resp=='Y'||resp=='y');
                
    return 0;
}

