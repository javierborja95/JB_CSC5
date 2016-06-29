/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 27, 2016, 12:46 PM
 * Purpose: User inputs 10 numbers, negative or positive. The program adds all 
 * the negative numbers, all the positives, all the evens, all the odds, and 
 * then all the numbers together.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>

using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    int x,   //number to input in ten times
        sumAll=0,
        sumEven=0,
        sumOdd=0,
        sumPos=0,
        sumNeg=0;    
        
 
    //Input Data
    cout<<"Type in an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement

    cout<<"Type in an integer"<<endl;
    cin>>x;

        //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
    else      sumOdd +=x;//Block of code with previous if statement
    sumPos +=x>0?x:0;    //Ternary operator
    sumNeg +=x<0?x:0;    //Independent if statement


        //Output Data
    cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
    cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
    cout<<"Sum Odd      = "<<setw(5)<<sumOdd<<endl;
    cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
    cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;



    return 0;
}

