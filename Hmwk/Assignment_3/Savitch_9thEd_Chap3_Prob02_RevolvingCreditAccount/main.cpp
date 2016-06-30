/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 7:42 PM
 * Purpose: Calculates interest due, total amount due, and minimum payment of a
 * revolving credit account.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    const float INTR1=0.015,//1.5% on first $1,000
                INTR2=0.01; //1.0% after $1,000
          float balance,    //Account balance
                intrTot,    //Total interest owed
                total,      //total= intrTot+balance
                minPay;     //Minimum Payment: total<=?$10 Minimum Payment is total
                            //Else minimum payment is 10% or $10, whichever is largest
          char  ans;        //Answer to "want to run this program again?
            
    //Input Data
    cout<<"This program calculates the total money owed on your credit account.\n"
          "We charge 1.5% for the first $1,000 and 1% for anything after that.\n";
    do{
    cout<<"What is your current balance in dollars?: $";
    cin>>balance;
    
    //Process Data
    intrTot=(balance<1000)?(balance*INTR1):       //balance less than $1,000
            ((1000*INTR1)+((balance-1000)*INTR2));//balance greater than $1,000
    total  =balance+intrTot;                      //Total owed
    if (total<=10)
        minPay=total;
    else 
        minPay=total*.1; //Minumum payment 10%
    if (minPay<10)
        minPay=10.00;    //Minimum payment is 10% or $10, whichever is largest
    if (minPay>total)
        minPay=total;    //Minimum payment cannot be more than total
         
    //Output Data
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(2);
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Because your account balance is: $"<<setw(10)<<balance<<",\n"
          "Your interest owed is:           $"<<setw(10)<<intrTot<<endl;
    cout<<"Your total owed is:              $"<<setw(10)<<total<<endl;
    cout<<"Your minimum payment due is:     $"<<setw(10)<<minPay<<endl;
    cout<<"Do you want to run this program again?\n"
          "Type in 'Y' or 'N' :";
    cin>>ans;
    }while(ans=='y'||ans=='Y'); //Runs program again if user wants
    return 0;
}

