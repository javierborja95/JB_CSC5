/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 1:45 PM
 * Purpose:
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    char card;
    int  value=0,excess=0;
    
    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    //Process Data
    //Evaluate first card
    switch(card){
            case 'K':
            case 'Q':
            case 'J':
            case 'T':value+=10;break;
            case '9':
            case '8':
            case '7':
            case '6':
            case '5':
            case '4':
            case '3':
            case '2':value+=(card-48);break;
            case 'A':value+=11;excess=10;
                 }    
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Evaluate second card
    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    switch(card){
            case 'K':
            case 'Q':
            case 'J':
            case 'T':value+=10;break;
            case '9':
            case '8':
            case '7':
            case '6':
            case '5':
            case '4':
            case '3':
            case '2':value+=(card-48);break;
            case 'A':value+=11;excess=10;
                 }    
    if(value>21)value-=excess;
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Evaluate third card
    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    switch(card){
            case 'K':
            case 'Q':
            case 'J':
            case 'T':value+=10;break;
            case '9':
            case '8':
            case '7':
            case '6':
            case '5':
            case '4':
            case '3':
            case '2':value+=(card-48);break;
            case 'A':value+=11;excess=10;
                 }    
    if(value>21)value-=excess;
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Output Data
    return 0;
}

