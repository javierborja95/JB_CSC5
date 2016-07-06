/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June , 2016,  PM
 * Purpose: Savings with do while loop
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
    float pv, fv, iRate;
    int nYears;
    
    //Input Data
    cout<<"Input the present value in $'s, interest rate in %, number of years in (yrs)"<<endl;
    cin>>pv>>iRate>>nYears;
    
    //Process Data
    iRate/=100.0f;//Convert to decimal 
    fv=pv;        //Initialize the future value with the present
    
    //Loop to Display the yearly result
    cout<<fixed;
    cout<<"Table Produced with "<<setprecision(2)<<iRate*100<<"% interest\n";
    cout<<"Year     Date    Savings $\n";
    int year=0, dateYr=2016;
    do{
        cout<<setw(4)<<year<<setw(8)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+iRate);//pay each year some interest
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to nearest penny
        year++;
        dateYr++;
    }while(year<=nYears);

    return 0;
}