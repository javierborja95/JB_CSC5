/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 6, 2016, 11:00 PM
 * Purpose: Retirement refinement
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
    float pv, fv, invRate, depRate, deposit, salary, retSav;
    
    //Input Data
    cout<<"Input Salary in $'s, the deposit %, interest rate in %, "
          <<endl;
    cin>>salary>>depRate>>invRate;
    
    //Process Data
    invRate/=100.0f;  //Convert to decimal 
    depRate/=100.0f;//Convert to decimal
    deposit=depRate*salary;
    retSav=(salary-deposit)/invRate;//Simple Refinement
    fv=pv=0;        //Initialize the future value with the present
    
    //Loop to Display the yearly result
    cout<<fixed;
    cout<<"Our salary =            $"<<setprecision(2)<<salary<<endl;
    cout<<"Yearly Bond Purchase = $"<<setprecision(2)<<deposit<<endl;
    cout<<"Savings at Retirement = $"<<setprecision(2)<<retSav<<endl;
    cout<<"Table Produced with Investment Rate = "<<setprecision(2)
         <<invRate*100<<"% interest\n";
    cout<<"Year    Date     Savings $\n";
    int year=0, dateYr=2016;
    do{
        cout<<setw(4)<<year<<setw(8)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+invRate);//pay each year some interest
        fv+=deposit;
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to nearest penny
        year++;
        dateYr++;
    }while(fv<retSav);
        cout<<setw(4)<<year<<setw(8)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;

    return 0;
}