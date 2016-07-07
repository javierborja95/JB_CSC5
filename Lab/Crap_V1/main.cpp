/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 7, 2016, 1:00 PM
 * Purpose: Craps version 1
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
    srand(time(0));
    //Variables
    int nGames,nWins=0,nLose=0;
 
    //Input Data
    cout<<"The Game of Craps"<<endl;
    cout<<"How many games do you want to play?\n";
    cin>>nGames;
    
    //Process Data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine Win or Loss
        if(sum==7||sum==11)nWins++;
        else if(sum==2||sum==3||sum==12)nLose++;
        else{
            //When to roll again
            bool rollAgn=false;
            do{
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
              }while(rollAgn);
        }
    }
    //Output Data
    cout<<"Number of games = "<<nGames<<endl;
    cout<<"Number of wins = "<<nWins<<endl;
    cout<<"Number of losses = "<<nLose<<endl;
    return 0;
}

