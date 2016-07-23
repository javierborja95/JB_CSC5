/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 20, 2016, 12:25 PM
 * Purpose: Input an array of integers and displays how many entries in the array.
 * Swaps the first and last values of the array.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants


//Function Prototypes
void firstLast2();
void swap(int&,int&);

//Execution

int main(int argc, char** argv) {
    //Variables
    
    //Input Data
    cout<<"Input as many integers as you like\n"
          "When you are done, input a 0 or a character."<<endl;
    firstLast2();
    
    //Process Data
    
    //Output Data
    
    return 0;
}

void firstLast2(){
    //Declare Variables
    const int SIZE=100;
    int intAray[SIZE]={};
    int i=0;
    int count=0; //Count of twos
    //Input Data
    do{
        cin>>intAray[i];
        if (intAray[i]==2)count++;
        if(intAray[i]==0){
            cout<<"There are "<<i<<" entries in this array."<<endl;
        }
        i++;
    }while(i<SIZE&&intAray[i-1]!=0);
    swap(intAray[i-i],intAray[i-2]);
}

void swap(int& a,int& b){
    //Process Data
    a=a^b;
    b=a^b;
    a=a^b;
    
    //Output Data
    if(a==0||b==0)cout<<"There are not enough values to swap."<<endl;
    else{
        cout<<"After swapping:"<<endl;
        cout<<"First value = "<<a<<endl;
        cout<<"Last value  = "<<b<<endl;
    }
}