/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 13, 2016, 12:30 PM
 * Purpose: This program plays rock paper scissors between two players and
 * determines the winner.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Libraryr
#include <ctime>      //Time library
#include <cstdlib>    //Standard library

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Set seed
    srand(time(0));
    //Variables
    char  p1; //player 1 choice
    int   p2; //Computer choice
    char ans; //"Do you want to play again?"
    int win=0, loss=0, tie=0;//Wins losses Ties
    //Input Data
    cout<<"This is a game of rock-paper-scissors.\n";
    do{
    cout<<"Type in 'R' for rock, 'P' for paper, or 'S' for scissors and then "
          "press return\n\n";
    cin>>p1;
    p2=(rand()%3);//0,1,2
    
    //Process Data
    switch (p2){
        case 0:
            p2='R';break;//Rock
        case 1:
            p2='P';break;//Paper
        case 2:
            p2='S';break;//Scissors
    }
    cout<<endl<<"Computer chose ";
    switch (p2){
        case 80:cout<<"Paper."<<endl;break;
        case 82:cout<<"Rock."<<endl;break;
        case 83:cout<<"Scissors."<<endl;break;
    }

    //Output Data
    switch(p1)
    {
        case'r':
        case'R':{//Player one chooses rock
            if     (p2=='r'||p2=='R'){
                    cout<<"It's a tie!";tie++;
            }
            else if(p2=='p'||p2=='P'){
                    cout<<"Paper covers rock! Computer wins!";loss++;
            }
            else if(p2=='s'||p2=='S'){
            cout<<"Rock breaks scissors! You win!";win++;
            }
            else cout<<"You didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        case'p':
        case'P':{//Player one chooses paper
            if     (p2=='r'||p2=='R'){
                    cout<<"Paper covers rock! You win!";win++;
            }
            else if(p2=='p'||p2=='P'){
                    cout<<"It's a tie!";tie++;
            }
            else if(p2=='s'||p2=='S'){
            cout<<"Scissors cuts paper! Computer wins!";loss++;
            }
            else cout<<"You didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        case's':
        case'S':{//Player one chooses scissors
            if     (p2=='r'||p2=='R'){
                    cout<<"Rock breaks scissors! Computer wins!";loss++;
            }
            else if(p2=='p'||p2=='P'){
                    cout<<"Scissors cuts paper! You win!";win++;
            }
            else if(p2=='s'||p2=='S'){
            cout<<"It's a tie!";tie++;
            }
            else cout<<"You didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        default:
            cout<<"You didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
    }
    cout<<"\nDo you want to play again? " 
          "'Y' or 'N'?\n";
    cin>>ans; cout<<endl;
    }while(ans=='y'||ans=='Y');
    cout<<"Wins   = "<<win<<endl;
    cout<<"Losses = "<<loss<<endl;
    cout<<"Ties   = "<<tie<<endl;
        cout<<"Thanks for playing!"<<endl;
    return 0;
}

