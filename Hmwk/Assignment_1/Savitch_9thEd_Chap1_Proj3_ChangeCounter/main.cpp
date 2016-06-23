/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 5:17 PM
 * Purpose: User enters number of coins and the monetary value is displayed
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

int main(int argc, char** argv) {
    
    //Declare Variables
   float penny, nickel, dime, quarter,  //coins
         total;                         //total amount in dollars
    
   //Input Data
   cout<<"Welcome to the coin counter!\nPlease press enter after entering values.\n\n"
        
            "How many pennies do you have?";
   cin>>penny;
      cout<<"How many nickels do you have?";
   cin>>nickel;
      cout<<"How many dimes do you have?";
   cin>>dime;
      cout<<"How many quarters do you have?";
   cin>>quarter;
   cout<<endl;
   
    //Process Data
   total=(penny*.01)+(nickel*.05)+(dime*.10)+(quarter*.25);
           
    //Output Data
   cout<<"In total, you have ";
   if(total > 1)
   {
       cout<<"$"<<total<<endl;     //if amount is greater than 1 dollar then dollars is shown
   }
   else
   {
       cout<<"¢"<<total*100<<endl; //if amount is less than 1 dollar then cents is shown
   }
   
   cout<<"Thanks for using the coin counter!\n";
    //Exit Stage Right!
    return 0;
}