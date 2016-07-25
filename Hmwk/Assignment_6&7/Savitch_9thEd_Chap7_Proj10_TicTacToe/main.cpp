/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 24, 2016, 12:20 PM
 * Purpose: Plays tic-tac-toe.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE=3;
//Function Prototypes
void display(char[][SIZE]);
void xTurn(char[][SIZE]);
void oTurn(char[][SIZE]);
void winChck(char[][SIZE],bool&,bool&);
//Execution

int main(int argc, char** argv) {
    //Variables
    char tic[SIZE][SIZE]={'1','2','3',
                          '4','5','6',
                          '7','8','9'};
    bool p1Win=false;
    bool p2Win=false;
    //Input Data
    display(tic);
    for(int i=0;i<5&&p1Win==false&&p2Win==false;i++){
        xTurn(tic);
        winChck(tic,p1Win,p2Win);
        if(i<4&&p1Win==false)oTurn(tic);
        display(tic);
        winChck(tic,p1Win,p2Win);
    }
    //Process Data
    
    //Output Data
    if(p1Win)cout<<"Player 1 wins."<<endl;
    else if(p2Win)cout<<"Player 2 wins."<<endl;
    else cout<<"It's a tie."<<endl;
    return 0;
}

void display(char a[][SIZE]){
    //Display Data
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void xTurn(char a[][SIZE]){
    //Declare variables
    int choice;
    //Input Data
    cout<<"Player 1 choose a number on the board: ";
    cin>>choice;
    switch(choice){
        case 1:a[0][0]='X';break;
        case 2:a[0][1]='X';break;
        case 3:a[0][2]='X';break;
        case 4:a[1][0]='X';break;
        case 5:a[1][1]='X';break;
        case 6:a[1][2]='X';break;
        case 7:a[2][0]='X';break;
        case 8:a[2][1]='X';break;
        case 9:a[2][2]='X';break;
    }
}

void oTurn(char a[][SIZE]){
    //Declare variables
    int choice;
    //Input Data
    cout<<"Player 2 choose a number on the board: ";
    cin>>choice;
    switch(choice){
        case 1:a[0][0]='O';break;
        case 2:a[0][1]='O';break;
        case 3:a[0][2]='O';break;
        case 4:a[1][0]='O';break;
        case 5:a[1][1]='O';break;
        case 6:a[1][2]='O';break;
        case 7:a[2][0]='O';break;
        case 8:a[2][1]='O';break;
        case 9:a[2][2]='O';break;
    }
}

void winChck(char a[][SIZE],bool& p1,bool& p2){
    if((a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||
       (a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||
       (a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[2][0]=='X'&&a[1][1]=='X'&&a[0][2]=='X')||
       (a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'))
        p1=true;
    if((a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||
       (a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')||
       (a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')||(a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O')||
       (a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'))
        p2=true;
}