/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 6, 2016, 12:27 PM
 * Purpose: Outputs lyrics to 99 bottles of beer on the wall.
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
 
    //Input Data

    //Process Data
    for(int bottles=99; bottles>=0;bottles--){
        //Calculate tens and ones
        int nTens=(bottles-bottles%10)/10;//Number of 10's
        int nOnes=(bottles-nTens*10);      //Number of 1's
        for(int times=1;times<=3;times++){
            if(times==3){
                int temp=bottles-1;
                nTens
            }
        switch(nTens){
            case 9:cout<<"Ninety ";break;
            case 8:cout<<"Eighty ";break;
            case 7:cout<<"Seventy ";break;
            case 6:cout<<"Sixty ";break;
            case 5:cout<<"Fifty ";break;
            case 4:cout<<"Forty ";break;
            case 3:cout<<"Thirty ";break;
            case 2:cout<<"Twenty ";break;
            case 1:{
                switch(nOnes){
                    case 0:cout<<"Ten ";break;
                    case 1:cout<<"Eleven ";break;
                    case 2:cout<<"Twelve ";break;
                    case 3:cout<<"Thirteen ";break;
                    case 4:cout<<"Fourteen ";break;
                    case 5:cout<<"Fifteen ";break;
                    case 6:cout<<"Sixteen ";break;
                    case 7:cout<<"Seventeen ";break;
                    case 8:cout<<"Eighteen ";break;
                    case 9:cout<<"Nineteen ";break;
                             }
            }
            if(nTens!=1){
            switch(nOnes){
                    case 0:if(nTens=0)cout<<"Zero ";break;
                    case 1:cout<<"One ";break;
                    case 2:cout<<"Two ";break;
                    case 3:cout<<"Three ";break;
                    case 4:cout<<"Four ";break;
                    case 5:cout<<"Five ";break;
                    case 6:cout<<"Six ";break;
                    case 7:cout<<"Seven ";break;
                    case 8:cout<<"Eight ";break;
                    case 9:cout<<"Nine ";break;   
                }
            }
            
        }
        if(times==1)cout<<" bottles of beer on the wall "<<endl;
        else if (times==2){
            cout<<"bottles of beer"<<endl;
            cout<<"You take one down and pass it around "<<endl<<endl;
    }else{
          cout<<" bottles of beer on the wall "<<endl;  
    } 

        cout<<endl;
    }
    }        
    //Output Data

    return 0;
    }

