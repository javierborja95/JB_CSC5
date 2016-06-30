/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 4:55 PM
 * Purpose: This program plays rock paper scissors between two players and
 * determines the winner.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Libraryr
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    char p1, //player 1 choice
         p2, //player 2 choice
         ans;//"Do you want to play again?"
    //Input Data
    cout<<"This is a game of rock-paper-scissors.\n";
    do{
    cout<<"Type in 'R' for rock, 'P' for paper, or 'S' for scissors and then "
          "press return\n\n"
          "Player one goes first: ";
    cin>>p1;
    cout<<"\nNow player 2: ";
    cin>>p2;
    
    //Process Data

    //Output Data
    switch(p1)
    {
        case'r':
        case'R':{//Player one chooses rock
            if     (p2=='r'||p2=='R')
                    cout<<"It's a tie!";
            else if(p2=='p'||p2=='P')
                    cout<<"Paper covers rock! Player 2 wins!";
            else if(p2=='s'||p2=='S')
            cout<<"Rock breaks scissors! Player 1 wins!";
            else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        case'p':
        case'P':{//Player one chooses paper
            if     (p2=='r'||p2=='R')
                    cout<<"Paper covers rock! Player 1 wins!";
            else if(p2=='p'||p2=='P')
                    cout<<"It's a tie!";
            else if(p2=='s'||p2=='S')
            cout<<"Scissors cuts paper! Player 2 wins!";
            else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        case's':
        case'S':{//Player one chooses scissors
            if     (p2=='r'||p2=='R')
                    cout<<"Rock breaks scissors! Player 2 wins!";
            else if(p2=='p'||p2=='P')
                    cout<<"Scissors cuts paper! Player 1 wins!";
            else if(p2=='s'||p2=='S')
            cout<<"It's a tie!";
            else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            break;
                }
        default:
            cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
    }
    cout<<"\nDo you want to play again? " 
          "'Y' or 'N'?\n";
    cin>>ans; cout<<endl;
    }while(ans=='y'||ans=='Y');
        cout<<"Thanks for playing!"<<endl;
    return 0;
}

