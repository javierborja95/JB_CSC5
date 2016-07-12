/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 11, 2016, 5:00 PM
 * Purpose: Figures out the future price based on inflation rate.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output Manipulation
#include <cmath>      //Math library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float inflRat(float price1,float price2);//Figures out the inflation rate of item
float futPrce(float inflRat,float price);//Calculates future price. Inflation Rate & price
//Execution

int main(int argc, char** argv) {
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
    float futPrce;//Future price= inflation rate*current price
    futPrce=(inflRat*price)+price;
    return(futPrce);
}