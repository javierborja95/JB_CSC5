/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 28, 2016, 12:56 PM
 * Purpose: Grade with switch statement
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
    unsigned int  score; //Input  [0,100]
    char          grade; //Output [A,B,C,D,F]
    
    //Input Data
    cout<<"Input your score [0,100] output will be the grade.\n";
    cin>>score;
    
    //Process Data
    switch(score/10)
    {
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }
        
    //Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

