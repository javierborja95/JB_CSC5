/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 11, 2016, 2:50 PM
 * Purpose: Calculates credit card interest
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float intChrg(float balance, float mInt);//Current balance, Monthly int. rate
//Execution

int main(int argc, char** argv) {
    //Variables
    float balance, mInt;//Current balance, Monthly Interest Rate %
    int nMonths;        //Number of months to charge interest for
    int mInit;          //Initial months
    char resp;          //Response to y or n
 
    //Input Data
    cout<<"This program computes interest on a credit card balance.\nThe interest"
          " charged is added to your balance each month and interest is charged "
          "on top of that new balance.\n";
do{
    cout<<"Enter your current balance in $, Monthly interest rate as a percent(%) "
          ", and the number of months to calculate.\n"
          "Use a space to separate the values and press return:\n";
    cin>>balance>>mInt>>nMonths;
    
    //Process Data
    mInit=nMonths;
    do{
        balance+=intChrg(balance,mInt);
        nMonths-=1;
    }while(nMonths>0);
    
    //Output Data
    cout<<"After "<<mInit<<" month(s), at an interest of "<<mInt<<"%,\n"
        <<"your balance will = $"<<fixed<<setprecision(2)<<showpoint<<balance<<endl;
    cout<<"Do you wish to calculate again? Type in 'Y' for yes.\n";
    cin>>resp;
}while(resp=='y'||resp=='Y');
    return 0;
}
float intChrg(float balance, float mInt)//Current balance, Monthly int. rate
{
    float intChrg;
    mInt/=100.0f;           //turn percent into decimal
    intChrg=balance*mInt;
    return (intChrg);    //Return the interest charged
}