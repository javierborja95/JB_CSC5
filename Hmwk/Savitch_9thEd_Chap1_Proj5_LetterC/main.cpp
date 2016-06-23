/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 6:00 PM
 * Purpose: User submits a character and a giant C is created from that character.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

int main(int argc, char** argv) {
    //Declare Variables
    char letter;      //this is the character the user will submit
    
    //Input Data
    cout<<"Hey, wanna see something cool?\nType me a character from your keyboard and press enter.\n";
    cin>>letter;        
    
    //Output Data
    cout<<"     "<<letter<<" "<<letter<<" "<<letter<<endl;
    cout<<"    "<<letter<<"     "<<letter<<endl;
    cout<<"   "<<letter<<endl;
    cout<<"   "<<letter<<endl;
    cout<<"   "<<letter<<endl;
    cout<<"    "<<letter<<"     "<<letter<<endl;
    cout<<"     "<<letter<<" "<<letter<<" "<<letter<<"\n\n";
    cout<<"C stands for cool.\n";
    
    //Exit Stage Right!
    return 0;
}

