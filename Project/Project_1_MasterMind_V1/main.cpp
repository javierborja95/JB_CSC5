/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 15, 2016, 4:00 PM
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
void game(int & turn, bool & win);//A single game of mastermind
bool turn(int,int,int,int);     //A single turn of mastermind
void read(ifstream&);           //Read rules
void result();                  //Result of game

//Execution

int main(int argc, char** argv) {
    //Set Random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    const int SIZE=20;
    char   fName[SIZE];     //First Name
    string lName;           //Last Name
    ifstream rules;         //Input Rules to display
    ofstream out;           //Output results to file
    char choice;            //Menu choice
    int trn=1;              //Turn
    bool win=true;          //Game result
 
    //Open files and Input Data
    out.open("stats.dat");
    rules.open("rules.dat", ios::in);
    if (out.fail())
    {cout<<"Input file 1 opening failed.\n";}
    if (rules.fail())
    {cout<<"Input file 2 opening failed.\n";}
    cout<<"Welcome to MasterMind: A logic codebreaker game.\n"
          "Enter your first and last name and press return. Omit any middle"
          " initial you might have."<<endl;
    cin>>fName>>lName;
    
    //Process Data & Menu
    do{
        cout<<"Welcome "<<fName<<" "<<lName<<endl;
        cout<<"Press 1 to play MasterMind.\n"
              "Press 2 to read the rules.\n"
              "Press anything else to exit.\n";
        cin>>choice;
        switch(choice){
            case'1':game(trn,win);break;
            case'2':read(rules);break;
        }
    }while (choice=='1'||choice=='2');
    
    //Output Data
    cout<<"Thanks for playing "<<fName<<" "<<lName<<endl;
    out<<"Thanks for playing "<<fName<<" "<<lName<<endl;
    out.close();
    rules.close();
    
    return 0;
}

void game(int &trn,bool &win){
    //Set variables
    int ai1, ai2, ai3, ai4; //Ai number choice [1,8]
    bool nxtTrn;
         nxtTrn=true;
    trn=1;
     
    //Process Data and get random combination
    ai1=(rand()%4+1);       //No duplicates
    do{                        
        ai2=(rand()%4+1);
    }while (ai2==ai1);
    do{
        ai3=(rand()%4+1);
    }while (ai3==ai1||ai3==ai2);
    do{
        ai4=(rand()%4+1);
    }while (ai4==ai1||ai4==ai2||ai4==ai3);
    cout<<ai1<<ai2<<ai3<<ai4;
    for(int maxTrn=10;(trn<=maxTrn&&nxtTrn==true);trn++){//Game ends at 10 turns
        nxtTrn=turn(ai1,ai2,ai3,ai4);
        cout<<"Turn = "<<trn;
    }
    if(nxtTrn==true)
        win=false;
    else win=true;
    
    cout<<ai1<<ai2<<ai3<<ai4;
    cout<<endl;
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
    cout<<"\n----";
    cout<<endl;
    nxtTrn=(p1==ai1&&p2==ai2&&p3==ai3&&p4==ai4)?false:true;
    //If combinations equal then next turn is false.
    return(nxtTrn);
}

void read(ifstream &read){
    string string;
    getline(read, string);
    
    while(!read.fail()){
        cout<<string;
        read>>string;
    }
    cout<<endl<<endl;
}