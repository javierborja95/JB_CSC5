/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 13, 2016, 4:00 PM
 * Purpose: Output an X
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
    
    return 0;
}