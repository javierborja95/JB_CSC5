/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 21, 2016, 7:20 PM
 * Purpose: User inputs array of characters. Program deletes duplicates and
 * redisplays the array.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void delRpts(char [],char [],int&);//Delete repeats from array
void display(char[],int,bool);
//Execution

int main(int argc, char** argv) {
    //Variables
    const int SIZE=100;
    char a[SIZE];
    char b[SIZE];
    int i=0;//Number of values in array
    bool old=true;
    //Input Data
    cout<<"Input lowercase characters into the array.\n"
          "When you are done, input an integer."<<endl;
    do{
        cin>>a[i];
        i++;
    }while(i<100&&(a[i-1]>=97)&&(a[i-1]<=122));
    i--;
    //Output Data
    display(a,i,old);
    //Process Data
    old=false;
    delRpts(a,b,i);
    //Output Results
    display(b,i,old);
    
    return 0;
}

void display(char a[],int i,bool old){
    //Display Results
    if (old)cout<<"There are "<<i<<" values in the array."<<endl;
    else cout<<"After deleting duplicates, there are "
            <<i<<" values in the array."<<endl;
    for(int x=1;x<=i;x++){
        cout<<x<<"."<<a[x-1]<<"  ";
    }
    cout<<endl;
}

void delRpts(char a[],char b[],int& oldSize){
    //Declare Variables
    b[0]=a[0];
    bool match;
    int newSize=1;
    //Process Data
    for(int x=1;x<=oldSize;x++){
        match=false;
        for(int y=0;y<=newSize&&match==false;y++){
            if(a[x]==b[y]){
                match=true;
            }
        }
        if(match==false){
            b[newSize]=a[x];
            newSize++;
        }
    }
    oldSize=newSize-1;
}
