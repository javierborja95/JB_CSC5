/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 1:45 PM
 * Purpose: Figures out the value of a hand of blackjack.
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
    int  nCards;
    
    //Input Data
    cout<<"How many cards are in your hand?\n";
    cin>>nCards;
    do{nCards-=1;
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    
    //Process Data
    switch(card){
            case 'K':case 'k':
            case 'Q':case 'q':
            case 'J':case 'j':
            case 'T':case 't':value+=10;break;
            case '9':
            case '8':
            case '7':
            case '6':
            case '5':
            case '4':
            case '3':
            case '2':value+=(card-48);break;
            case 'A':case 'a':value+=11;excess=10;
                 }    
    if(value>21)value-=excess;
    cout<<"The value of the hand at this point = "<<value<<endl;
    }while((nCards>0)&&(value<=21));
    
    //Output Data
    if(value==21){cout<<"21! You win!";}
    else if(value<21)
    {value=21-value;
    cout<<"You lose! To win, you would have needed additional cards that value "
        <<value<<endl;
    }
    else {cout<<"Busted! You lose";}
    return 0;
}

