/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 6:20 PM
 * Purpose: Converts lbs to kg or vice versa, depending on choice.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Format Output
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float LBKGCNV=2.2046; //2.2046 lbs in 1 kg

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
    int g;
    float kg,lbs,oz;
    char ans;
    char choice;

    do{
        //Input Data
        cout<<"Type in 1 to convert pounds to kilos.\n"
              "Type in 2 to convert kilos to pounds."<<endl;
        cin>>ans;
        if(ans=='1')
            input1(lbs,oz);
        else input2(kg,g);

        //Process Data
        if(ans=='1')
            convert1(lbs,oz,kg,g);
        else
            convert2(kg,g,lbs,oz);
        
        //Output Data
        if(ans=='1')
            display1(kg,g);
        else display2(lbs,oz);
        cout<<endl<<"Type 1 to run this program again. Anything else to exit. ";
        cin>>choice;
    }while(choice=='1');

    return 0;
}

void input1(float& lbs,float& oz){
    //Input Data
    cout<<"Input whole pounds and ounces to convert into metric.\n"
          "Pounds: ";
    cin>>lbs;
    cout<<"Ounces: ";
    cin>>oz;
}

void convert1(int lbs,int oz,float& kg,int& g){
    //Convert Data
    float totLbOz; //total Lbs and Oz
    totLbOz=lbs+(oz/16.0f);
    kg=totLbOz/LBKGCNV;
    g=((kg-static_cast<int>(kg))*1000)+.05;
}

void display1(float kg,int g){
    //Display Data
    cout<<"Kilograms = "<<setw(4)<<static_cast<int>(kg)<<"kg"<<endl;
    cout<<"Grams     = "<<setw(4)<<g<<" g"<<endl;
}

void input2(float& kg,int& g){
    //Input Data
    cout<<"Input whole kilos and grams to convert into imperial.\n"
          "Kilos: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>g;
}

void convert2(float kg,int g,float& lbs,float& oz){
    //Convert Data
    float totKgG; //total Lbs and Oz
    totKgG=kg+(g/1000.0f);
    lbs=totKgG*LBKGCNV;
    oz=(lbs-static_cast<int>(lbs))*16.0f;
}

void display2(float lbs,float oz){
    //Display Data
    cout<<"Pounds = "<<setw(1)<<static_cast<int>(lbs)<<" lbs"<<endl;
    cout<<"Ounces = "<<setw(4)<<setprecision(1)<<showpoint<<fixed<<oz<<"oz"<<endl;
}