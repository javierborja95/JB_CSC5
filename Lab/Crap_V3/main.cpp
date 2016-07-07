/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 7, 2016, 1:00 PM
 * Purpose: Craps version 3
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <ctime>      //Time for random seed
#include <cstdlib>    //Random number seed
#include <iomanip>    //Formatting
#include <cmath>      //Math Library
#include <fstream>    //File I/O
#include <string>     //String Objects
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>time(0));
    //Variables
    int nGames,nWins=0,nLose=0;
    string fName;
    const int SIZE=20;
    char lName[SIZE];
    ofstream out;
 
    //Open files and Input Data
    out.open("stats.dat");
    do{
        cout<<"The Game of Craps"<<endl;
        cout<<"How many games do you want to play?\n";
        cin>>nGames;
    }while(nGames<=0);
    cout<<"What is your first name?"<<endl;
    cin>>fName;
    cout<<"What is your last name?"<<endl;
    cin>>lName;
    //Process Data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine Win or Loss
        switch(sum){
            case  7:
            case 11:nWins++;break;
            case  2:
            case  3:
            case 12:nLose++;break;
            default:{
                //When to roll again
                bool rollAgn=true;
                while(rollAgn){
                    //Throw another dice
                    char die1=rand()%6+1;
                    char die2=rand()%6+1;
                    char sumAgn=die1+die2;
                    if(sum==sumAgn){
                        nWins++;
                        rollAgn=false;
                    }else if(sumAgn==7){
                        nLose++;
                        rollAgn=false;
                    }else rollAgn=true;              
                }
            }
        }
    }
    //Output Data
    cout<<endl<<fName<<"  "<<lName<<"  Game Stats"<<endl;
    cout<<"Number of games = "<<nGames<<endl;
    cout<<"Number of wins = "<<nWins<<endl;
    cout<<"Number of losses = "<<nLose<<endl;
    if(nWins>=nLose)cout<<"You are doing better than statistics determines is "
            "possible!!!"<<endl;
    out.close();
    return 0;
}

