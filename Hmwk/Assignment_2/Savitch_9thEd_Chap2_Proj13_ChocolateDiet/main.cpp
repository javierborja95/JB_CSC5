/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 24, 2016, 6:58 PM
 * Purpose: Tells the user how many candy bars he or she should eat to keep his
 * or her weight the same.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
string ans;           //Answer male or female.
char  gen;            //Gender.
short weight,         //Weight in pounds.
      height,         //Height in inches.
      age,            //Age.
      nBar;           //Number of candybars needed to maintain weight.
float bmr,            //Basal Metabolic rate. Calories need to maintain weight.
      cndyBar=230.0f; //Candy bar has 230 calories.

    //Input Data
cout<<"Press return after answering each question.\n\n"
      "What is your gender? M or F?\n";
cin>>ans;
gen=ans[0];
cout<<"What is your weight in pounds?\n";
cin>>weight;
cout<<"What is your height in inches?\n";
cin>>height;
cout<<"What is your age? in years?\n";
cin>>age;

    //Process Data
if(gen=='m'||gen=='M')//BMR if male.
{
    bmr=66+(6.3*weight)+(12.9*height)-(6.8*age);
}
else                  //BMR if female.
{
    bmr=655+(4.3*weight)+(4.7*height)-(4.7*age);
}                  
nBar=bmr/(cndyBar-.5);   //Round down half a bar to keep weight.
        
    //Output Data
cout<<"Because you are a ";
if(gen=='m'||gen=='M')
{cout<<"male,\n";}
else
{cout<<"female,\n";}

cout<<"your Basal Metabolic rate is "<<bmr<<" calories.\n";
cout<<"One candybar is 230 calories.\n";
cout<<"To keep your weight, you need to eat at least "<<nBar;
cout<<" candy bars.\n";

    //Exit Stage Right!
    return 0;
}

