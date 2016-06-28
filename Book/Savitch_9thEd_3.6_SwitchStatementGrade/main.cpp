/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 7:12 PM
 * Purpose: Program to illustrate the switch statement.
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
    char grade;
    
    //Input Data
    cout<<"Enter your midterm grade and press Return: ";
    cin>>grade;
    
    //Process Data
                   
    //Output Data
    switch(grade)
    {
        //case 'A'||'a':
        case'A':
            cout<<"Excellent. "
            <<"You need not take the final.\n";
            break;
        //case 'B'||'b':
        case 'B':
            cout<<"Very Good. ";
            grade= 'A';
            cout<<"Your midterm grade is now "<<grade<<endl;
            break;
        //case 'C'||'c':
        case 'C':
            cout<<"Passing.\n";
            break;
        case 'D':
        //case 'D'||'d':
        case 'F':
        //case 'F'||'f':
            cout<<"Not very good. Go study.\n";
            break;
        default:
            cout<<"That is not a possible grade. \n";
    }
    return 0;
}

