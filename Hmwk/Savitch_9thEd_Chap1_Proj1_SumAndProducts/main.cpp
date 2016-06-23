/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 4:44 PM
 * Purpose: The sum and product of two integers
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

int main(int argc, char** argv) {
    //Declare Variables
    float num1, num2,  //two numbers
          sum,         //two numbers added to each other
          product;     //two numbers multiplied by each other
    
    //Input Data
    cout<<"I need two numbers, please give me one now and press return\n";
    cin>>num1;
    
    cout<<"I need another numbers, please enter one and press return\n";
    cin>>num2;
    
    //Process Data
    sum=num1+num2;
    product=num1*num2;
    
    //Output Data
    cout<<"The sum of your two numbers is "<<sum<<endl;
    cout<<"and the product of your two numbers is "<<product<<endl;
    
    //Exit Stage Right!
    return 0;
}

