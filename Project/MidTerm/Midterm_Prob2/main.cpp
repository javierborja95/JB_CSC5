/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 11, 2016, 12:46 PM
 * Purpose: Outputs  4 digit numbers with stars.
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
    char num1,num2,num3,num4;
    
    //Input Data
    cout<<"Enter a 4 character number and press enter.\n";
    cin>>num1>>num2>>num3>>num4;
    
    //Process Data
    
    //Output Data
    cout<<endl<<num4<<" ";
    num4-=49;//Because character, I need to subtract 49 so I can make calculations
    if (num4>=0&&num4<=9){
        do{
            num4-=1;
            cout<<"*";
        }while(num4>=0);
    }else if (num4==-1){//Input blank instead of '*' or '?'
        cout<<" ";
    }else cout<<"?";
    //End num4
    cout<<endl<<num3<<" ";
    num3-=49;//Because character, I need to subtract 49 so I can make calculations
    if (num3>=0&&num3<=9){
        do{
            num3-=1;
            cout<<"*";
        }while(num3>=0);
    }else if (num3==-1){//Input blank instead of '*' or '?'
        cout<<" ";
    }else cout<<"?";
    //End num3
    cout<<endl<<num2<<" ";
    num2-=49;//Because character, I need to subtract 49 so I can make calculations
    if (num2>=0&&num2<=9){
        do{
            num2-=1;
            cout<<"*";        
        }while(num2>=0);
    }else if (num2==-1){//Input blank instead of '*' or '?'
        cout<<" ";
    }else cout<<"?";
    //End num2
    cout<<endl<<num1<<" ";
    num1-=49;//Because character, I need to subtract 49 so I can make calculations
    if (num1>=0&&num1<=9){
        do{
            num1-=1;
            cout<<"*";
        }while(num1>=0);
    }else if (num1==-1){//Input blank instead of '*' or '?'
        cout<<" ";
    }else cout<<"?";
    //End num1
    return 0;
}

