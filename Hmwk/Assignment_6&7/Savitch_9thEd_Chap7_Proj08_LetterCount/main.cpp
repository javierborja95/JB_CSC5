/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 22, 2016, 1:20 PM
 * Purpose: Counts the number of occurrences of letters in a sentence.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void count(char[],int);
int sntence(char[],int);
void sort(char[],int);
void swap(char[],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=100;
    char array[SIZE];
    int n; //Number of characters in sentence
    
    //Input Data
    cout<<"Type in a sentence, with all lowercase letters.\n"
          "When you are done finish the sentence with a period."<<endl;
    n=sntence(array,SIZE);
    
    //Process Data
    sort(array,n);
    
    //Output the processed Data
    count(array,n);
    
    //Exit Stage Right!
    return 0;
}

int sntence(char a[],int n){
    //Declare Variables
    int i=0;
    n=0;
    //Input Data
    do{
        cin>>a[i];
        i++;
        n++;
    }while(a[i-1]>=97&&a[i-1]<=122);
    return n-1;
}
void count(char a[],int size){
    cout<<"Char Count"<<endl;
    //Declare Variables
    char c;
    int count;
    c=a[0];
    //Process Data
    for(int i=1;i<=size;i++){
        count=1;
        if (a[i]==c){
            do{
                count++;
                i++;
            }while(a[i]==c);
        }
        cout<<setw(3)<<c<<setw(5)<<count<<endl;
        c=a[i];
    }
}

void sort(char a[],int n){
    for(int i=0;i<n-1;i++){
        for(int x=i+1;x<n;x++){
            if(a[i]<a[x]){
                swap(a,i,x);
            }
        }
    }
    cout<<endl;
}

void swap(char a[],int x,int y){
    a[x]=a[x]^a[y];
    a[y]=a[x]^a[y];
    a[x]=a[x]^a[y];
}