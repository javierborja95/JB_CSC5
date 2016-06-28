/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 28, 2016, 12:56 PM
 * Purpose: Grade with if-else
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
    if     (score>=90)grade='A';
    else if(score>=80)grade='B';
    else if(score>=80)grade='C';
    else if(score>=80)grade='D';
    else              grade='F';
        
    //Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    return 0;
}

