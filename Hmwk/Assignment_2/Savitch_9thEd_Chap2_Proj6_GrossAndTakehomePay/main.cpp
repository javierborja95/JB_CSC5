/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 3:07 PM
 * Purpose: Figures out Gross pay of a worker. Overtime starts after 40hrs at a rate of 1 1/2 time.
 * Figures out tax deductions, union dues, dependents health insurance and final take home pay.
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
float const  TAX=.25;        //Social Security tax.  6%
                             //Federal Income tax.  14%
//Total Tax 25%              //State Income tax.     5%
             
float        payRate;        //Dollars per hours.
unsigned int hrsWrkd,        //Hours worked.
             nDep,           //Number of dependents. If greater than 3, withhold $35 for health insurance.
             unD=10;         //Union dues. $10 per week.
float        grssPay,        //Gross Pay without deductions.
             thPay;          //Take home pay after deductions.

    //Input Data
cout<<"After each question press return.\n\n"
      "What is your payrate per hour?\n$";
cin>>payRate;
cout<<"How many hours did you work this week?\n";
cin>>hrsWrkd;
cout<<"How many dependents do you have?\n";
cin>>nDep;

    //Process Data
if(hrsWrkd<=40)              //If hours worked is less than or equal to 40
{
grssPay=payRate*hrsWrkd; 
}
else                         //If worked overtime
{
grssPay=(payRate*40)+((hrsWrkd-40)*(payRate*1.5)); 
}

if(nDep<=3)                  //If number of dependents if less than or equal to 3, do not deduct 35$ for H. Ins.
{
thPay=grssPay-((grssPay*TAX)+unD); //Take home pay after tax and union dues
}
else                         //If number of dep. is greater than 3. Deduct 35$ for H. Ins.
{
thPay=grssPay-((grssPay*TAX)+unD+35.0); //Take home pay after tax, union dues, and $35 deduction.
}

    //Output Data
cout<<"You worked "<<hrsWrkd<<" hours this week.";
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout<<"So your gross pay is $"<<grssPay<<endl;
cout<<"We have deducted 6% for your Social Security tax, 14% for your Federal Income tax and 5% for your state income tax.\n"
      "We have also deducted the weekly $10 union dues, and if you had greater than 3 dependents,then we deducted\n"
      "an extra $35 dollars to cover the extra cost of health insurance beyond what the company pays.\n\n"
      "Your final take home pay is $"<<thPay<<endl;
        
    //Exit Stage Right!
    return 0;
}

