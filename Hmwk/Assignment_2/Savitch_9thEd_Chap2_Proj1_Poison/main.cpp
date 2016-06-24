/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 23, 2016, 1:10 PM
 * Purpose: How much soda can you drink before you die.
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
    float mseMass=35,  //35g is the mass of the mouse
          mseKill=5,   //5 grams of sweetener to kill a mouse
          hmMass=45400,//grams of a 100lb person
          sdMass=350,  //350g of soda content in a can  
          conc=1e-3;   //1/10th of 1% concentration of sweetener in soda  
    int   Ncans;       //number of cans to kill dieter   
    
    //Input Data
       
    //Process Data
    Ncans=hmMass*mseKill/(mseMass*sdMass*conc);    
    
    //Output Data
    cout<<"The number of cans the dieter with mass ";
    cout<<hmMass<<"(grams) may consume is "<<Ncans<<" cans.\n";        
    //Exit Stage Right!
    return 0;
}

