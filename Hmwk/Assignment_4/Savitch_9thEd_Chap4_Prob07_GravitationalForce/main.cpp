/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 10, 2016, 3:20 PM
 * Purpose: Figures out the gravitational force between two objects.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
float GRAV=6.6673e-8; //Universal Gravitational Constant [cm^3/(g*sec^2)]
//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    float force,   //F=(GRAV*m1*m2)/d^2
          mass1,   //Mass of object one in grams
          mass2,   //Mass of object two in grams
          dist;    //Distance between two objects in cm
    char  resp;    //Response to "Yes or No?"
   
    //Input Data
    cout<<"This programs calculates the gravitational attractive force between"
          " two objects and outputs the value in dynes.\n";
    do{
        cout<<"What is the mass of the first object in grams?";
        cin>>mass1;
        cout<<"What is the mass of the second object in grams?";
        cin>>mass2;
        cout<<"What is the distance between the two objects in centimeters?";
        cin>>dist;

        //Process Data
        force=(GRAV*mass1*mass2)/(dist*dist);

        //Output Data
        cout<<"The gravitational attractive force between those two objects is "
            <<force<<" dynes (g*cm)/sec^2"<<endl;
        cout<<"Do you want to calculate another value? Answer 'Y' or 'N'";
        cin>>resp;
    }while (resp=='Y'||resp=='y');
    return 0;
}

