/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 6:24 PM
 * Purpose: User inputs radius of well in inches, and depth of well in feet.
 * Number of gallons stored in the well casing is calculated.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants
float const PI=3.141593; //Pi rounded to seven significant figures.

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
float radius,            //Radius of well in inches
      depth,             //Depth of well in feet
      volume,            //Volume of well in cubic feet
      water;             //How much water in gallons  
 
    //Input Data
cout<<"Press return after you enter in your values.\n\n"
      "What is the radius of the well in inches?\n";
cin>>radius;
cout<<"What is the depth of the well in feet?\n";
cin>>depth;

    //Process Data
radius=radius/12;                        //Turn inches in terms of feet
volume=(PI*(radius*radius)*depth);       //Calculate volume (v=pi*(r^2)*h)
water=volume*7.48;                       //1 cubic feet~~7.48 gallons
    //Output Data
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);
cout<<"The well has a volume of "<<volume<<" cubic feet,\n"
      "and it holds approximately "<<water<<" gallons of water\n";
   
    //Exit Stage Right!
    return 0;
}

