/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 5:20 PM
 * Purpose: Converts kilos and grams to pounds and ounces.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float LBKGCNV=2.20462; //2.2046 lbs in 1 kg

//Function Prototypes
void input(int&,int&);
void convert(int,int,float&,float&);
void display(float,float);

//Execution

int main(int argc, char** argv) {
    //Variables
    int kg, g;
    float lbs, oz;
    char choice;
    
    do{
        //Input Data
        input(kg,g);
        //Process Data
        convert(kg,g,lbs,oz);
        //Output Data
        display(lbs,oz);
        cout<<endl<<"Type 1 to run this program again. Anything else to exit. ";
        cin>>choice;
    }while(choice=='1');

    return 0;
}

void input(int& kg,int& g){
    //Input Data
    cout<<"Input whole kilos and grams to convert into imperial.\n"
          "Kilos: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>g;
}

void convert(int kg,int g,float& lbs,float& oz){
    //Convert Data
    float totKgG; //total Lbs and Oz
    totKgG=kg+(g/1000.0f);
    lbs=totKgG*LBKGCNV;
    oz=(lbs-static_cast<int>(lbs))*16.0f;
}

void display(float lbs,float oz){
    //Display Data
    cout<<"Pounds = "<<setw(1)<<static_cast<int>(lbs)<<" lbs"<<endl;
    cout<<"Ounces = "<<setw(4)<<setprecision(1)<<showpoint<<fixed<<oz<<"oz"<<endl;
}