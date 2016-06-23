/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 20, 2016, 12:27 PM
 * Purpose: Circuit Board sale price
 */

//System Libraries
#include <iostream>//Input/ Output Stream Library
using namespace std;//iostream uses the standard namespace

//User LIbraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float profit=0.40f; //40 percent profit
    float selPrce;     //selling price in $'s
    float cost=12.67f;  //cost in $'s
    //Input Data
    
    //Process Data
    selPrce=cost*(1+profit);
    int pennies=selPrce*100+0.5; //Shift into pennies and add half to round up
    selPrce=pennies/100.0f;
    //Output Data
    cout<<"Cost of circuit to the company = $" <<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}

