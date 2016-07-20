/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 4:40 PM
 * Purpose: Converts ft to m or vice versa, depending on choice.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Format Output
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float FTMCNV=.3048; //0.3048 m in a foot

//Function Prototypes
void input1(float&,float&);
void convert1(int,int,float&,int&);
void display1(float,int);
void input2(float&,int&);
void convert2(float,int,float&,float&);
void display2(float,float);

//Execution

int main(int argc, char** argv) {
    //Variables
    int cm;
    float m,ft,in;
    char ans;
    char choice;

    do{
        //Input Data
        cout<<"Type in 1 to convert feet to meters.\n"
              "Type in 2 to convert meters to feet."<<endl;
        cin>>ans;
        if(ans=='1')
            input1(ft,in);
        else input2(m,cm);

        //Process Data
        if(ans=='1')
            convert1(ft,in,m,cm);
        else
            convert2(m,cm,ft,in);
        
        //Output Data
        if(ans=='1')
            display1(m,cm);
        else display2(ft,in);
        cout<<endl<<"Type 1 to run this program again. Anything else to exit. ";
        cin>>choice;
    }while(choice=='1');

    return 0;
}

void input1(float& ft,float& in){
    //Input Data
    cout<<"Input whole feet and inches to convert into metric.\n"
          "Feet: ";
    cin>>ft;
    cout<<"Inches: ";
    cin>>in;
}

void convert1(int ft,int in,float& m,int& cm){
    //Convert Data
    float totFtIn; //total feet & inches
    totFtIn=ft+(in/12.0f);
    m=totFtIn*FTMCNV;
    cm=((m-static_cast<int>(m))*1000)+.5;
}

void display1(float m,int cm){
    //Display Data
    cout<<"Meters      = "<<setw(4)<<static_cast<int>(m)<<" m"<<endl;
    cout<<"Centimeters = "<<setw(4)<<cm<<"cm"<<endl;
}

void input2(float& ft,int& in){
    //Input Data
    cout<<"Input whole meters and centimeters to convert to imperial\n"
          "Meters: ";
    cin>>ft;
    cout<<"Centimeters: ";
    cin>>in;
}

void convert2(float m,int cm,float& ft,float& in){
    //Convert Data
    float totMCm; //total feet & inches
    totMCm=m+(cm/1000.0f);
    ft=totMCm/FTMCNV;
    in=((ft-static_cast<int>(ft))/1.0f)*12;
}

void display2(float ft,float in){
    //Display Data
    cout<<"Feet   = "<<setw(5)<<fixed<<static_cast<int>(ft)<<"   ft"<<endl;
    cout<<"Inches = "<<setw(8)<<setprecision(2)<<fixed<<showpoint<<in<<"in"<<endl;
}