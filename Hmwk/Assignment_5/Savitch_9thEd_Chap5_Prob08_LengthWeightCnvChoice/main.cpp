/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 4:40 PM
 * Purpose: Converts length or weight, depending on choice.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Format Output
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float FTMCNV = .3048; //0.3048 m in a foot
const float LBKGCNV=2.2046; //2.2046 lbs in 1 kg

//Function Prototypes
void input1(float&,float&);
void convert1(int,int,float&,int&);
void display1(float,int);
void input2(float&,int&);
void convert2(float,int,float&,float&);
void display2(float,float);
void input3(float&,float&);
void convert3(int,int,float&,int&);
void display3(float,int);
void input4(float&,int&);
void convert4(float,int,float&,float&);
void display4(float,float);
void length();
void weight();

//Execution

int main(int argc, char** argv) {
    //Variables
    int cm;
    float m,ft,in;
    char ans;
    char choice;

    do{
        //Input Data
        cout<<endl;
        cout<<"Type in 1 to convert length.\n"
              "Type in 2 to convert weight."<<endl;
        cin>>ans;
        if(ans=='1')
            length();
        else weight();
        
        //Output Data
        cout<<endl<<"Type 1 if you wish to make other conversions. Anything else"
                    " to exit. ";
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

void input3(float& lbs,float& oz){
    //Input Data
    cout<<"Input whole pounds and ounces to convert into metric.\n"
          "Pounds: ";
    cin>>lbs;
    cout<<"Ounces: ";
    cin>>oz;
}

void convert3(int lbs,int oz,float& kg,int& g){
    //Convert Data
    float totLbOz; //total Lbs and Oz
    totLbOz=lbs+(oz/16.0f);
    kg=totLbOz/LBKGCNV;
    g=((kg-static_cast<int>(kg))*1000)+.05;
}

void display3(float kg,int g){
    //Display Data
    cout<<"Kilograms = "<<setw(4)<<static_cast<int>(kg)<<"kg"<<endl;
    cout<<"Grams     = "<<setw(4)<<g<<" g"<<endl;
}

void input4(float& kg,int& g){
    //Input Data
    cout<<"Input whole kilos and grams to convert into imperial.\n"
          "Kilos: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>g;
}

void convert4(float kg,int g,float& lbs,float& oz){
    //Convert Data
    float totKgG; //total Lbs and Oz
    totKgG=kg+(g/1000.0f);
    lbs=totKgG*LBKGCNV;
    oz=(lbs-static_cast<int>(lbs))*16.0f;
}

void display4(float lbs,float oz){
    //Display Data
    cout<<"Pounds = "<<setw(1)<<static_cast<int>(lbs)<<" lbs"<<endl;
    cout<<"Ounces = "<<setw(4)<<setprecision(1)<<showpoint<<fixed<<oz<<"oz"<<endl;
}

void length(){
    //Variables
    int cm;
    float m,ft,in;
    char ans;

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
    
}

void weight(){
    //Variables
    int g;
    float kg,lbs,oz;
    char ans;
    char choice;

    //Input Data
    cout<<"Type in 1 to convert pounds to kilos.\n"
          "Type in 2 to convert kilos to pounds."<<endl;
    cin>>ans;
    if(ans=='1')
        input3(lbs,oz);
    else input4(kg,g);

    //Process Data
    if(ans=='1')
        convert3(lbs,oz,kg,g);
    else
        convert4(kg,g,lbs,oz);

    //Output Data
    if(ans=='1')
        display3(kg,g);
    else display4(lbs,oz);
}