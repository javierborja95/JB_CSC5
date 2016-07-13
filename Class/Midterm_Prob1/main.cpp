/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 9:00 PM
 * Purpose: Output 'X'
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
    int origNum,//Original number
           num1,//Temporary number 1
           num2,//Temporary number 2
            num3;
    
    //Input Data
    cout<<"Input an integer from 1-50: ";
    cin>>origNum;
    
    //Process Data
    num1=origNum;
    num2=origNum;
    num3=1;
    //Output Data
    if(origNum==1)cout<<"1";
    else if(origNum==2)cout<<"2\n2";
    //Odd numbers
    else if(origNum>2&&origNum%2==1){
            cout<<origNum;
            do{cout<<" ";num2--;}while(num2>num3);
            cout<<
    }
    
    return 0;
}

