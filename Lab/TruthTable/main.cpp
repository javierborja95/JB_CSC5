/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June , 2016,  PM
 * Purpose:
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library

using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    bool x, y;
    
    //Input Data

    //Process Data
                 
    //Output Data
    //heading
    cout<<"The truth Table"<<endl;
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^YX !(X||Y) !X&&!Y";
    cout<<"!(X&&Y !X||Y"<<endl;
    
    //first row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    return 0;
}

