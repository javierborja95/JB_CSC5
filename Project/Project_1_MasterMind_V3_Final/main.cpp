/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 16, 2016, 11:15 AM
 * Purpose: Player guesses a 4 digit combination against the computer.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output Manipulation
#include <ctime>      //Computer Time for seed
#include <cstdlib>    //Library for random number seed
#include <string>     //String library
#include <sstream>    //String Stream Library
#include <fstream>    //File I/O

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
bool game(int &turn);             //A single game of mastermind
bool turn(int,int,int,int);       //A single turn of mastermind
void result(int turn,bool win);   //Result of game
void read();                      //Read rules
void menu();                      //Menu

//Execution

int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    const int SIZE=20;
    char   fName[SIZE];     //First Name
    string lName;           //Last Name
    int wins=0;
    int loss=0;
    
    ofstream out;           //Output results to file
    char choice;            //Menu choice
    int trn;                //Turn
    bool win;               //Game result. Win results in true
    
    //Input Data
    
    cout<<"Welcome to MasterMind: A logic codebreaker game.\n"
          "Enter your first and last name and press return. Omit any middle"
          " initial you might have."<<endl;
    cin>>fName>>lName;
    
    //Process Data & Menu
    cout<<"Welcome "<<fName<<" "<<lName<<endl;
    do{
        menu();
        cin>>choice;
        cout<<endl;
        switch(choice){
            case'1':win=game(trn);
            if(win==true)
                wins++;
            else
                loss++;
            break;
            case'2':read();break;
        }
    }while (choice=='1'||choice=='2');
    
    //Output Data and output to file
    cout<<"Thanks for playing "<<fName<<" "<<lName<<endl;
    cout<<"Wins this session   = "<<wins<<endl;
    cout<<"Losses this session = "<<loss<<endl;
    out.open("stats.dat");
    if (out.fail()){
        cout<<"Input file 1 opening failed.\n";
    }
    out<<"Last session stats for "<<fName<<" "<<lName<<endl;
    out<<"Wins   = "<<wins<<endl;
    out<<"Losses = "<<loss<<endl;
    out.close();
    
    return 0;
}

bool game(int &trn){
    //Set variables
    int ai1, ai2, ai3, ai4; //Ai number choice [1,8]
    bool win;
    bool nxtTrn;
         nxtTrn=true;
    trn=1;
     
    //Process Data and get random combination
    ai1=(rand()%8+1);
    do{                        
        ai2=(rand()%8+1);
    }while (ai2==ai1);                    //No duplicates
    do{
        ai3=(rand()%8+1);
    }while (ai3==ai1||ai3==ai2);          //No duplicates
    do{
        ai4=(rand()%8+1);
    }while (ai4==ai1||ai4==ai2||ai4==ai3);//No duplicates
    //cout<<ai1<<ai2<<ai3<<ai4<<endl;
    for(int maxTrn=10;(trn<=maxTrn&&nxtTrn==true);trn++){//Game ends at 10 turns
        cout<<"Turn = "<<trn<<endl;
        nxtTrn=turn(ai1,ai2,ai3,ai4);
    }
    trn--;          //Offset the extra turn from end of loop
    if(nxtTrn==true)
        win=false;  //Lose if the game still wants to go to another turn
    else win=true;  //Win if game doesn't need to go to another turn
    
    //Output Result
    result(trn,win);
    
    return(win);
}

bool turn(int ai1,int ai2,int ai3,int ai4){
    bool nxtTrn;
         nxtTrn=true;
    stringstream ssp1,ssp2,ssp3,ssp4;
    char   sp1, sp2, sp3, sp4;//Strip 4 character combination to 4 separate ints
    int     p1,  p2,  p3,  p4;//Player choice combination
    cout<<"Enter a 4 digit combination using numbers 1-8, no duplicates"<<endl;
    cin>>sp1>>sp2>>sp3>>sp4;
    ssp1<<sp1; ssp1>>p1;
    ssp2<<sp2; ssp2>>p2;
    ssp3<<sp3; ssp3>>p3;
    ssp4<<sp4; ssp4>>p4;
    if(p1==ai1)
        cout<<"X";
    if(p2==ai2)
        cout<<"X";
    if(p3==ai3)
        cout<<"X";
    if(p4==ai4)
        cout<<"X";
    if(p1==ai2||p1==ai3||p1==ai4)
        cout<<"O";
    if(p2==ai1||p2==ai3||p2==ai4)
        cout<<"O";
    if(p3==ai1||p3==ai2||p3==ai4)
        cout<<"O";
    if(p4==ai1||p4==ai2||p4==ai3)
        cout<<"O";
    cout<<endl<<"************************************************************";
    cout<<endl;
    nxtTrn=(p1==ai1&&p2==ai2&&p3==ai3&&p4==ai4)?false:true;
    //If combinations equal then no need for next turn.
    return(nxtTrn);
}

void result(int turn, bool win){//Result of game
    if(win==0){
        cout<<"You lose!\n"
              "Better luck next time"<<endl;
    }
    else
        switch(turn){
            case 1:
            case 2:
            case 3:
                cout<<"Wow, very lucky. You win!"<<endl;break;
            case 4:
                cout<<"Congratulations!\n"
                      "You're very smart, you won in 4 turns!"
                    <<endl;break;
            case 5:
                cout<<"Congratulations!\n"
                    <<"You won in 5 turns. Very good performance!"
                    <<endl;break;
            case 6:
                cout<<"Congratulations!\n"
                    <<"You won in 6 turns. Good performance!"
                    <<endl;break;
            case 7:
                cout<<"Congratulations!\n"
                    <<"You won in 7 turns. Decent performance."
                    <<endl;break;
            case 8:
                cout<<"Good job!\n"
                    <<"You won in 8 turns. Decent performance."
                    <<endl;break;
            case 9:
                cout<<"Good job!\n"
                    <<"You won in 9 turns."
                    <<endl;break;
            default:
                cout<<"That was close! You barely won."
                    <<endl;break;
        }
    cout<<endl;
}

void read(){
    ifstream line;         //Input Rules to display
    string string;
    line.open("rules.txt");
    if (line.fail()){
        cout<<"Input file opening failed.\n";
    }
    cout<<endl;
    while(getline(line,string)){
        cout<<string<<endl;
    }
    line.close();
    cout<<endl<<endl;
}

void menu(){
    cout<<"Press 1 to play MasterMind.\n"
          "Press 2 to read the rules.\n"
          "Press anything else to exit."<<endl;
}