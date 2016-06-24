/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 23, 2016, 6:53 PM
 * Purpose: This program asks the user to submit a few words and outputs them
 * into a Mad Lib story.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>     //Manipulate Strings
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string instNam,//First or Last name of the instructor
           studNam,//Student's name
           food,   //Food
           adj,    //Adjective
           color,  //Color   
           animal; //Animal
    short  num;    //Numerical value (100,120)    
    
    //Input Data
    cout<<"Welcome to this game of Mad Lib. I'm going to ask for a few words.\n"
          "Press return when you enter them.\n"
    
    //Process Data
          "Enter the first or last name of your instructor: ";
    cin>>instNam;
    cout<<"Enter your first name: ";
    cin>>studNam;
    cout<<"Enter a food: ";
    cin>>food;
    cout<<"Enter a number between 100 and 120: ";
    cin>>num;
    cout<<"Enter an adjective: ";
    cin>>adj; 
    cout<<"Enter a color: ";
    cin>>color;  
    cout<<"Enter an animal: ";
    cin>>animal;
    cout<<endl;
    
    //Output Data
    cout<<"Dear Instructor "<<instNam<<",\n\n"
            "I am very sorry that I am unable to turn in my homework at this "
            "time.\nFirst, I ate a rotten "<<food<<" which made me turn "
            <<color<<" and extremely ill.\nI came down with a fever of "
            <<num<<".Next, my "<<adj<<" pet "<<animal<<" must have smelled\nthe"
            " remains of the "<<food<<" on my homework,\nbecause he ate it. I am"
            " currently rewriting my homework\nand hope you will accept it late."
            "\n\nSincerly,\n"<<studNam<<endl;
                
    //Exit Stage Right!
    return 0;
}

