/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 22, 2016, 1:20 PM
 * Purpose: Orders array greatest to least and counts the repeat occurrences.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int [],int);
void sort(int [],int);
void swap(int[],int,int);
void display(int[],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(time(0));
    
    //Declare Variables
    const int SIZE=300;
    int array[SIZE];
    
    //Input Data
    filAray(array,SIZE);
    
    //Process the Data
    sort(array,SIZE);
    
    //Output the processed Data
    display(array,SIZE);
    
    //Exit Stage Right!
    return 0;
}

void filAray(int a[],int n){
    //Process Data
    for(int i=0;i<n;i++){
        a[i]=rand()%31-10;//[-10,20]
    }
    //Output Data
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i]<<", ";
        if((i+1)%50==0)cout<<endl;
    }
    cout<<endl;
}

void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int x=i+1;x<n;x++){
            if(a[i]<a[x]){
                swap(a,i,x);
            }
        }
    }
    cout<<endl;
}

void swap(int a[],int x,int y){
    a[x]=a[x]^a[y];
    a[y]=a[x]^a[y];
    a[x]=a[x]^a[y];
}

void display(int a[],int size){
    cout<<" N   Count"<<endl;
    //Declare Variables
    int num,count;
    num=a[0];
    //Process Data
    for(int i=1;i<=size;i++){
        count=1;
        if (a[i]==num){
            do{
                count++;
                i++;
            }while(a[i]==num);
        }
        cout<<setw(3)<<num<<setw(5)<<count<<endl;
        num=a[i];
    }
}