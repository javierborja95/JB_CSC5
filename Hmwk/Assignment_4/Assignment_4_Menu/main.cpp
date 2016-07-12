/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 8:00 PM
 * Purpose: A menu catalog for all the assignments for chapter 4.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
#include <cmath>      //Math Library
#include <string>     //String input

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
float LGCONV=.264179; //1 Liter = 0.264179 gallons
float GRAV=6.6673e-8; //Universal Gravitational Constant [cm^3/(g*sec^2)]

//Function Prototypes
float inflRat(float price1,float price2);//Figures out the inflation rate of item
float futPrce(float inflRat,float price);//Calculates future price. Inflation Rate & price
float intChrg(float balance, float mInt);//Current balance, Monthly int. rate
float hat(float weight,short height);//Hat size, weight in pounds, height (in)
float jacket(float weight, short height, short age);//Jacket(chest) size (in)
float waist(float weight, short age);//Waist size in (in)

//Execution

int main(int argc, char** argv) {
    //Variables
    unsigned int choice;  //First choice to see the homework assignment
    char         response;//Response to question "Do you want to see another homework assignment?"
    
    //Input Data
    cout<<"This is a menu of all my assignments for Chapter 4.\n"
          "Please select the problem you wish to view by typing the number and pressing enter.\n\n";
do{
    cout<<"The possible options are:\n"
          "1.  Savitch_9thEd_Chap4_Prob01_CarMPG\n"
            //Purpose: Figures out MPG of vehicle.
          "2.  Savitch_9thEd_Chap4_Prob02_MPGComparison\n"
            //Purpose: Figures out MPG of two vehicles and compares their MPGs.
          "3.  Savitch_9thEd_Chap4_Prob04_InflationPercent\n"
            //Purpose: Figures out the inflation rate of price as a percent.
          "4.  Savitch_9thEd_Chap4_Prob05_FuturePrice\n"
            //Purpose: Figures out the future price for 2 years based on inflation rate.
          "5.  Savitch_9thEd_Chap4_Prob06_CreditCardInterest\n"
            //Purpose: Calculates credit card interest
          "6.  Savitch_9thEd_Chap4_Prob07_GravitationalForce\n"
            //Purpose: Figures out the gravitational force between two objects.
          "7.  Savitch_9thEd_Chap4_Proj02_ClothingSize\n"
            //Purpose: Computes clothing size(Doesn't seem to give accurate measurements)
          "8.  Savitch_9thEd_Chap4_Proj03_ClothSizeAfter10Yrs\n"
            //Purpose: Computes clothing size after 10 years
          "9.  Savitch_9thEd_Chap4_Proj04_99Bottles\n"
            //Purpose: Outputs lyrics to 99 bottles of beer on the wall.
          "10. Assignment_4_menu\n";
    cin>>choice;
    
    //Process Data
    
    //Output Data
    switch(choice){ 
    case 1:{
            //Variables
            float LConsum, //Liters consumed by car
                  nMiles,  //Number of miles traveled
                  gConsum, //Gallons consumed
                  mpg;     //Miles per gallon
            char  resp;    //'Y' or 'N' response

            //Input Data
            cout<<"This program figures out the Miles per Gallon of your vehicle.\n";
            do{
                cout<<"Please enter the Liters of Gasoline consumed in your trip: ";
                cin>>LConsum;
                cout<<"Enter the number of miles traveled: ";
                cin>>nMiles;

                //Process Data
                gConsum=LConsum*LGCONV;//Convert L to Gallons
                mpg=nMiles/gConsum;    //Miles per Gallons

                //Output Data
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Because your vehicle consumed "<<gConsum<<" gallons in a trip of "
                    <<nMiles<<" miles,\n";
                cout<<"your vehicle has an efficiency of "<<mpg<<" miles per gallon\n";
                cout<<"Do you wish to enter another vehicle? 'Y' or 'N' ";
                cin>>resp;
            }while(resp=='Y'||resp=='y');
            break;
    }
    case 2:{
            //Variables
            float LCons1, //Liters consumed by car 1
                  LCons2, //Liters consumed by car 2
                  nMiles1,//Number of miles traveled by car 1
                  nMiles2,//Number of miles traveled by car 2
                  gCons1, //Gallons consumed by car 1
                  gCons2, //Gallons consumed by car 2
                  mpg1,   //Miles per gallon of car 1
                  mpg2;   //Miles per gallon of car 2
            char  resp;   //'Y' or 'N' response

            //Input Data
            cout<<"This program figures out the Miles per Gallon of two vehicles.\n";
            do{
                cout<<"Please enter the Liters of Gasoline consumed by car 1: ";
                cin>>LCons1;
                cout<<"Enter the number of miles traveled by car 1: ";
                cin>>nMiles1;
                //End Car 1
                cout<<"Please enter the Liters of Gasoline consumed by car 2: ";
                cin>>LCons2;
                cout<<"Enter the number of miles traveled by car 2: ";
                cin>>nMiles2;
                //End Car 2

                //Process Data
                gCons1=LCons1*LGCONV;   //Convert L to Gallons
                mpg1=nMiles1/gCons1;    //Miles per Gallons
                //End Car 1
                gCons2=LCons2*LGCONV;   //Convert L to Gallons
                mpg2=nMiles2/gCons2;    //Miles per Gallons
                //End Car 2

                //Output Data
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Car 1 consumed "<<gCons1<<" gallons in "<<nMiles1<<" miles.\n"
                      "Car one has an efficiency of "<<mpg1<<" miles per gallon.\n";
                //End Car 1
                cout<<"Car 2 consumed "<<gCons2<<" gallons in "<<nMiles2<<" miles.\n"
                      "Car two has an efficiency of "<<mpg2<<" miles per gallon.\n";
                //End Car 2
                if(mpg1>mpg2)
                     cout<<"Car one has the best fuel efficiency.\n";
                else if(mpg1>mpg2)
                     cout<<"Car two has the best fuel efficiency.\n";
                else cout<<"Both cars have equal fuel efficiency.\n";

                cout<<"Do you wish to run this program again? 'Y' or 'N' ? ";
                cin>>resp;
            }while(resp=='Y'||resp=='y');
            break;
    }
    case 3:{
            //Variables
            float price1, //Current price of item $
                  price2; //Last year price of item $
            char resp;    //Response to 'Y' or 'N'

            //Input Data
            cout<<"This program figures out the inflation rate of an item.\n";
            do{
                cout<<"Enter the current price of the item in $ : ";
                cin>>price1;
                cout<<"Enter last year's price of the item in $ : ";
                cin>>price2;

                //Process Data

                //Output Data
                cout<<"The inflation of the two items from last year to this year = "
                    <<setprecision(2)<<showpoint<<fixed<<(inflRat(price1,price2)*100)
                    <<"%"<<endl;
                cout<<"Do you wish to calculate again? Type 'Y' for yes: ";
                cin>>resp;
            }while(resp=='y'||resp=='Y');
            break;
    }
    case 4:{
            //Variables
            float price1, //Current price of item $
                  price2, //Last year price of item $
                  rate,   //Inflation Rate
                  prce;   //Future Price
            char resp;    //Response to 'Y' or 'N'

            //Input Data
            cout<<"This program figures out the inflation rate of an item.\n";
            do{
                cout<<"Enter the current price of the item in $ : ";
                cin>>price1;
                cout<<"Enter last year's price of the item in $ : ";
                cin>>price2;

                //Process Data
                rate=inflRat(price1,price2)*100.0f;//Get inflation rate -> to %
                //Output Data
                cout<<"The inflation of the two items from last year to this year = "
                    <<setprecision(2)<<showpoint<<fixed<<rate<<"%"<<endl;
                for(int yr=1;yr<=2;yr++){
                    prce=futPrce(rate/100,     //Use inflation rate
                            price1);           //Use current price
                    price1=prce;               //Future price is now current price
                    cout<<"After "<<yr<<" years, the price will = $"<<prce<<endl;
                }
                cout<<"Do you wish to calculate again? Type 'Y' for yes: ";
                cin>>resp;
            }while(resp=='y'||resp=='Y');
            break;
    }
    case 5:{
            //Variables
            float balance, mInt;//Current balance, Monthly Interest Rate %
            int nMonths;        //Number of months to charge interest for
            int mInit;          //Initial months
            char resp;          //Response to y or n

            //Input Data
            cout<<"This program computes interest on a credit card balance.\nThe interest"
                  " charged is added to your balance each month and interest is charged "
                  "on top of that new balance.\n";
        do{
            cout<<"Enter your current balance in $, Monthly interest rate as a percent(%) "
                  ", and the number of months to calculate.\n"
                  "Use a space to separate the values and press return:\n";
            cin>>balance>>mInt>>nMonths;

            //Process Data
            mInit=nMonths;
            do{
                balance+=intChrg(balance,mInt);
                nMonths-=1;
            }while(nMonths>0);

            //Output Data
            cout<<"After "<<mInit<<" month(s), at an interest of "<<mInt<<"%,\n"
                <<"your balance will = $"<<fixed<<setprecision(2)<<showpoint<<balance<<endl;
            cout<<"Do you wish to calculate again? Type in 'Y' for yes.\n";
            cin>>resp;
        }while(resp=='y'||resp=='Y');
            break;
    }
    case 6:{
            //Variables
            float force,   //F=(GRAV*m1*m2)/d^2
                  mass1,   //Mass of object one in grams
                  mass2,   //Mass of object two in grams
                  dist;    //Distance between two objects in cm
            char  resp;    //Response to "Yes or No?"

            //Input Data
            cout<<"This programs calculates the gravitational attractive force between"
                  " two objects and outputs the value in dynes.\n";
            do{
                cout<<"What is the mass of the first object in grams?";
                cin>>mass1;
                cout<<"What is the mass of the second object in grams?";
                cin>>mass2;
                cout<<"What is the distance between the two objects in centimeters?";
                cin>>dist;

                //Process Data
                force=(GRAV*mass1*mass2)/(dist*dist);

                //Output Data
                cout<<"The gravitational attractive force between those two objects is "
                    <<force<<" dynes (g*cm)/sec^2"<<endl;
                cout<<"Do you want to calculate another value? Answer 'Y' or 'N'";
                cin>>resp;
            }while (resp=='Y'||resp=='y');
            break;
    }
    case 7:{
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
            break;
    }
    case 8:{
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
                cout<<"Your jacket size after 10 years is : "
                    <<jacket(weight,height,age+10)<<endl;
                cout<<"Your waist size after 10 years is  : "
                    <<waist(weight,age+10)<<endl;
                cout<<"Do you wish to enter another person? 'Y' or 'N' ";
                cin>>ans;
            }while (ans=='y'||ans=='Y');
            break;
    }
    case 9:{
            //Process Data
            for(int bottles=99; bottles>=1;bottles--){
                //Calculate tens and ones
                int nTens=(bottles-bottles%10)/10;//Number of 10's
                int nOnes=(bottles-nTens*10);      //Number of 1's
                for(int times=1;times<=3;times++){
                    if(times==3){
                        int temp=bottles-1;
                        nTens=(temp-temp%10)/10;//Number of 10's
                        nOnes=temp-nTens*10;//Number of 1's
                    }
                    switch(nTens){
                        case 9:cout<<"Ninety ";break;
                        case 8:cout<<"Eighty ";break;
                        case 7:cout<<"Seventy ";break;
                        case 6:cout<<"Sixty ";break;
                        case 5:cout<<"Fifty ";break;
                        case 4:cout<<"Forty ";break;
                        case 3:cout<<"Thirty ";break;
                        case 2:cout<<"Twenty ";break;
                        case 1:{
                            switch(nOnes){
                                case 0:cout<<"Ten ";break;
                                case 1:cout<<"Eleven ";break;
                                case 2:cout<<"Twelve ";break;
                                case 3:cout<<"Thirteen ";break;
                                case 4:cout<<"Fourteen ";break;
                                case 5:cout<<"Fifteen ";break;
                                case 6:cout<<"Sixteen ";break;
                                case 7:cout<<"Seventeen ";break;
                                case 8:cout<<"Eighteen ";break;
                                case 9:cout<<"Nineteen ";break;
                            }
                        }
                    }
                    if(nTens!=1){
                        switch(nOnes){
                            case 0:if(nTens==0)cout<<"Zero ";break;
                            case 1:cout<<"One ";break;
                            case 2:cout<<"Two ";break;
                            case 3:cout<<"Three ";break;
                            case 4:cout<<"Four ";break;
                            case 5:cout<<"Five ";break;
                            case 6:cout<<"Six ";break;
                            case 7:cout<<"Seven ";break;
                            case 8:cout<<"Eight ";break;
                            case 9:cout<<"Nine ";break;   
                        }
                    }
                    if(times==1||times==3)cout<<" bottles of beer on the wall "<<endl;
                    else if(times==2){
                        cout<<" bottles of beer."<<endl;
                        cout<<" You take one down and pass it around "<<endl;
                        cout<<endl;
                    }
                }
            }
            break;
    }
    case 10:{cout<<"This is my Assignment 4 menu. Enjoy!\n";
            break;}
    default:cout<<"That is an invalid choice.\n";}
    
    cout<<endl;
    cout<<"Do you wish to see another homework assignment?\n"
          "Type in 'Y' for yes: ";
    cin>>response;
    cout<<endl;
}while (response=='y'||response=='Y');
cout<<"Thanks for viewing my homework assignments!\n";
    
    return 0;
}
float inflRat(float price1,float price2)//Figures out the inflation rate of item
{
    float inflRat; //Inflation rate= difference in price/year ago price
    inflRat=abs(price2-price1)/price2;
    return(inflRat);
}
float futPrce(float inflRat,float price)//Calculates future price. Inflation Rate & price
{
    float futPrce;//Future price= (inflation rate*current price)+current price
    futPrce=(inflRat*price)+price;
    return(futPrce);
}
float intChrg(float balance, float mInt)//Current balance, Monthly int. rate
{
    float intChrg;
    mInt/=100.0f;           //turn percent into decimal
    intChrg=balance*mInt;
    return (intChrg);    //Return the interest charged
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
        temp=((age%100-28)/2)+1;//Add 1/10th of inch for every two years after 28
        size=(weight/5.7+(0.1f*temp));
    }
    return (size);
}