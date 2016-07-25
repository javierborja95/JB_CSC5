/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 24, 2016, 5:00 PM
 * Purpose: Enter in a 5 digit pin converted to a code.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <cstdlib>
#include <ctime>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void getPin(int[],int);
void gnerate(int[],int);
void getCode(int[],int);
void compare(int[],int[],int[]);
//Execution

int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    //Variables
    const int SIZE=10;
    const int PIN=5;  //5 digit pin
    int pin[PIN];
    int num[SIZE];
    int guess[PIN];
    char ans;
    
    //Input and Process Data
    getPin(pin,PIN);
    do{
        cout<<endl<<"PIN:    0 1 2 3 4 5 6 7 8 9\n"
                    "NUM:    ";
        gnerate(num,SIZE);
        for(int i=0;i<SIZE;i++){
            cout<<num[i]<<" ";
        }
        getCode(guess,PIN);
        //Output Data
        compare(pin,guess,num);
        cout<<"If you wish to log in again input a 1."
              " Anything else to quit."<<endl;
        cin>>ans;
    }while(ans=='1');

    return 0;
}

void getPin(int a[],int size){
    cout<<"Input your 5 digit PIN seperated with spaces"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void gnerate(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=(rand()%3+1);
    }
}

void getCode(int a[],int size){
    cout<<endl<<"Input the 5 Numbers that correspond to your PIN separated by spaces"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void compare(int pin[],int guess[],int num[]){
    bool correct=true;
    for(int i=0;i<5&&correct==true;i++){
        if(guess[i]==num[(pin[i])])correct=true;
        else correct=false;
    }
    if(correct)cout<<"Authentication Process Complete"<<endl;
    else cout<<"Incorrect PIN"<<endl;
}