/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 18, 2016, 12:50 PM
 * Purpose: Generate a Standard Normal - Z
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <ctime>      //Time Library
#include <cstdlib>    //Random Number
#include <cmath>      //Math Library

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=pow(2,31)-1; //Max unsigned int value
const unsigned int  MXRND=(1<<31)-1;   //Same max unsigned int

//Function Prototypes
float normal();
float fillAry(float [],int);
void maxmin(float [],int,float &, float &);
float mean(float [],int);
float stdDev(float [],int);

//Execution

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    const int SIZE=500000;
    float x[SIZE];
    float min,max,avg,std;
    
    //Input Data
    fillAry(x,SIZE);

    //Process Data
    maxmin(x,SIZE,min,max);
    avg=mean(x,SIZE);
    std=stdDev(x,SIZE);
                   
    //Output Data
    cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
    cout<<"Integer Maximum Random Number = "<<MXRND<<endl;
    cout<<"The Minimum Random Normal Number = "<<min<<endl;
    cout<<"The Maximum Random Normal Number = "<<max<<endl;
    cout<<"The Average Random Normal Value  = "<<avg<<endl;
    cout<<"The Std Dev Random Normal Value  = "<<std<<endl;
    
    return 0;
}

float stdDev(float x[],int n){
    float sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

float mean(float x[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void maxmin(float x[],int n,float &min,float &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(min>x[i])min=x[i];
    }
}

float fillAry(float x[],int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

float normal(){
    //Declare and Initialize
    float sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRND;//[0,1]
    }
    //Scale a number [0,12]-6 = [-6,6]
    return (sum-6);
}
