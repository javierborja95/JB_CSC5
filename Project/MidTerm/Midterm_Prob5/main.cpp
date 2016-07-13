/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 5:20 PM
 * Purpose: Calculates gross pay.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output Manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float strPay(int hrs, float rate);//Straight Pay
float dblPay(int hrs, float rate);//Double Pay
float trpPay(int hrs, float rate);//Triple Pay
//Execution

int main(int argc, char** argv) {
    //Variables
    float   rate; //Pay per hour $
    int      hrs; //Hours worked
    float grssPay;//Gross pay
    
    //Input Data
    cout<<"This program calculates employees' weekly gross pay.\n"
        <<"Please enter the employee's hourly rate: $";
    cin>>rate;
    cout<<"Enter the number of hours worked this week: ";
    cin>>hrs;
    
    //Process Data
    grssPay=(hrs<=20)?strPay(hrs,rate):
            (hrs<=40)?dblPay(hrs,rate):
                      trpPay(hrs,rate);
    
    //Output Data
    cout<<"Gross Pay = $"<<setprecision(2)<<fixed<<showpoint<<grssPay<<endl;
    return 0;
}
float strPay(int hrs, float rate){//Straight Pay
    float pay;
    pay=hrs*rate;
    return (pay);
}
float dblPay(int hrs, float rate){//Double Pay after 20 hrs but less than 40hrs
    float pay;
    pay=((hrs-20)*2*rate)+20*rate;
    return (pay);
}
float trpPay(int hrs, float rate){//Triple Pay after 40 hrs
    float pay;
    pay=((hrs-40)*3*rate)+(20*rate*2)+(20*rate);
    return (pay);
}
