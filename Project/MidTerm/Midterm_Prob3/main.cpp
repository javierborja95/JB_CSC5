/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 12:17 PM
 * Purpose: Output check, numbers in english.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    string date,  //Date 01/01/15
             fN,  //Person paying first name
             lN,  //Person paying last name
             fH,  //Account holder first name
             lH;  //Account holder last name
    float  amnt;  //Check amount
    int       x;  //Check amount w/o decimals
    int  n1000,n100,n10,n1,nOne,nTenth; //Number position
    
    //Input Data
    cout<<"Input today's date in (01/01/16) format:\n";
    cin>>date;
    cout<<"Input your first and last name, omit your middle initial if you have one:\n";
    cin>>fN>>lN;
    cout<<"Input the amount in $: ";
    cin>>amnt;
    cout<<"Input the account holder's first and last name, omit the middle initial:\n";
    cin>>fH>>lH;
    
    //Process Data
    x=amnt*100;                //Get rid of decimal
    n1000=(x-x%100000)/100000; //Thousands
    x-=n1000*100000;
    n100=(x-x%10000)/10000;    //Hundreds
    x-=n100*10000;
    n10=(x-x%1000)/1000;       //Tens
    x-=n10*1000;
    n1=(x-x%100)/100;          //Ones
    x-=n1*100;
    nTenth=(x-x%10)/10;        //Tenths
    x-=nTenth*10;
    nOne=(x-x%1)/1;            //Decimal Ones
    
    
    //Output Data
    cout<<endl<<fH<<" "<<lH<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP"<<setw(30)<<"Date: "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of: "<<fN<<" "<<lN<<setw(12)<<"$ "<<fixed
            <<setprecision(2)<<showpoint<<amnt<<endl;
    cout<<endl;
    
    //Figure out english version of numbers
    switch(n1000){
        case 9:cout<<"Nine Thousand " ;break;
        case 8:cout<<"Eight Thousand ";break;
        case 7:cout<<"Seven Thousand ";break;
        case 6:cout<<"Six Thousand "  ;break;
        case 5:cout<<"Five Thousand " ;break;
        case 4:cout<<"Four Thousand " ;break;
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand "  ;break;
        case 1:cout<<"One Thousand "  ;break;
    }
    //End thousand Position
    switch(n100){
        case 9:cout<<"Nine Hundred " ;break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred "  ;break;
        case 5:cout<<"Five Hundred " ;break;
        case 4:cout<<"Four Hundred " ;break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred "  ;break;
        case 1:cout<<"One Hundred "  ;break;
    }    
    //End hundred Position
    switch(n10){
        case 9:cout<<"Ninety " ;break;
        case 8:cout<<"Eighty " ;break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty "  ;break;
        case 5:cout<<"Fifty "  ;break;
        case 4:cout<<"Forty "  ;break;
        case 3:cout<<"Thirty " ;break;
        case 2:cout<<"Twenty " ;break;
        case 1:{
            switch(n1){
                case 0:cout<<"Ten "      ;break;
                case 1:cout<<"Eleven "   ;break;
                case 2:cout<<"Twelve "   ;break;
                case 3:cout<<"Thirteen " ;break;
                case 4:cout<<"Fourteen " ;break;
                case 5:cout<<"Fifteen "  ;break;
                case 6:cout<<"Sixteen "  ;break;
                case 7:cout<<"Seventeen ";break;
                case 8:cout<<"Eighteen " ;break;
                case 9:cout<<"Nineteen " ;break;
            }
        }
    }    
    //End tens Position
    if(n10!=1){
        switch(n1){
            case 0:if((n10==0)&&(n100==0)&&(n1000==0))cout<<"Zero " ;break;
            case 1:cout<<"One "  ;break;
            case 2:cout<<"Two "  ;break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four " ;break;
            case 5:cout<<"Five " ;break;
            case 6:cout<<"Six "  ;break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine " ;break;
        }
    }
    //End ones Position
    cout<<"and ";
    switch(nTenth){
        case 9:cout<<"Ninety" ;break;
        case 8:cout<<"Eighty" ;break;
        case 7:cout<<"Seventy";break;
        case 6:cout<<"Sixty"  ;break;
        case 5:cout<<"Fifty"  ;break;
        case 4:cout<<"Forty"  ;break;
        case 3:cout<<"Thirty" ;break;
        case 2:cout<<"Twenty" ;break;
        case 1:{
            switch(nOne){
                case 0:cout<<"Ten"      ;break;
                case 1:cout<<"Eleven"   ;break;
                case 2:cout<<"Twelve"   ;break;
                case 3:cout<<"Thirteen" ;break;
                case 4:cout<<"Fourteen" ;break;
                case 5:cout<<"Fifteen"  ;break;
                case 6:cout<<"Sixteen"  ;break;
                case 7:cout<<"Seventeen";break;
                case 8:cout<<"Eighteen" ;break;
                case 9:cout<<"Nineteen" ;break;
            }
        }
    }   
    //End tenths Position
    if(nTenth!=1){
        switch(nOne){
            case 0:if((nTenth==0)&&(nTenth==0)&&(nTenth==0))cout<<"no" ;break;
            case 1:cout<<"One "  ;break;
            case 2:cout<<"Two "  ;break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four " ;break;
            case 5:cout<<"Five " ;break;
            case 6:cout<<"Six "  ;break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine " ;break;
        }
    }
    cout<<"/100s Dollars"<<endl;
    cout<<endl<<"BANK OF CSC5"<<endl;
    cout<<endl<<"FOR: GOTTA PAY THE RENT"<<setw(20)<<fH<<" "<<lH<<endl;
    return 0;
}

