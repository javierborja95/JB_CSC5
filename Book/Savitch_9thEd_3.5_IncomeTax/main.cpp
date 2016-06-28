/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 6:49 PM
 * Purpose: Outputs the amout of state income tax due computed as follows:
 * no tax on income up to $15,000; 5% on income between $15,001 and $25,000;
 * 10% over $25,000.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    int   netInc; //net income
    float taxBill,//tax bill
          fivePer,//Five percent tax
          tenPer; //Ten percent tax
    
    //Input Data
    cout<<"Enter net income (rounded to whole dollars) $";
    cin>>netInc;
    
    //Process Data
    if (netInc <=15000)
        taxBill=0;
    else if ((netInc>15000)&&(netInc<=25000))
        taxBill=(.05*(netInc-15000));        //5 percent of amout over $15000
    else                                     //netInc>$25000
    {
        fivePer=.05*10000;
        tenPer =.10*(netInc-25000);
        taxBill=(fivePer+tenPer);
    }
    
    //Output Data
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Net income = $"<<netInc<<endl
        <<"Tax bill = $"<<taxBill<<endl;   

    return 0;
}

