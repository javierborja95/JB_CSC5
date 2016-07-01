/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 8:18 PM
 * Purpose: Program to find out the address of Riddler's next attack.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    int n1=0, n2=0, n3=0, n4=0,//4 digits of an address
        product,//The digit in the thousands place is 3 times the digit in the tens place
        even,   //Number must be odd
        sum;    //The sum of the digits is 27
                //All four digits must be different
    
    
    //Input Data

    //Process Data
    do{
        n1+=1; if (n1>=10){n1-=10;n2+=1;}//Add one, if n1=10, n1-10 and add one to the next digit
               if (n2>=10){n2-=10;n3+=1;}//repeat previous       
               if (n3>=10){n3-=10;n4+=1;}//repeat previous 
               if (n4>=10){n4-=10;n1+=1;}//repeat previous 
    product=n1*3;//Check to see if the thousands place is 3 times the digit in the tens
    even=(n4%2); //Check to see if number is even. Must be odd
    sum=n1+n2+n3+n4; //Check to see if sum is 27
    cout<<n1<<n2<<n3<<n4<<endl;
      }while ((n1==n2||n1==n3||n1==n4||//If digits are the same
               n2==n1||n2==n3||n2==n4||
               n3==n2||n3==n1||n3==n4||
               n4==n2||n4==n3||n4==n1)
            ||(n3!=product)
            ||(even=0)
            ||(sum!=27));
    //Output Data
    cout<<"\nHoly digits Batman!\n" 
          "The Riddler is planning to attack ";
    cout<<n1<<n2<<n3<<n4;
    cout<<" Pennsylvannia Avenue!"<<endl;
            
    return 0;
}

