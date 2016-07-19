/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 1:10 PM
 * Purpose: COnverts feet and inches to meters and centimeters.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float FTMCNV=.3048; //0.3048 m in a foot

//Function Prototypes
void input(int&,int&);
void convert(int&,int&,float&,int&);
void display(float,int);

//Execution

int main(int argc, char** argv) {
    //Variables
    int ft, in;
    float m;
    int  cm;
 
    //Input Data
    input(ft,in);
    //Process Data
    convert(ft,in,m,cm);
    //Output Data
    display(m,cm);

    return 0;
}

void input(int& ft,int& in){
    //Input Data
    cout<<"Input feet and inches to convert into metric.\n"
          "Feet: ";
    cin>>ft;
    cout<<"Inches: ";
    cin>>in;
}

void convert(int& ft,int& in,float& m,int& cm){
    //Convert Data
    float totFtIn; //total feet & inches
    totFtIn=ft+(in/12.0f);
    m=totFtIn*FTMCNV;
    cm=((m-static_cast<int>(m))*1000)+.05;
}

void display(float m,int cm){
    //Display Data
    cout<<"Meters      = "<<static_cast<int>(m)<<"m"<<endl;
    cout<<"Centimeters = "<<cm<<"cm"<<endl;
}