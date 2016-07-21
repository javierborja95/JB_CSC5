/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 20, 2016, 12:25 PM
 * Purpose: Input an array of integers and displays how many entries in the array.
 * Function returns true if array starts or ends with digit 2.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants


//Function Prototypes
bool firstLast2();
//Execution

int main(int argc, char** argv) {
    //Variables
    bool tF; //True/false
    
    //Input Data
    cout<<"Input as many integers as you like\n"
          "When you are done, input a 0 or a character."<<endl;
    tF=firstLast2();
    //Process Data
    
    //Output Data
    if (tF==true)cout<<"The array starts or ends with the digit 2"<<endl;
    else cout<<"The array doesn't start or end with the digit 2"<<endl;
    return 0;
}

bool firstLast2(){
    //Declare Variables
    const int SIZE=100;
    int intAray[SIZE]={};
    int i=0;
    //Input Data
    do{
        cin>>intAray[i];
        if(intAray[i]==0){
            cout<<"There are "<<i<<" entries in this array."<<endl;
        }
        i++;
    }while(i<SIZE&&intAray[i-1]!=0);
    if(intAray[i-2]==2||intAray[i-i]==2)return true;
    return false;
}
