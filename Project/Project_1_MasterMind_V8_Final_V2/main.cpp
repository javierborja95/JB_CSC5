/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 27, 2016, 3:40 PM
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
#include <vector>     //Vectors

using namespace std;  //Namespace of the System Libraries

//User Libraries
#include "Score.h"

//Global Constants
const int SIZE=4; //Size of code

//Function Prototypes
bool game(int &turn,bool&,bool);    //A single game of MasterMind
bool turn(int[][SIZE],bool&,bool);  //A single turn of mastermind
void help(int[][SIZE]);             //Hint
void read();                        //Read rules
void menu();                        //Menu
void sort(int[],int);               //Sort hint
void sort(vector<Score>&,int);      //Sort leaderboard
void swap(int[],int,int);           //Swap
void lderBrd();                     //Leaderboard
void result(int,bool,bool,bool,int[][SIZE]); //Result of game
 
//Execution
int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    Score user;           //Player
    user.wins=0;          //Wins
    user.loss=0;          //Losses
    char choice;          //Menu choice
    int trn;              //Turn
    bool win;             //Game result. True results in win
    bool hint;            //Hint
    bool ez;              //Difficulty easy or hard
    ofstream out;         //Output results to file
    
    //Input Data
    cout<<"Welcome to MasterMind: A logic codebreaker game.\n"
          "Enter your first and last name and press return. Omit any middle"
          " initial you might have."<<endl;
    cin>>user.first>>user.last;
    
    //Process Data & Menu
    cout<<"Welcome "<<user.first<<" "<<user.last<<endl<<endl;
    do{
        menu();
        cin>>choice;
        cout<<endl;
        switch(choice){
            case'1':
                ez=true;
                win=game(trn,hint,ez);
            if(hint==true&&win==true)
                break;
            if(hint==true&&win==false){
                user.loss++;
                break;
            }
            if(win==true)
                user.wins++;
            else
                user.loss++;
            break;
            case'2':
                ez=false;
                win=game(trn,hint,ez);
            if(hint==true&&win==true)
                break;
            if(hint==true&&win==false){
                user.loss++;
                break;
            }
            if(win==true)
                user.wins+=2;
            else
                user.loss++;
            break;
            case'3':read();break;
            case'4':lderBrd();
        }
    }while (choice=='1'||choice=='2'||choice=='3'||choice=='4');
    
    //Output Data and output to file
    cout<<"Thanks for playing "<<user.first<<" "<<user.last<<endl;
    cout<<"Wins this session   = "<<user.wins<<endl;
    cout<<"Losses this session = "<<user.loss<<endl;
    out.open("stats.dat",ios::app); //Append to file
    if (out.fail())
        cout<<"Input file 1 opening failed.\n";
    out<<'\r'<<user.wins<<' '<<user.loss<<' '
             <<user.first<<' '<<user.last;
    out.close();
    return 0;
}

bool game(int &trn,bool &hint,bool ez){
    //Set variables
    const int ROW=2;     //Two codes, Ai choice and player choice
    int code[ROW][SIZE]; //2x4 Array
    bool win;
    bool nxtTrn;
         nxtTrn=true;    //Decides to go to next turn
     
    //Process Data and get random combination
    trn=1;
    hint=false;
    if(ez==true){
        //Normal Mode
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
        for(int maxTrn=8;(trn<=maxTrn&&nxtTrn==true);trn++){//Max turns 8
            cout<<"Turn = "<<trn<<endl;
            nxtTrn=turn(code,hint,ez);
        }
    }
    else{
        //Hard Mode
        code[0][0]=(rand()%8+1); //Duplicates allowed
        code[0][1]=(rand()%8+1);
        code[0][2]=(rand()%8+1);
        code[0][3]=(rand()%8+1);
        for(int maxTrn=12;(trn<=maxTrn&&nxtTrn==true);trn++){//Max turns 12
            cout<<"Turn = "<<trn<<endl;
            nxtTrn=turn(code,hint,ez);
        }
    }
    trn--;          //Offset the extra turn from end of loop
    if(nxtTrn==true)
        win=false;  //Lose if the game still wants to go to another turn
    else win=true;  //Win if game doesn't need to go to another turn
    
    //Output Result
    result(trn,win,hint,ez,code);
    
    return(win);
}

bool turn(int a[][SIZE],bool& hint,bool ez){
    //Declare Variables
    int orig1,orig2,orig3,orig4,orig5,orig6,orig7,orig8;
    bool nxtTrn;
         nxtTrn=true;
    stringstream ss1,ss2,ss3,ss4;
    char   p1, p2, p3, p4;//Strip 4 character combination to 4 separate ints
    //Input Data
    if(ez==true)
    cout<<"Enter a 4 digit combination using numbers 1-8, no duplicates"<<endl;
    else
    cout<<"Enter a 4 digit combination using numbers 1-8, duplicates allowed\n";
    cout<<"To call a hint input 4 zeros (0,0,0,0)"<<endl;
    cin>>p1>>p2>>p3>>p4;   //Input player, 4 character combination
    //Process Data
    ss1<<p1; ss1>>a[1][0]; //Convert char to ints
    ss2<<p2; ss2>>a[1][1];
    ss3<<p3; ss3>>a[1][2];
    ss4<<p4; ss4>>a[1][3];
    orig1=a[1][0]; orig5=a[0][0]; //Copy original Values
    orig2=a[1][1]; orig6=a[0][1];
    orig3=a[1][2]; orig7=a[0][2];
    orig4=a[1][3]; orig8=a[0][3];
    //Output Data
    if(a[0][0]==a[1][0]){ //If number and position match
        cout<<"X";
        a[1][0]=-1;       //Change value to prevent duplication bugs when
        a[0][0]=-1;       //    comparing with other digits
    }                     //Prevents outputs like 'XXXOOO'
    if(a[0][1]==a[1][1]){ //If number and position match
        cout<<"X";
        a[1][1]=-2;
        a[0][1]=-2;
    }
    if(a[0][2]==a[1][2]){ //If number and position match
        cout<<"X";
        a[1][2]=-3;
        a[0][2]=-3;
    }
    if(a[0][3]==a[1][3]){ //If number and position match
        cout<<"X";
        a[1][3]=-4;
        a[0][3]=-4;
    }
    if(a[1][0]==a[0][1]||a[1][0]==a[0][2]||a[1][0]==a[0][3]){ //If numbers match
        cout<<"O";
        a[1][0]=-1;
    }
    if(a[1][1]==a[0][0]||a[1][1]==a[0][2]||a[1][1]==a[0][3]){ //If numbers match
        cout<<"O";
        a[1][1]=-2;
    }
    if(a[1][2]==a[0][0]||a[1][2]==a[0][1]||a[1][2]==a[0][3]){ //If numbers match
        cout<<"O";
        a[1][2]=-3;
    }
    if(a[1][3]==a[0][0]||a[1][3]==a[0][1]||a[1][3]==a[0][2]){ //If numbers match
        cout<<"O";
        a[1][3]=-4;
    }
    if(a[1][0]==0&&a[1][1]==0&&a[1][2]==0&&a[1][3]==0){
        hint=true;
        help(a);
    }
    a[1][0]=orig1; //Set back to original values
    a[1][1]=orig2;
    a[1][2]=orig3;
    a[1][3]=orig4;
    a[0][0]=orig5;
    a[0][1]=orig6;
    a[0][2]=orig7;
    a[0][3]=orig8;
    nxtTrn=(a[0][0]==a[1][0]&&a[0][1]==a[1][1]&&
    a[0][2]==a[1][2]&&a[0][3]==a[1][3])?false:true;
    //If combinations equal then no need for next turn.
    if(ez==true) //Different output based on mode, just for program to look pretty
    cout<<endl<<"************************************************************";
    else
    cout<<endl<<"*****************************************************************";
    cout<<endl;
    return(nxtTrn);
}

void help(int a[][SIZE]){
    //Declare Variables
    int b[SIZE]; //Original array, sorted
    //Input data
    for(int i=0;i<SIZE;i++){
        b[i]=a[0][i];
    }
    //Process Data
    sort(b,SIZE);
    //Output Data
    cout<<"Your hint:"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<b[i];
    }
    cout<<endl;
}

void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int x=i+1;x<n;x++){
            if(a[i]>a[x]){
                swap(a,i,x);
            }
        }
    }
}

void swap(int a[],int x,int y){
    a[x]=a[x]^a[y];
    a[y]=a[x]^a[y];
    a[x]=a[x]^a[y];
}

void sort(vector<Score>& a,int n){
    //Declare Variables
    bool goAgn;
    //Process Data
    do{
        goAgn=false;
        for(int i=0;i<n-1;i++){
            if(a[i].wins<a[i+1].wins){
                swap(a[i],a[i+1]);
                goAgn=true;
            }
        }
    }while(goAgn==true);
}

void result(int turn, bool win,bool hint,bool ez,int a[][SIZE]){//Result of game
    //Output Data
    if(win==0){
        cout<<"You lose!\n"
              "Better luck next time.\n"
              "The code was actually:"<<endl;
        cout<<a[0][0]<<a[0][1]<<a[0][2]<<a[0][3]<<endl<<endl;
        return;
    }
    if (hint==true){
        cout<<"You used a hint, win doesn't count."<<endl<<endl;
        return;
    }
    else if(ez==true){
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
    }
    else{
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
                    <<"You won in 6 turns. Very good performance!"
                    <<endl;break;
            case 7:
                cout<<"Congratulations!\n"
                    <<"You won in 7 turns. Good performance!"
                    <<endl;break;
            case 8:
                cout<<"Congratulations!\n"
                    <<"You won in 8 turns. Good performance!"
                    <<endl;break;
            case 9:
                cout<<"Congratulations!\n"
                    <<"You won in 9 turns. Decent performance."
                    <<endl;break;
            case 10:
                cout<<"Congratulations!\n"
                    <<"You won in 10 turns. Good job."
                    <<endl;break;
            case 11:
                cout<<"Congratulations!\n"
                    <<"You won in 11 turns. Good job."
                    <<endl;break;
            default:
                cout<<"That was close! You barely won."
                    <<endl;break;
        }
        cout<<"Because this is hard mode, this win counts as two wins!"<<endl;
    }
    cout<<endl;
}

void read(){ //Input Rules to display
    //Declare Variables
    ifstream line;
    string string;
    //Process and Output Data
    line.open("rules.dat");
    if(line.fail()){
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
          "Press 3 to learn how to play.\n"
          "Press 4 to see the leaderboard.\n"
          "Press anything else to exit."<<endl;
}

void lderBrd(){
    //Declare Variables
    int MAX=100;
    vector<Score> player(MAX);
    ifstream line;
    int count=0;
    //Process and Output Data
    line.open("stats.dat");
    if(line.fail()){
        cout<<"Input file opening failed.\n";
        return;
    }
    cout<<"Sorted by amount of wins per session."<<endl;
    do{
        line>>player[count].wins;
        line>>player[count].loss;
        line>>player[count].first;
        line>>player[count].last;
        count++;
    }while(!line.eof());
    sort(player,count);
    for(int i=0;i<count;i++){
        cout<<endl;
        cout<<player[i].first<<" "<<player[i].last<<",\ngot "<<player[i].wins
            <<" wins and "<<player[i].loss<<" losses."<<endl;
    }
    cout<<endl;
    cout<<"Can you beat "<<player[0].first<<" "<<player[0].last<<"?"<<endl<<endl;
}