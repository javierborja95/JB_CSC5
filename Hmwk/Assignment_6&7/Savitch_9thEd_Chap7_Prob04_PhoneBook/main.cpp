/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 21, 2016, 1:10 PM
 * Purpose: Looks up a name in a phonebook and returns the phone number.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>     //Strings
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
string lookupName(string,string[],string[]);
//Execution

int main(int argc, char** argv) {
    //Variables
    const int SIZE=4;
    string names[SIZE]={"Michael Myers",
                        "Ash Williams",
                        "Jack Torrence",
                        "Freddy Krueger"};
    string phoneNum[SIZE]={"333-8000","333-2323",
                           "333-6150","339-7970"};
    string targetN, targetP; //Target Name, Target Phone
    char c;
    
    //Input Data
    cout<<names[0]<<endl<<names[1]<<endl<<names[2]<<endl<<names[3]<<endl;
    do{
        cout<<"Enter a name to find the corresponding phone number."<<endl;
        getline(cin,targetN);
        targetP=lookupName(targetN,names,phoneNum);
        if(targetP.length()>0)
            cout<<"the number is : "<<targetP<<endl;
        else
            cout<<"Name not found."<<endl;
        cout<<"Look up another name? (y/n)"<<endl;
        cin>>c;
        cin.ignore();
    }while (c=='y'||c=='Y');
    
    //Process Data
    
    //Output Data

    return 0;
}

string lookupName(string targetN,string names[],string phoneNum[]){
    //Process Data
    for(int i=0;i<4;i++){
        if(targetN==names[i])return phoneNum[i];
    }
    return "";
}