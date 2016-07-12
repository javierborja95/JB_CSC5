/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 6, 2016, 1:15 PM
 * Purpose: Calculate PI.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <cmath>      //Math Library
#include <iomanip>    //Format Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    float apprxPI=0,tol;
 
    //Input Data
    cout<<"Tolerance of the approximate PI to a power of 10^-"<<endl;
    cin>>tol;
    tol=pow(10,-tol);
    cout<<"The tolerance = "<<tol<<endl;
        
    //Process Data
    float sumTerm=1;
    int nTerm=0;
    for(int denom=1;sumTerm>tol;nTerm+=2,denom+=4){
        sumTerm=1.0f/denom-1.0f/(denom+2);
        apprxPI+=sumTerm;
    }
    apprxPI*=4;
    
    //Output Data
    cout<<PI<<" is approximated by "<<apprxPI<<" with "<<nTerm<<" terms"<<endl;
    
    return 0;
}

