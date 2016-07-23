/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 22, 2016, 2:45 PM
 * Purpose:
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void insSort(int[],int); //Insertion Sort
void display(int[],int);
void swap(int a[],int x,int y);
void filAray(int a[],int n);

//Execution
int main(int argc, char** argv) {
    //Set Random Seed
    srand(time(0));
    //Variables
    const int SIZE=25;
    int a[SIZE];
    //Input Data
    filAray(a,SIZE);

    //Process Data
    cout<<"Before sorting, values in the array are:"<<endl;
    display(a,SIZE);
    insSort(a,SIZE);
    //Output Data
    cout<<"After Insertion Sorting, values in the array are:"<<endl;
    display(a,SIZE);

    return 0;
}

void insSort(int a[],int n){
    //Declare Variables
    int x,y;
    //Process Data
    for(int i=1;i<n;i++){
        x=i;
        while(a[x]<a[(x-1)]&&(x>0)){
            swap(a,x,(x-1));
            x--;
        }
    }
}

void display(int a[],int n){
    //Output Data
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i]<<", ";
        if((i+1)%50==0)cout<<endl;
    }
    cout<<endl;
}

void swap(int a[],int x,int y){
    a[x]=a[x]^a[y];
    a[y]=a[x]^a[y];
    a[x]=a[x]^a[y];
}

void filAray(int a[],int n){
    //Process Data
    for(int i=0;i<n;i++){
        a[i]=rand()%20+1;//[-10,20]
    }
}