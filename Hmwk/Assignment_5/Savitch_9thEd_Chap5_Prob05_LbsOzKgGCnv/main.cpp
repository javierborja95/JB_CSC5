/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 5:20 PM
 * Purpose: Converts pounds and ounces to kilos and grams.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float LBKGCNV=2.2046; //2.2046 lbs in 1 kg

//Function Prototypes
void input(int&,int&);
void convert(int,int,float&,int&);
void display(float,int);

//Execution

int main(int argc, char** argv) {
    //Variables
    int lbs, oz;
    float kg;
    int  g;
    char choice;
    
    do{
        //Input Data
        input(lbs,oz);
        //Process Data
        convert(lbs,oz,kg,g);
        //Output Data
        display(kg,g);
        cout<<endl<<"Type 1 to run this program again. Anything else to exit. ";
        cin>>choice;
    }while(choice=='1');

    return 0;
}

void input(int& lbs,int& oz){
    //Input Data
    cout<<"Input whole pounds and ounces to convert into metric.\n"
          "Pounds: ";
    cin>>lbs;
    cout<<"Ounces: ";
    cin>>oz;
}

void convert(int lbs,int oz,float& kg,int& g){
    //Convert Data
    float totLbOz; //total Lbs and Oz
    totLbOz=lbs+(oz/16.0f);
    kg=totLbOz/LBKGCNV;
    g=((kg-static_cast<int>(kg))*1000)+.05;
}

void display(float kg,int g){
    //Display Data
    cout<<"Kilograms = "<<setw(4)<<static_cast<int>(kg)<<"kg"<<endl;
    cout<<"Grams     = "<<setw(4)<<g<<" g"<<endl;
}