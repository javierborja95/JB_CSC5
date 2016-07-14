/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 12, 2016, 6:30 PM
 * Purpose: Outputs sequence
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <cmath>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float fact(int);//Factorial Function
//Execution

int main(int argc, char** argv) {
     //Declare Variables
    int       x,//x input
          nTerm;//Number of terms to solve 
    float sum=0;//Total sum
    
    //Input Data
    cout<<"Input value for x: ";
    cin>>x;
    cout<<"Input the number of terms: ";
    cin>>nTerm;
    
    //Process the Data
    for(int n=1, power=1;n<=nTerm;n++){
        if(n%2==1){//Add odd terms        +x^power/power!
            sum+=(pow(x,power))/fact(power);
            power+=2;
            cout<<"After "<<n<<" terms, sum = "<<sum<<endl;
        }else{     //Subtract even terms  -x^power/power!
            sum-=(pow(x,power))/fact(power);
            power+=2;
            cout<<"After "<<n<<" terms, sum = "<<sum<<endl;
        }
    }
    //Output the processed Data
    
    return 0;
}
float fact(int num){//Factorial Function
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return (fact);
}