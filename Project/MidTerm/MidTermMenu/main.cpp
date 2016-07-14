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
//Outputs a figure X.
//      Inputs - Argument list void
//      Internal Input
//            Number -> dimension Number
//      outputs - Return Void
//      Internal Output
//            X      -> dimension X
void prob1(){
    cout<<"You are entering Problem 1"<<endl;
    //Variables
    int num,//Number input
      temp1,//Temporary values
      temp2;
    
    //Input Data
    cout<<"Enter a number 1-50 : ";
    cin>>num;
    
    //Process Data
    temp1=num;
    temp2=1;
    
    //Output Data
    if(num%2==1){                         //Odd Check
        for(int x=1;x<=num;x++){          //x=rows
            for(int y=1;y<=num;y++){      //y=columns
                if(x==y){                 //If row=column then output number
                    cout<<temp1;
                    temp1--;              //Next iteration will be 1 less
                }
                else if(((num+1)-x)==y){  //If opposite row=column then output 1
                    cout<<temp2;          //Output 1
                    temp2++;              //Next iteration will be 1 more
                    if (temp2==num/2+1)   //Skip 1 number when it reaches midpoint
                        temp2++;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }else{                                //Else Even
        for(int x=1;x<=num;x++){          //x=rows
            for(int y=1;y<=num;y++){      //y=columns
                if(x==y){                 //If row=column then output 1
                    cout<<temp2;
                    temp2++;              //Next iteration will be 1 more
                }
                else if(((num+1)-x)==y){  //If opposite row=column then output number
                    cout<<temp1;          //Output number
                    temp1--;              //Next iteration will me 1 less
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Outputs  4 digit numbers with stars.
//      Inputs - Argument list void
//      Internal Input
//            4 digit -> dimension 4 digit number
//      outputs - Return Void
//      Internal Output
//           Stars, ? -> dimension Stars, ?
void prob2(){
    cout<<"You are entering Problem 2"<<endl;
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
    cout<<endl;
    //End num1
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