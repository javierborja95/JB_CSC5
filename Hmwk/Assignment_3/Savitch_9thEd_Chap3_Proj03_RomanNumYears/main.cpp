/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 1:03 PM
 * Purpose: Outputs years into roman numberals
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    unsigned short x; //Number to convert
    unsigned char n1000s,n100s,n10s,n1s;
    //Input Data
    cout<<"Input a year from 1000 to 3000 to convert into a Roman Numeral.\n";
    cin>>x;
    
    //Process Data
    if(x<1000||x>3000)return 1;
    
    //Output Data
    //Thousand Position
    n1000s=(x-x%1000)/1000;
    switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
                  }
    x-=n1000s*1000;
    
    //Hundreds Position
    n100s=(x-x%100)/100;
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
                  }
    x-=n100s*100;
    
    //Tens
    n10s=(x-x%10)/10;
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
                  }
    x-=n10s*10;
    
    //Ones
    n1s=(x-x%1)/1;
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
                  }
    return 0;
}

