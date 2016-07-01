/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 7:28 PM
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
    short active;         //Activity level
    char  gen;            //Gender.
    short weight,         //Weight in pounds.
          height,         //Height in inches.
          age,            //Age.
          nBar;           //Number of candybars needed to maintain weight.
    float bmr,            //Basal Metabolic rate. Calories need to maintain weight.
          cndyBar=230.0f; //Candy bar has 230 calories.

    //Input Data
    cout<<"Press return after answering each question.\n\n"
          "What is your activity level? Type in the number to the option that represents you.\n"
            "1. Sedentary\n"
            "2. Somewhat active (exercise occasionally)\n"
            "3. Active (exercise 3-4 days per week)\n"
            "4. Highly active (exercise everyday)\n";
    cin>>active;
    cout<<"What is your gender? M or F?\n";
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
    
    switch(active)
     {
        case 1:
            bmr=(bmr*.2)+bmr;
            break;
        case 2:
            bmr=(bmr*.3)+bmr;
            break;
        case 3:
            bmr=(bmr*.4)+bmr;
            break;
        case 4:
            bmr=(bmr*.5)+bmr;
            break;
     }    
    nBar=bmr/(cndyBar-.5);   //Round down half a bar to keep weight.
    //Output Data
    cout<<"Because you are a ";
    if(gen=='m'||gen=='M')
    {cout<<"male, ";}
    else
    {cout<<"female, ";}
    cout<<"and your activity level is ";
    switch(active)
     {
        case 1:
            cout<<"sedentary,\n";
            break;
        case 2:
            cout<<"somewhat active,\n";
            break;
        case 3:
            cout<<"active,\n";
            break;
        case 4:
            cout<<"highly active,\n";
            break;
     }

    cout<<"your Basal Metabolic rate is "<<bmr<<" calories.\n";
    cout<<"One candybar is 230 calories.\n";
    cout<<"To keep your weight, you need to eat at least "<<nBar;
    cout<<" candy bars.\n";

    //Exit Stage Right!
    return 0;
}

