/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 19, 2016, 12:15 PM
 * Purpose:
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <cstdlib>    //Random
#include <ctime>      //Time
#include <iomanip>    //Formatting
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=(1<<31)-1;//Maximum random number

//Function Prototypes
char coin();
char badCoin();
char dice();
char badDice();
void statC(int[],int[]);
void statD(int[],int[]);
void display(char [],int[],int,int);

//Execution

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Variables
    int nToss=1000000;
    const int CSIZE=2,DSIZE=6;
    char coinNm[CSIZE]={'H','T'},diceNm[DSIZE]={'1','2','3','4','5','6'};
    int frqCoin[CSIZE]={},frqBCn[CSIZE]={},frqDie[DSIZE]={},frqBD[DSIZE]={};
    
    //Input Data

    //Process Data
    for(int toss=1;toss<=nToss;toss++){
        statC(frqCoin,frqBCn);
        statD(frqDie,frqBD);
    }
    //Output Data
    display(coinNm,frqCoin,nToss,CSIZE);
    display(coinNm,frqBCn,nToss,CSIZE);
    display(diceNm,frqDie,nToss,DSIZE);
    display(diceNm,frqBD,nToss,DSIZE);
    
    return 0;
}

void statC(int frqFair[],int frqBias[]){
    //Throw a good and bad result
    char good=coin();
    char bad=badCoin();
    //Add to the frequency
    if(good=='H')frqFair[0]++;
    else frqFair[1]++;
    if(bad=='H')frqBias[0]++;
    else frqBias[1]++;
    
}

void statD(int frqFair[],int frqBias[]){
    //Throw a good and bad result
    char good=dice();
    char bad=badDice();
    //Add to the frequency
    switch(good){
        case '1':frqFair[0]++;break;
        case '2':frqFair[1]++;break;
        case '3':frqFair[2]++;break;
        case '4':frqFair[3]++;break;
        case '5':frqFair[4]++;break;
        default :frqFair[5]++;break;
    }
    switch(bad){
        case '1':frqBias[0]++;break;
        case '2':frqBias[1]++;break;
        case '3':frqBias[2]++;break;
        case '4':frqBias[3]++;break;
        case '5':frqBias[4]++;break;
        default :frqBias[5]++;break;
    }
}

void display(char type[],int freq[],int n,int size){
    //Display the results
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=0;i<size;i++){
        cout<<type[i]<<" "<<100.0f*freq[i]/n<<endl;
    }
    cout<<endl;
}

char coin(){
    //Create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return a fair result
    if(x<=0.5f)return 'H';
    return 'T';
}

char badCoin(){
    //Create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return an unfair result
    if(x<=0.25f)return 'H';
    return 'T';
}

char dice(){
    //Create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return a fair result
    if(x<=0.14f)return '1';
    else if(x<=0.28f)return '2';
    else if(x<=0.42f)return '3';
    else if(x<=0.56f)return '4';
    else if(x<=0.70f)return '5';
    else return '6';
}

char badDice(){
    //Create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return an unfair result
    if(x<=1/6.0f)return '1';
    else if(x<=2/6.0f)return '2';
    else if(x<=3/6.0f)return '3';
    else if(x<=4/6.0f)return '4';
    else if(x<=5/6.0f)return '5';
    else return '6';
}