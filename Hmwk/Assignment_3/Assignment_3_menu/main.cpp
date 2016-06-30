/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 28, 2016, 7:05 PM
 * Purpose: A menu catalog for all the assignments for chapter 2.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>     //Manipulate Strings
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    unsigned int choice;  //First choice to see the homework assignment
    char         response;//Response to question "Do you want to see another homework assignment?"
    
    //Input Data
    cout<<"This is a menu of all my assignments for Chapter 2.\n"
          "Please select the problem you wish to view by typing the number and pressing enter.\n\n";
do{
    cout<<"The possible options are:\n"
          "1.  Savitch_9thEd_Chap3_Prob01_RockPaperScissors_1\n"
          "2.  Savitch_9thEd_Chap2_Proj1_Poison\n"
          "3.  Savitch_9thEd_Chap2_Proj2_RetroactivePay\n"
          "4.  Savitch_9thEd_Chap2_Proj3_RetroPay_v2\n"
          "5.  Savitch_9thEd_Chap2_Proj5_RoomCapacity\n"
          "6.  Savitch_9thEd_Chap2_Proj6_GrossAndTakehomePay\n"
          "7.  Savitch_9thEd_Chap2_Proj9_PosAndNegNum\n"
          "8.  Savitch_9thEd_Chap2_Proj11_SoundAndTemp\n"
          "9.  Savitch_9thEd_Chap2_Proj12_WellGallons\n"
          "10. Savitch_9thEd_Chap2_Proj13_ChocolateDiet\n";
    cin>>choice;
    
    //Process Data
    
    //Output Data
    switch(choice){ 
    case 1:{
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
           }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    default:cout<<"That is an invalid choice.\n";}
    
    cout<<endl;
    cout<<"Do you wish to see another homework assignment?\n"
          "Type in 'Y' for yes or 'N' for no: ";
    cin>>response;
    cout<<endl;
}while (response=='y'||response=='Y');
cout<<"Thanks for viewing my homework assignments!\n";
    
    return 0;
}

