/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 1:10 PM
 * Purpose: COnverts meters and centimeters to feet and inches.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float FTMCNV=.3048; //0.3048 m in a foot

//Function Prototypes
void input(int&,int&);
void convert(int,int,float&,float&);
void display(float,float);

//Execution

int main(int argc, char** argv) {
    //Variables
    int m, cm;
    float ft,in;
    char choice;
    
    do{
        //Input Data
        input(m,cm);
        //Process Data
        convert(m,cm,ft,in);
        //Output Data
        display(ft,in);
        cout<<endl<<"Type 1 to run this program again. Anything else to exit. ";
        cin>>choice;
    }while(choice=='1');
    return 0;
}

void input(int& ft,int& in){
    //Input Data
    cout<<"Input meters and centimeters to convert to imperial\n"
          "Meters: ";
    cin>>ft;
    cout<<"Centimeters: ";
    cin>>in;
}

void convert(int m,int cm,float& ft,float& in){
    //Convert Data
    float totMCm; //total feet & inches
    totMCm=m+(cm/1000.0f);
    ft=totMCm/FTMCNV;
    in=((ft-static_cast<int>(ft))/1.0f)*12;
}

void display(float ft,float in){
    //Display Data
    cout<<"Feet   = "<<setw(5)<<fixed<<static_cast<int>(ft)<<"   ft"<<endl;
    cout<<"Inches = "<<setw(8)<<setprecision(2)<<fixed<<showpoint<<in<<"in"<<endl;
}