/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July , 2016,  PM
 * Purpose:
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int random(int,int);//Random number with a beginning and endpoint
void filAray(int[],int);//Ordered Random 4 digit number
void prntAry(int[],int,int);
int linSrch(int[],int,int);
int binSrch(int[],int,int);
//Execution

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    const int SIZE=100;
    int array[SIZE],value,lindex,bindex;
    
    //Input Data
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
    cout<<"What value would you like to find?"<<endl;
    cin>>value;
    
    //Process Data
    lindex=linSrch(array,SIZE,value);
    bindex=binSrch(array,SIZE,value);
    
    //Output Data
    if(lindex==-1)cout<<"Linear value not found"<<endl;
    else cout<<"Linear value found at index = "<<lindex<<endl;
    if(bindex==-1)cout<<"Binary value not found"<<endl;
    else cout<<"Binary value found at index = "<<bindex<<endl;
    return 0;
}

int binSrch(int a[],int n,int val){
    //Declare Variables
    int beg=0,end=n-1;
    //Loop until we find 
    do{
        int middle=(end+beg)/2;
        if(a[middle]==val)return middle;
        else if(a[middle]<val)beg=middle+1;
        else end=middle-1;
    }while(end>=beg);
    return -1;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int random(int beg,int end){
    return rand()%(end-beg+1)+beg;
}

void filAray(int a[],int n){
    //Declare Variables
    int step=10;
    for(int i=0,beg=1000;i<n;i++,beg+=step){
        a[i]=random(beg,beg+step);
    }
}