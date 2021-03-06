/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 1:05 PM
 * Purpose: Calculates retroactive pay for any number of months of a worker's 
 * salary and new yearly salary.
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
    const float PAYINCR=.076f;  //Pay increase. 7.6%
                   //All in dollars
    float sal,     //Worker's salary for the past year
          monSal,  //Worker's previous monthly salary 
          rtroPay, //Worker's retroactive pay for n number of months
          newSal,  //Worker's new annual salary
          nMonSal; //Worker's new monthly salary  
    char  ans;     //User response to: "want to calculate another salary?" 
    unsigned int nMonth; //Number of months to calculate rtroPay
    //Input Data
    cout<<"Press return when you are done.\n";
    do
    {
    cout<<"Enter your salary for the previous year in dollars: $";
    cin>>sal;
    cout<<"Enter the number of months for your retroactive pay: ";
    cin>>nMonth;
    
    //Process Data
    monSal   =sal/12;   
    rtroPay  =(monSal*PAYINCR)*nMonth;
    nMonSal  =monSal+(monSal*PAYINCR);
    newSal   =nMonSal*12;
            
    //Output Data
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"The Salary for your previous year was: $"<<sal<<endl
        <<"For the last "<<nMonth<<" months, we owe you: $"<<rtroPay<<endl
        <<"Your new monthly salary is: $"<<nMonSal<<endl
        <<"Your new yearly salary is: $"<<newSal<<endl<<endl;
    
    cout<<"Do you want to enter another salary?\n" //Does the user want to run the program again?
          "Type in y or n.\n";  
    cin>>ans; 
    } while((ans=='y')||(ans=='Y'));
    
    //Exit Stage Right!
    return 0;
}

