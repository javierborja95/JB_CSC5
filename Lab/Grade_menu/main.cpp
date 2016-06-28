/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 28, 2016, 1:27 PM
 * Purpose: Grades menu with 4 different programming techniques
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
    char choice;
    
    //Input Data
    cout<<"Menu program.\n"
          "Choose how to determine your grade\n"
          "Type 1 for switch\n"
          "Type 2 for ternary operator\n"
          "Type 3 for independent if's\n"
          "Type 4 for dependent if's\n";
    cin>>choice;
    
    //Process Data
    switch(choice){
        case'1':{
                    //Variables
            unsigned int  score; //Input  [0,100]
            char          grade; //Output [A,B,C,D,F]

            //Input Data
            cout<<"Input your score [0,100] output will be the grade.\n";
            cin>>score;

            //Process Data
            switch(score/10)
            {
                case 10:
                case  9:grade='A';break;
                case  8:grade='B';break;
                case  7:grade='C';break;
                case  6:grade='D';break;
                default:grade='F';
            }

            //Output Data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit Case '1'
            break;
        }
        case'2':{
            //Variables
            unsigned int  score; //Input  [0,100]
            char          grade; //Output [A,B,C,D,F]

            //Input Data
            cout<<"Input your score [0,100] output will be the grade.\n";
            cin>>score;

            //Process Data
            grade=(score>=90)?'A':
                  (score>=80)?'B':
                  (score>=80)?'C':
                  (score>=80)?'D':'F';

            //Output Data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit case '2'
            break;
                }
        case'3':{
            //Variables
            unsigned int  score; //Input  [0,100]
            char          grade; //Output [A,B,C,D,F]

            //Input Data
            cout<<"Input your score [0,100] output will be the grade.\n";
            cin>>score;

            //Process Data
            grade='F'; //default grade
            if(score<=120&&score>=90)grade='A';
            if(score<90&&score>=80)  grade='B';
            if(score<80&&score>=70)  grade='C';
            if(score<70&&score>=60)  grade='D';

            //Output Data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit case '3'
            break;
        }
        case'4':{
            //Variables
            unsigned int  score; //Input  [0,100]
            char          grade; //Output [A,B,C,D,F]

            //Input Data
            cout<<"Input your score [0,100] output will be the grade.\n";
            cin>>score;

            //Process Data
            if     (score>=90)grade='A';
            else if(score>=80)grade='B';
            else if(score>=80)grade='C';
            else if(score>=80)grade='D';
            else              grade='F';

            //Output Data
            cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            //Exit Case '4'
            break;
                }
                default:
                    cout<<"Incorrect input";
                    cout<<endl;
    }               
    return 0;
}

