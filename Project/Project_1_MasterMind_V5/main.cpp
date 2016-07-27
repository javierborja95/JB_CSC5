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
const int CODE=4; //Size of code
//Function Prototypes
bool gameEz(int &turn);          //Normal Mode of MasterMind
bool gameHrd(int &turn);         //Hard Mode of MasterMind
bool turn(int[][CODE]);          //A single turn of mastermind
void result(int turn,bool win);  //Result of game
void read();                     //Read rules
void menu();                     //Menu

//Execution

int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    const int SIZE=20;
    char   fName[SIZE];     //First Name
    string lName;           //Last Name
    char choice;            //Menu choice
    int trn;                //Turn
    bool win;               //Game result. True results in win
    unsigned int wins=0;
    unsigned int loss=0;
    ofstream out;           //Output results to file
    
    //Input Data
    
    cout<<"Welcome to MasterMind: A logic codebreaker game.\n"
          "Enter your first and last name and press return. Omit any middle"
          " initial you might have."<<endl;
    cin>>fName>>lName;
    
    //Process Data & Menu
    cout<<"Welcome "<<fName<<" "<<lName<<endl<<endl;
    do{
        menu();
        cin>>choice;
        cout<<endl;
        switch(choice){
            case'1':win=gameEz(trn);
            if(win==true)
                wins++;
            else
                loss+=1;
            break;
            case'2':win=gameHrd(trn);
            if(win==true)
                wins++;
            else
                loss+=1;
            break;
            case'3':read();break;
        }
    }while (choice=='1'||choice=='2'||choice=='3');
    
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

bool gameEz(int &trn){
    //Set variables
    const int SIZE=2;     //Two codes, Ai choice and player choice
    int code[SIZE][CODE]; //2x4 Array
    bool win;
    bool nxtTrn;
         nxtTrn=true;     //Decides to go to next turn
    trn=1;
     
    //Process Data and get random combination
    code[0][0]=(rand()%8+1);
    do{                        
        code[0][1]=(rand()%8+1);
    }while (code[0][1]==code[0][0]);                         //No duplicates
    do{
        code[0][2]=(rand()%8+1);
    }while (code[0][2]==code[0][1]||code[0][2]==code[0][0]); //No duplicates
    do{
        code[0][3]=(rand()%8+1);
    }while (code[0][3]==code[0][2]||code[0][3]==code[0][1]|| //No duplicates
            code[0][3]==code[0][0]);
    for(int maxTrn=8;(trn<=maxTrn&&nxtTrn==true);trn++){//Game ends at 10 turns
        cout<<"Turn = "<<trn<<endl;
        nxtTrn=turn(code);
    }
    trn--;          //Offset the extra turn from end of loop
    if(nxtTrn==true)
        win=false;  //Lose if the game still wants to go to another turn
    else win=true;  //Win if game doesn't need to go to another turn
    
    //Output Result
    result(trn,win);
    
    return(win);
}

bool gameHrd(int &trn){
    //Set variables
    const int SIZE=2;     //Two codes, Ai choice and player choice
    int code[SIZE][CODE]; //2x4 Array
    bool win;
    bool nxtTrn;
         nxtTrn=true;     //Decides to go to next turn
    trn=1;
     
    //Process Data and get random combination
    code[0][0]=(rand()%8+1);            
        code[0][1]=(rand()%8+1);
        code[0][2]=(rand()%8+1);
        code[0][3]=(rand()%8+1);
    for(int maxTrn=12;(trn<=maxTrn&&nxtTrn==true);trn++){//Game ends at 10 turns
        cout<<"Turn = "<<trn<<endl;
        nxtTrn=turn(code);
    }
    trn--;          //Offset the extra turn from end of loop
    if(nxtTrn==true)
        win=false;  //Lose if the game still wants to go to another turn
    else win=true;  //Win if game doesn't need to go to another turn
    
    //Output Result
    result(trn,win);
    
    return(win);
}

bool turn(int a[][CODE]){
    for(int i=0;i<CODE;i++){
        cout<<"a[0]["<<i<<"] = "<<a[0][i]<<endl;
    }
    bool nxtTrn;
         nxtTrn=true;
    stringstream ss1,ss2,ss3,ss4;
    char   p1, p2, p3, p4;//Strip 4 character combination to 4 separate ints
    cout<<"Enter a 4 digit combination using numbers 1-8, no duplicates"<<endl;
    cin>>p1>>p2>>p3>>p4;  //Input player, 4 character combination
    ss1<<p1; ss1>>a[1][0];
    ss2<<p2; ss2>>a[1][1];
    ss3<<p3; ss3>>a[1][2];
    ss4<<p4; ss4>>a[1][3];
    if(a[0][0]==a[1][0]) //If number and position match
        cout<<"X";
    if(a[0][1]==a[1][1]) //If number and position match
        cout<<"X";
    if(a[0][2]==a[1][2]) //If number and position match
        cout<<"X";
    if(a[0][3]==a[1][3]) //If number and position match
        cout<<"X";
    if(a[1][0]==a[0][1]||a[1][0]==a[0][2]||a[1][0]==a[0][3]) //If numbers match
        cout<<"O";
    if(a[1][1]==a[0][0]||a[1][1]==a[0][2]||a[1][1]==a[0][3]) //If numbers match
        cout<<"O";
    if(a[1][2]==a[0][1]||a[1][2]==a[0][0]||a[1][2]==a[0][3]) //If numbers match
        cout<<"O";
    if(a[1][3]==a[0][1]||a[1][3]==a[0][2]||a[1][3]==a[0][0]) //If numbers match
        cout<<"O";
    cout<<endl<<"************************************************************";
    cout<<endl;
    nxtTrn=(a[0][0]==a[1][0]&&a[0][1]==a[1][1]&&
            a[0][2]==a[1][2]&&a[0][3]==a[1][3])?false:true;
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
    cout<<"Press 1 to play Normal Mode MasterMind.\n"
          "Press 2 to play Hard Mode MasterMind.\n"
          "Press 3 to read the rules.\n"
          "Press 4 to see the leaderboard.\n"
          "Press anything else to exit."<<endl;
}