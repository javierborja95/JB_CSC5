/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 6, 2016, 1:40 PM
 * Purpose: Random Approximation or Stochastic Calculus
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <cmath>      //Math Library
#include <ctime>      //Time Library
#include <cstdlib>    //Random Number Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Variables
    float approxPI;
    int   nDarts,nCirc=0;
    float maxRnd=pow(2,31)-1;
    
    //Input Data
    cout<<"How many darts to throw to approximate PI"<<endl;
    cin>>nDarts;
    
    //Process Data
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRnd;//[1,0]
        float y=rand()/maxRnd;//[0,1]
        if(x*x+y*y<=1)nCirc++;
    }               
    approxPI=4.0f*nCirc/nDarts;
    
    //Output Data
    cout<<PI<<" approximated by "<<nDarts<<" darts = "<<approxPI<<endl;
    
    return 0;
}

