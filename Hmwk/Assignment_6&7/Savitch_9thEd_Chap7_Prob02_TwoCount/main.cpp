/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 20, 2016, 12:25 PM
 * Purpose: Input an array of integers and displays how many entries in the array.
 * Tells you how many number of twos in the array.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants


//Function Prototypes
int firstLast2();
//Execution

int main(int argc, char** argv) {
    //Variables
    int n; //Number of twos
    
    //Input Data
    cout<<"Input as many integers as you like\n"
          "When you are done, input a 0 or a character."<<endl;
    n=firstLast2();
    //Process Data
    
    //Output Data
    cout<<"There are "<<n<<" number of twos in the array."<<endl;
    return 0;
}

int firstLast2(){
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
    return count;
}
