/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 8:00 PM
 * Purpose: A menu catalog for all the assignments for chapter 3.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

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
          "1.  Savitch_9thEd_Chap3_Prob01_RockPaperScissors_1\n"
          "2.  Savitch_9thEd_Chap3_Prob02_RevolvingCreditAccount\n"
          "3.  Savitch_9thEd_Chap3_Prob03_BirthdayHoroscopes\n"
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
    case 1:{
            //Variables
            char p1, //player 1 choice
                 p2, //player 2 choice
                 ans;//"Do you want to play again?"
            //Input Data
            cout<<"This is a game of rock-paper-scissors.\n";
            do{
            cout<<"Type in 'R' for rock, 'P' for paper, or 'S' for scissors and then "
                  "press return\n\n"
                  "Player one goes first: ";
            cin>>p1;
            cout<<"\nNow player 2: ";
            cin>>p2;

            //Process Data

            //Output Data
            switch(p1)
            {
                case'r':
                case'R':{//Player one chooses rock
                    if     (p2=='r'||p2=='R')
                            cout<<"It's a tie!";
                    else if(p2=='p'||p2=='P')
                            cout<<"Paper covers rock! Player 2 wins!";
                    else if(p2=='s'||p2=='S')
                    cout<<"Rock breaks scissors! Player 1 wins!";
                    else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
                    break;
                        }
                case'p':
                case'P':{//Player one chooses paper
                    if     (p2=='r'||p2=='R')
                            cout<<"Paper covers rock! Player 1 wins!";
                    else if(p2=='p'||p2=='P')
                            cout<<"It's a tie!";
                    else if(p2=='s'||p2=='S')
                    cout<<"Scissors cuts paper! Player 2 wins!";
                    else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
                    break;
                        }
                case's':
                case'S':{//Player one chooses scissors
                    if     (p2=='r'||p2=='R')
                            cout<<"Rock breaks scissors! Player 2 wins!";
                    else if(p2=='p'||p2=='P')
                            cout<<"Scissors cuts paper! Player 1 wins!";
                    else if(p2=='s'||p2=='S')
                    cout<<"It's a tie!";
                    else cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
                    break;
                        }
                default:
                    cout<<"Someone didn't type in 'R' for rock, 'P' for paper, or 'S' for scissors!";
            }
            cout<<"\nDo you want to play again? " 
                  "'Y' or 'N'?\n";
            cin>>ans; cout<<endl;
            }while(ans=='y'||ans=='Y');
                cout<<"Thanks for playing!"<<endl;
           }
    case 2:{
            //Variables
            const float INTR1=0.015,//1.5% on first $1,000
                        INTR2=0.01; //1.0% after $1,000
                  float balance,    //Account balance
                        intrTot,    //Total interest owed
                        total,      //total= intrTot+balance
                        minPay;     //Minimum Payment: total<=?$10 Minimum Payment is total
                                    //Else minimum payment is 10% or $10, whichever is largest
                  char  ans;        //Answer to "want to run this program again?

            //Input Data
            cout<<"This program calculates the total money owed on your credit account.\n"
                  "We charge 1.5% for the first $1,000 and 1% for anything after that.\n";
            do{
            cout<<"What is your current balance in dollars?: $";
            cin>>balance;

            //Process Data
            intrTot=(balance<1000)?(balance*INTR1):       //balance less than $1,000
                    ((1000*INTR1)+((balance-1000)*INTR2));//balance greater than $1,000
            total  =balance+intrTot;                      //Total owed
            if (total<=10)
                minPay=total;
            else 
                minPay=total*.1; //Minumum payment 10%
            if (minPay<10)
                minPay=10.00;    //Minimum payment is 10% or $10, whichever is largest
            if (minPay>total)
                minPay=total;    //Minimum payment cannot be more than total

            //Output Data
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Because your account balance is: $"<<setw(10)<<balance<<",\n"
                  "Your interest owed is:           $"<<setw(10)<<intrTot<<endl;
            cout<<"Your total owed is:              $"<<setw(10)<<total<<endl;
            cout<<"Your minimum payment due is:     $"<<setw(10)<<minPay<<endl;
            cout<<"Do you want to run this program again?\n"
                  "Type in 'Y' or 'N' :";
            cin>>ans;
            }while(ans=='y'||ans=='Y'); //Runs program again if user wants
            return 0;
           }
    case 3:{
            //Variables
            short month; //Birthday Month [1,12](Jan-Dec)
            short day;   //Day of month
            char  ans;   //Answer to "Do you want to run this program again?"

            //Input Data
            cout<<"This is an astrology program. Enter in your birthday and press enter.\n";
            do{
            cout<<"What is your birthday month number? (ex. January=1, December=12) :";
            cin>>month;
            cout<<"\nAnd the day? :";
            cin>>day;

            //Process Data

            //Output Data
            if     ((month==3)&&((day>=21)&&(day<=31))){
                cout<<"Your birthday is March "<<day<<". So your sign is Aries.\n";
                if ((month==3)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Pisces.\n";}
            else{ if((month==4)&&((day>=1)&&(day<=19)))
                cout<<"Your birthday is April "<<day<<". So your sign is Aries.";
                if ((month==4)&&(day==18||day==19))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Taurus.\n";}
            //end Aries

            if     ((month==4)&&((day>=20)&&(day<=30))){
                cout<<"Your birthday is April "<<day<<". So your sign is Taurus.\n";
                if ((month==4)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aries.\n";}
            else{ if((month==5)&&((day>=1)&&(day<=20)))
                cout<<"Your birthday is May "<<day<<". So your sign is Taurus.";
                if ((month==5)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Gemini.\n";}
            //end Taurus

            if     ((month==5)&&((day>=21)&&(day<=31))){
                cout<<"Your birthday is April "<<day<<". So your sign is Gemini.\n";
                if ((month==5)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Taurus.\n";}
            else{ if((month==6)&&((day>=1)&&(day<=21)))
                cout<<"Your birthday is June "<<day<<". So your sign is Gemini.";
                if ((month==6)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Cancer.\n";}
            //end Gemini

            if     ((month==6)&&((day>=22)&&(day<=30))){
                cout<<"Your birthday is June "<<day<<". So your sign is Cancer.\n";
                if ((month==6)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Gemini.\n";}
            else{ if((month==7)&&((day>=1)&&(day<=22)))
                cout<<"Your birthday is July "<<day<<". So your sign is Cancer.";
                if ((month==7)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Leo.\n";}
            //end Cancer

            if     ((month==7)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is July "<<day<<". So your sign is Leo.\n";
                if ((month==7)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Cancer.\n";}
            else{ if((month==8)&&((day>=1)&&(day<=22)))
                cout<<"Your birthday is August "<<day<<". So your sign is Leo.";
                if ((month==8)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Virgo.\n";}
            //end Leo

            if     ((month==8)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is August "<<day<<". So your sign is Virgo.\n";
                if ((month==8)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Leo.\n";}
            else{ if((month==9)&&((day>=1)&&(day<=22)))
                cout<<"Your birthday is September "<<day<<". So your sign is Virgo.";
                if ((month==9)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Libra.\n";}
            //end Virgo

            if     ((month==9)&&((day>=23)&&(day<=30))){
                cout<<"Your birthday is September "<<day<<". So your sign is Libra.\n";
                if ((month==9)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Virgo.\n";}
            else{ if((month==10)&&((day>=1)&&(day<=22)))
                cout<<"Your birthday is October "<<day<<". So your sign is Libra.";
                if ((month==10)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Scorpio.\n";}
            //end Libra

            if     ((month==10)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is October "<<day<<". So your sign is Scorpio.\n";
                if ((month==10)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Libra.\n";}
            else{ if((month==11)&&((day>=1)&&(day<=21)))
                cout<<"Your birthday is November "<<day<<". So your sign is Scorpio.";
                if ((month==11)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Sagittarius.\n";}
            //end Scorpio

            if     ((month==11)&&((day>=22)&&(day<=30))){
                cout<<"Your birthday is November "<<day<<". So your sign is Sagittarius.\n";
                if ((month==11)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Scorpio.\n";}
            else{ if((month==12)&&((day>=1)&&(day<=21)))
                cout<<"Your birthday is December "<<day<<". So your sign is Sagittarius.";
                if ((month==12)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Capricorn.\n";}
            //end Sagittarius

            if     ((month==12)&&((day>=22)&&(day<=31))){
                cout<<"Your birthday is December "<<day<<". So your sign is Capricorn.\n";
                if ((month==12)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Sagittarius.\n";}
            else{ if((month==1)&&((day>=1)&&(day<=19)))
                cout<<"Your birthday is January "<<day<<". So your sign is Capricorn.";
                if ((month==1)&&(day==18||day==19))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aquarius.\n";}
            //end Capricorn

            if     ((month==1)&&((day>=20)&&(day<=31))){
                cout<<"Your birthday is January "<<day<<". So your sign is Aquarius.\n";
                if ((month==1)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Capricorn.\n";}
            else{ if((month==2)&&((day>=1)&&(day<=18)))
                cout<<"Your birthday is February "<<day<<". So your sign is Aquarius.";
                if ((month==2)&&(day==17||day==18))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Pisces.\n";}
            //end Aquarius

            if     ((month==2)&&((day>=19)&&(day<=29))){
                cout<<"Your birthday is April "<<day<<". So your sign is Pisces.\n";
                if ((month==2)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aquarius.\n";}
            else{ if((month==3)&&((day>=1)&&(day<=20)))
                cout<<"Your birthday is March "<<day<<". So your sign is Pisces.";
                if ((month==3)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aries.\n";}
            //end Pisces
            if     (month>=13||day>=32)
                cout<<"That's not a real birthday.\n";

                cout<<"Do you want to run this program again? Type in 'Y' or 'N' : ";
                cin>>ans;
            }while (ans=='Y'||ans=='y');        
           }
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    default:cout<<"That is an invalid choice.\n";}
    
    cout<<endl;
    cout<<"Do you wish to see another homework assignment?\n"
          "Type in 'Y' for yes or 'N' for no: ";
    cin>>response;
    cout<<endl;
}while (response=='y'||response=='Y');
cout<<"Thanks for viewing my homework assignments!\n";
    
    return 0;
}

