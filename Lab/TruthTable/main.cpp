/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 12:00 PM
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
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y";
    cout<<"!(X&&Y) !X||!Y"<<endl;
    
    //first row
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F');
    cout<<endl;
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F');
    cout<<endl;
    
    //third row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F');
    cout<<endl;
    
    //fourth row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F');
    cout<<endl;
       
    return 0;
}

