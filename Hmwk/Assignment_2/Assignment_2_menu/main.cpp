/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 28, 2016, 7:05 PM
 * Purpose: A menu catalog for all the assignments for chapter 2.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <string>     //Manipulate Strings
#include <iomanip>    //Output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
float const PI=3.141593; //Pi rounded to seven significant figures.
//Function Prototypes

//Execution

int main(int argc, char** argv) {
    //Variables
    unsigned int choice;  //First choice to see the homework assignment
    char         response;//Response to question "Do you want to see another homework assignment?"
    
    //Input Data
    cout<<"This is a menu of all my assignments for Chapter 2.\n"
          "Please select the problem you wish to view by typing the number and pressing enter.\n\n";
do{
    cout<<"The possible options are:\n"
          "1.  Savitch_9thEd_Chap2_Prob4_MadLib\n"
          "2.  Savitch_9thEd_Chap2_Proj1_Poison\n"
          "3.  Savitch_9thEd_Chap2_Proj2_RetroactivePay\n"
          "4.  Savitch_9thEd_Chap2_Proj3_RetroPay_v2\n"
          "5.  Savitch_9thEd_Chap2_Proj5_RoomCapacity\n"
          "6.  Savitch_9thEd_Chap2_Proj6_GrossAndTakehomePay\n"
          "7.  Savitch_9thEd_Chap2_Proj9_PosAndNegNum\n"
          "8.  Savitch_9thEd_Chap2_Proj11_SoundAndTemp\n"
          "9.  Savitch_9thEd_Chap2_Proj12_WellGallons\n"
          "10. Savitch_9thEd_Chap2_Proj13_ChocolateDiet\n";
    cin>>choice;
    
    //Process Data
    
    //Output Data
    switch(choice){ 
    case 1:{//Savitch_9thEd_Chap2_Prob4_MadLib
            //Declare Variables
            string instNam,//First or Last name of the instructor
                   studNam,//Student's name
                   food,   //Food
                   adj,    //Adjective
                   color,  //Color   
                   animal; //Animal
            short  num;    //Numerical value (100,120)    

            //Input Data
            cout<<"Welcome to this game of Mad Lib. I'm going to ask for a few words.\n"
                  "Press return when you enter them.\n"
                  "Enter the first or last name of your instructor: ";
            cin>>instNam;
            cout<<"Enter your first name: ";
            cin>>studNam;
            cout<<"Enter a food: ";
            cin>>food;
            cout<<"Enter a number between 100 and 120: ";
            cin>>num;
            cout<<"Enter an adjective: ";
            cin>>adj; 
            cout<<"Enter a color: ";
            cin>>color;  
            cout<<"Enter an animal: ";
            cin>>animal;
            cout<<endl;

            //Output Data
            cout<<"Dear Instructor "<<instNam<<",\n\n"
                    "I am very sorry that I am unable to turn in my homework at this "
                    "time.\nFirst, I ate a rotten "<<food<<" which made me turn "
                    <<color<<" and extremely ill.\nI came down with a fever of "
                    <<num<<".Next, my "<<adj<<" pet "<<animal<<" must have smelled\nthe"
                    " remains of the "<<food<<" on my homework,\nbecause he ate it. I am"
                    " currently rewriting my homework\nand hope you will accept it late."
                    "\n\nSincerly,\n"<<studNam<<endl;
            break;
            }
    case 2:{//Savitch_9thEd_Chap2_Proj1_Poison
            //Declare Variables
            float mseMass=35,  //35g is the mass of the mouse
                  mseKill=5,   //5 grams of sweetener to kill a mouse
                  hmMass=45400,//grams of a 100lb person
                  sdMass=350,  //350g of soda content in a can  
                  conc=1e-3;   //1/10th of 1% concentration of sweetener in soda  
            int   Ncans;       //number of cans to kill dieter   

            //Input Data

            //Process Data
            Ncans=hmMass*mseKill/(mseMass*sdMass*conc);    

            //Output Data
            cout<<"The number of cans a dieter with mass ";
            cout<<hmMass<<"(grams) may consume is "<<Ncans<<" cans.\n";
            break;
            }
    case 3:{//Savitch_9thEd_Chap2_Proj2_RetroactivePay
            //Declare Variables
            const float PAYINCR=.076f;  //Pay increase. 7.6%
                           //All in dollars
            float sal,     //Worker's salary for the past year
                  monSal,  //Worker's previous monthly salary 
                  rtroPay, //Worker's retroactive pay for the last 6 months
                  newSal,  //Worker's new annual salary
                  nMonSal; //Worker's new monthly salary  
            char  ans;     //User response to: "want to calculate another salary?" 

            //Input Data
            cout<<"Press return when you are done.\n";
            do
            {
            cout<<"Enter your salary for the previous year in dollars: $";
            cin>>sal;

            //Process Data
            monSal   =sal/12;   
            rtroPay  =(monSal*PAYINCR)*6;
            nMonSal  =monSal+(monSal*PAYINCR);
            newSal   =nMonSal*12;

            //Output Data
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout<<"The Salary for your previous year was: $"<<sal<<endl
                <<"For the last six months, we owe you: $"<<rtroPay<<endl
                <<"Your new monthly salary is: $"<<nMonSal<<endl
                <<"Your new yearly salary is: $"<<newSal<<endl<<endl;

            cout<<"Do you want to enter another salary?\n" //Does the user want to run the program again?
                  "Type in y or n.\n";  
            cin>>ans; 
            } while((ans=='y')||(ans=='Y'));
            break;
            }
    case 4:{//Savitch_9thEd_Chap2_Proj3_RetroPay_v2
            //Declare Variables
            const float PAYINCR=.076f;  //Pay increase. 7.6%
                           //All in dollars
            float sal,     //Worker's salary for the past year
                  monSal,  //Worker's previous monthly salary 
                  rtroPay, //Worker's retroactive pay for n number of months
                  newSal,  //Worker's new annual salary
                  nMonSal; //Worker's new monthly salary  
            char  ans;     //User response to: "want to calculate another salary?" 
            unsigned int nMonth; //Number of months to calculate rtroPay
            //Input Data
            cout<<"Press return when you are done.\n";
            do
            {
            cout<<"Enter your salary for the previous year in dollars: $";
            cin>>sal;
            cout<<"Enter the number of months for your retroactive pay: ";
            cin>>nMonth;

            //Process Data
            monSal   =sal/12;   
            rtroPay  =(monSal*PAYINCR)*nMonth;
            nMonSal  =monSal+(monSal*PAYINCR);
            newSal   =nMonSal*12;

            //Output Data
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout<<"The Salary for your previous year was: $"<<sal<<endl
                <<"For the last "<<nMonth<<" months, we owe you: $"<<rtroPay<<endl
                <<"Your new monthly salary is: $"<<nMonSal<<endl
                <<"Your new yearly salary is: $"<<newSal<<endl<<endl;

            cout<<"Do you want to enter another salary?\n" //Does the user want to run the program again?
                  "Type in y or n.\n";  
            cin>>ans; 
            } while((ans=='y')||(ans=='Y'));
            break;
            }
    case 5:{//Savitch_9thEd_Chap2_Proj5_RoomCapacity
            //Declare Variables
            int maxCap,  //Maximum room capacity
                att,     //Expected attendence
                extra,   //Extra number of people allowed
                exclude; //Number of people to be excluded if attendance greater than maxCap
            char ans;    //Y or N answer

            //Input Data
            cout<<"This will determine if your meeting is in violation of fire law regulations.\n"
                  "Press return after answering each question.\n\n";
            do
            {
            cout<<"What is the Maximum room capacity of this room?\n";
            cin>>maxCap; //Maximum room capacity
            cout<<"How many people will be attending this meeting?\n";
            cin>>att;    //Expected attendance

            //Output Data
            if(att<=maxCap) //If attendance is less or equal than the max capacity 
            {
            extra=maxCap-att; //Extra number of people allowed
            cout<<"Your meeting is in code.\n"
                  "You may allow "<<extra<<" extra people for this meeting.\n";        
            }
            else
            {
            exclude=att-maxCap; //Number of people to be excluded
            cout<<"WARNING!\n"
                  "You are in violation of fire law regulations.\n"
                  "In order to be up to code, you must exclude "<<exclude<<" people from your meeting.\n";
            }

            cout<<"Do you want to run this program again?\n"
                  "Type in Y or N: ";
            cin>>ans;
            }
            while(ans=='y'||ans=='Y');
            break;
           }
    case 6:{//Savitch_9thEd_Chap2_Proj6_GrossAndTakehomePay
            //Declare Variables
            float const  TAX=.25;        //Social Security tax.  6%
                                         //Federal Income tax.  14%
            //Total Tax 25%              //State Income tax.     5%

            float        payRate;        //Dollars per hours.
            unsigned int hrsWrkd,        //Hours worked.
                         nDep,           //Number of dependents. If greater than 3, withhold $35 for health insurance.
                         unD=10;         //Union dues. $10 per week.
            float        grssPay,        //Gross Pay without deductions.
                         thPay;          //Take home pay after deductions.

                //Input Data
            cout<<"After each question press return.\n\n"
                  "What is your payrate per hour?\n$";
            cin>>payRate;
            cout<<"How many hours did you work this week?\n";
            cin>>hrsWrkd;
            cout<<"How many dependents do you have?\n";
            cin>>nDep;

            //Process Data
            if(hrsWrkd<=40)              //If hours worked is less than or equal to 40
            {
            grssPay=payRate*hrsWrkd; 
            }
            else                         //If worked overtime
            {
            grssPay=(payRate*40)+((hrsWrkd-40)*(payRate*1.5)); 
            }

            if(nDep<=3)                  //If number of dependents if less than or equal to 3, do not deduct 35$ for H. Ins.
            {
            thPay=grssPay-((grssPay*TAX)+unD); //Take home pay after tax and union dues
            }
            else                         //If number of dep. is greater than 3. Deduct 35$ for H. Ins.
            {
            thPay=grssPay-((grssPay*TAX)+unD+35.0); //Take home pay after tax, union dues, and $35 deduction.
            }

            //Output Data
            cout<<"You worked "<<hrsWrkd<<" hours this week.";
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            cout<<"So your gross pay is $"<<grssPay<<endl;
            cout<<"We have deducted 6% for your Social Security tax, 14% for your Federal Income tax and 5% for your state income tax.\n"
                  "We have also deducted the weekly $10 union dues, and if you had greater than 3 dependents,then we deducted\n"
                  "an extra $35 dollars to cover the extra cost of health insurance beyond what the company pays.\n\n"
                  "Your final take home pay is $"<<thPay<<endl;
            break;
           }
    case 7:{//Savitch_9thEd_Chap2_Proj9_PosAndNegNum
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
            break;
           }
    case 8:{//Savitch_9thEd_Chap2_Proj11_SoundAndTemp
            //Declare Variables
            int   tIni,           //Initial temperature of dry air in C
                  tFin;           //Final Temperature of dry air in C
            float velocty;        //Velocity of sound in m/s. velocity=331.3+(.61*T)

            //Input Data
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(1);
            cout<<"This program figures out the velocity of sound at 2 specific temperatures, and displays all the velocities\n";
            cout<<"in between the two temperatures.\n\n";
            cout<<"What is the initial temperature in Celcius?: ";

            cin>>tIni;
            cout<<"What is the final temperature in Celcius?: ";
            cin>>tFin;

            //Process Data
            if (tIni<=tFin)
            {do
            {
            velocty=331.3f+(.61f*tIni);

            //Output Data

            cout<<"At "<<tIni<<"° C, the velocity of sound is "<<velocty<<" m/s\n";
            tIni=tIni+1;
            }while(tIni<=tFin);
            }
            else{
            do
            {
            velocty=331.3f+(.61f*tIni);

            //Output Data

            cout<<"At "<<tIni<<"° C, the velocity of sound is "<<velocty<<" m/s\n";
            tIni=tIni-1;
            }while(tIni>=tFin);}
            break;
           }
    case 9:{//Savitch_9thEd_Chap2_Proj12_WellGallons
            //Declare Variables
            float radius,            //Radius of well in inches
                  depth,             //Depth of well in feet
                  volume,            //Volume of well in cubic feet
                  water;             //How much water in gallons  

            //Input Data
            cout<<"Press return after you enter in your values.\n\n"
                  "What is the radius of the well in inches?\n";
            cin>>radius;
            cout<<"What is the depth of the well in feet?\n";
            cin>>depth;

            //Process Data
            radius=radius/12;                        //Turn inches in terms of feet
            volume=(PI*(radius*radius)*depth);       //Calculate volume (v=pi*(r^2)*h)
            water=volume*7.48;                       //1 cubic feet~~7.48 gallons
            //Output Data
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(1);
            cout<<"The well has a volume of "<<volume<<" cubic feet,\n"
                  "and it holds approximately "<<water<<" gallons of water\n";
            break;
            }
    case 10:{//Savitch_9thEd_Chap2_Proj13_ChocolateDiet
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
            cout<<"What is your age in years?\n";
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
            cout<<"One candy bar is 230 calories.\n";
            cout<<"To keep your weight, you need to eat at least "<<nBar;
            cout<<" candy bars.\n";
            break;
            }
    default:cout<<"That is an invalid choice.\n";}
    
    cout<<endl;
    cout<<"Do you wish to see another homework assignment?\n"
          "Type in Y for yes or N for no: ";
    cin>>response;
    cout<<endl;
}while (response=='y'||response=='Y');
cout<<"Thanks for viewing my homework assignments!\n";
    
    return 0;
}

