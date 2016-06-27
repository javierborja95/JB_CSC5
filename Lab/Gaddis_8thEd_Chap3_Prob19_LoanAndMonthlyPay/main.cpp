/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 1:25 PM
 * Purpose: Equal monthly loan payments
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Format library
#include <cmath>      //Math Library
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    float loanAmt, intRate, nPymnts, //inputs
          mPymnt, totPaid, intPaid;  //outputs
    
    //Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amount $s, Interest Rate % per month, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    //Process Data 
    float temp=exp(nPymnts*log(1+intRate)); //temp=pow((1+intRate),nPymnts
    mPymnt=intRate*temp*loanAmt/(temp-1);   //Equal payment calculation
    totPaid=nPymnts*mPymnt;                 //Total paid w/ interest
    intPaid=totPaid-loanAmt;                //Financed opportunity cost
    
    //Output Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment = $"<<mPymnt<<endl;
    cout<<"Total Paid =      $"<<totPaid<<endl;
    cout<<"Interest  Paid=   $"<<intPaid<<endl;
    return 0;
}

