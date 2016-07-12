/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 10, 2016, 6:00 PM
 * Purpose: Computes clothing size
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float hat(float weight,short height);//Hat size, weight in pounds, height (inch)
float jacket(float weight, short height, short age);//Jacket(chest) size (inch)
float waist(float weight, short age);//Waist size in inches
//Execution

int main(int argc, char** argv) {
    //Variables
    float weight;     //Weight in pounds
    short height, age;//Height inches, Age years
    char  ans;        //Answer to "yes or no?"
    
    //Input Data
    do{
        cout<<"Please enter your weight in pounds, height in inches, and age in years."
            <<endl;
        cin>>weight>>height>>age;

        //Process Data

        //Output Data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Your hat size is         :  "<<hat(weight,height)<<endl;
        cout<<"Your jacket size (in) is : "<<jacket(weight,height,age)<<endl;
        cout<<"Your waist size (in) is  : "<<waist(weight,age)<<endl;
        cout<<"Do you wish to enter another person? 'Y' or 'N' ";
        cin>>ans;
    }while (ans=='y'||ans=='Y');

        return 0;
}
float hat(float weight,short height)//Hat size, weight in pounds, height (inch)
{
    float size;
    size=(weight/height)*2.9;
    return (size);
}
float jacket(float weight, short height, short age)//Jacket(chest) size (inch)
{
    float size;
    if (age<=29)
    size=(height*weight)/288;
    else{
        int temp;
        temp=((age-age%10)/10)-3;//Add 1/10th of inch for every 10 yrs after 30
        size=((height*weight)/288)+(0.1f*temp);
    }
    return (size);
}
float waist(float weight, short age)//Waist size in inches
{
    float size;
    if (age<=27)
    size=(weight/5.7);
    else{
        int temp;
        temp=((age%100-28)/2)+1;//Add 1/10th of inch for every two years 
        size=(weight/5.7+(0.1f*temp));
    }
    return (size);
}