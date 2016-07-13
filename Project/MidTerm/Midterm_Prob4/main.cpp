/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 3:15 PM
 * Purpose: ISP monthly bill and package recommendation.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output Manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float billA(int hrs);//Bill with package A
float billB(int hrs);//Bill with package B

//Execution

int main(int argc, char** argv) {
    //Variables
    char choice;//Which package chosen [A,B,C]
    int     hrs;//Hours used on internet
    float bill1,//Monthly bill on package A
          bill2,//Monthly bill on package B
         mSaved;//Money saved
    const float BILL3=29.95;//Package C Bill $29.95
    
    //Input Data
    cout<<"This program calculates your Monthly Bill for CSC5 High Speed Internet\n"
          "Please enter the package (A,B,or C) you have: ";
    cin>>choice;
    cout<<"Enter the amount of whole hours used on the internet this month: ";
    cin>>hrs;
    
    //Process Data
    bill1=billA(hrs);//Get bill price for package A
    bill2=billB(hrs);//Get bill price for package B
    
    //Output Data
    cout<<"Because you have package "<<choice<<",\n"
          "Bill = $";
    switch(choice){
        case'a':
        case'A':{
            cout<<setprecision(2)<<showpoint<<fixed<<bill1<<endl;
            if(bill1>bill2){
                mSaved=bill1-bill2;
                cout<<"Switching to package B would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                if(bill2>BILL3){
                    mSaved=bill1-BILL3;
                    cout<<"But switching to package C would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                }
            }else if(bill1>BILL3){
                mSaved=bill1-BILL3;
                cout<<"Switching to package C would save you $"
                <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
            }
        }
            break;
        case'b':
        case'B':{
            cout<<setprecision(2)<<showpoint<<fixed<<bill2<<endl;
            if(bill2>bill1){
                mSaved=bill2-bill1;
                cout<<"Switching to package A would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                if(bill1>BILL3){
                    mSaved=bill1-BILL3;
                    cout<<"But switching to package C would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                }
            }else if(bill2>BILL3){
                mSaved=bill2-BILL3;
                cout<<"Switching to package C would save you $"
                <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
            }
        }
            break;
        default:{
            cout<<setprecision(2)<<showpoint<<fixed<<BILL3<<endl;
            if(BILL3>bill1){
                mSaved=BILL3-bill1;
                cout<<"Switching to package A would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                if(bill1>bill2){
                    mSaved=BILL3-bill2;
                    cout<<"But switching to package B would save you $"
                    <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
                }
            }else if(BILL3>bill2){
                mSaved=BILL3-bill2;
                cout<<"Switching to package B would save you $"
                <<setprecision(2)<<showpoint<<fixed<<mSaved<<endl;
            }
        }
    }
    return 0;
}

float billA(int hrs){//Bill with package A
    float bill;
    bill=(hrs<=5)?16.75:        //If less than 5 hrs bill=$16.75
         (hrs<=25)?             //$ .75 for additional hrs (Max 20 hrs)
            ((hrs-5)*.75)+16.75://Max bill $28.00
         (hrs-25)+28;           //$1.00 after 5 hrs and 20 hrs extra (25 hrs)
    return (bill);
}
        
float billB(int hrs){//Bill with package B
    float bill;
    bill=(hrs<=15)?23.75:       //If less than 15 hrs bill=$23.75
         (hrs<=40)?             //$ .55 for additional hrs (Max 25 hrs)
            ((hrs-15)*.55)+23.75://Max bill $37.50
         ((hrs-40)*.7)+37.5;         //$ .70 after 15 hrs and 25 hrs extra (40 hrs)
    return (bill);
}