/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 11, 2016, 10:30 AM
 * Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants - Pi, Gravity, Conversion

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution

int main(int argc, char** argv) {
    //Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;

        //Process Data
        switch(choice){
            case'1':prob1();break;
            case'2':prob2();break;
            case'3':prob3();break;
            case'4':prob4();break;
            case'5':prob5();break;
            case'6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        } 
    }while(choice>='1'&&choice<='6');
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 1
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob1(){
    cout<<"You are entering Problem 1"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob2(){
    cout<<"You are entering Problem 2"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob3(){
    cout<<"You are entering Problem 3"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob4(){
    cout<<"You are entering Problem 4"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob5(){
    cout<<"You are entering Problem 5"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 6
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void prob6(){
    cout<<"You are entering Problem 6"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                  Menu
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//      Inputs - None
//      outputs - The Menu
void menu(){
    cout<<"Menu program for Midterm.\n"
          "Choose the number for the problem to display\n"
          "Type 1 for Problem 1\n"
          "Type 2 for Problem 2\n"
          "Type 3 for Problem 3\n"
          "Type 4 for Problem 4\n"
          "Type 5 for Problem 5\n"
          "Type 6 for Problem 6\n";
          
}