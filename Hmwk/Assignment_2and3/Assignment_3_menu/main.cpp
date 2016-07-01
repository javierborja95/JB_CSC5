/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 8:00 PM
 * Purpose: A menu catalog for all the assignments for chapter 3.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
#include <string>     //String input

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
          "1.  Savitch_9thEd_Chap3_Prob01_RockPaperScissors\n"
          "2.  Savitch_9thEd_Chap3_Prob02_RevolvingCreditAccount\n"
          "3.  Savitch_9thEd_Chap3_Prob03_BirthdayHoroscopes\n"
          "4.  Savitch_9thEd_Chap3_Prob04_HoroscopesAndElements\n"
          "5.  Savitch_9thEd_Chap3_Proj03_RomanNumYears\n"
          "6.  Savitch_9thEd_Chap3_Proj04_BlackJackHandValue\n"
          "7.  Savitch_9thEd_Chap3_Proj06_FibonacciCrud\n"
          "8.  Savitch_9thEd_Chap3_Proj10_ChocolateBmrMod\n"
          "9.  Savitch_9thEd_Chap3_Proj13_RiddlerAddress\n"
          "10. Assignment_3_menu\n";
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
            break;
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
            break;
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
            break;
           }
    case 4:{
            //Variables
            short month; //Birthday Month [1,12](Jan-Dec)
            short day;   //Day of month
            char  ans;   //Answer to "Do you want to run this program again?"

            //Input Data
            cout<<"This is an astrology program. Enter in your birthday and press enter.\n";
            do{
            cout<<"\nWhat is your birthday month number? (ex. January=1, December=12) :";
            cin>>month;
            cout<<"\nAnd the day? :";
            cin>>day;

            //Process Data

            //Output Data
            if     ((month==3)&&((day>=21)&&(day<=31))){
                cout<<"Your birthday is March "<<day<<". So your sign is Aries.\n";
                cout<<"Your element is Fire, you are most compatible with Leo and Sagittarius.\n";}
                if ((month==3)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Pisces.\n";
            else if((month==4)&&((day>=1)&&(day<=19))){
                cout<<"Your birthday is April "<<day<<". So your sign is Aries.";
                cout<<"Your element is Fire, you are most compatible with Leo and Sagittarius.\n";}
                if ((month==4)&&(day==18||day==19))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Taurus.\n";
            //end Aries

            if     ((month==4)&&((day>=20)&&(day<=30))){
                cout<<"Your birthday is April "<<day<<". So your sign is Taurus.\n";
                cout<<"Your element is Earth, you are most compatible with Virgo and Capricorn.\n";}
                if ((month==4)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aries.\n";
            else if((month==5)&&((day>=1)&&(day<=20))){
                cout<<"Your birthday is May "<<day<<". So your sign is Taurus.";
                cout<<"Your element is Earth, you are most compatible with Virgo and Capricorn.\n";}
                if ((month==5)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Gemini.\n";
            //end Taurus

            if     ((month==5)&&((day>=21)&&(day<=31))){
                cout<<"Your birthday is April "<<day<<". So your sign is Gemini.\n";
                cout<<"Your element is Air, you are most compatible with Libra and Aquarius.\n";}
                if ((month==5)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Taurus.\n";
            else if((month==6)&&((day>=1)&&(day<=21))){
                cout<<"Your birthday is June "<<day<<". So your sign is Gemini.";
                cout<<"Your element is Air, you are most compatible with Libra and Aquarius.\n";}
                if ((month==6)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Cancer.\n";
            //end Gemini

            if     ((month==6)&&((day>=22)&&(day<=30))){
                cout<<"Your birthday is June "<<day<<". So your sign is Cancer.\n";
                cout<<"Your element is Water, you are most compatible with Scorpio and Pisces.\n";}
                if ((month==6)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Gemini.\n";
            else if((month==7)&&((day>=1)&&(day<=22))){
                cout<<"Your birthday is July "<<day<<". So your sign is Cancer.";
                cout<<"Your element is Water, you are most compatible with Scorpio and Pisces.\n";}
                if ((month==7)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Leo.\n";
            //end Cancer

            if     ((month==7)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is July "<<day<<". So your sign is Leo.\n";
                cout<<"Your element is Fire, you are most compatible with Aries and Sagittarius.\n";}
                if ((month==7)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Cancer.\n";
            else if((month==8)&&((day>=1)&&(day<=22))){
                cout<<"Your birthday is August "<<day<<". So your sign is Leo.";
                cout<<"Your element is Fire, you are most compatible with Aries and Sagittarius.\n";}
                if ((month==8)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Virgo.\n";
            //end Leo

            if     ((month==8)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is August "<<day<<". So your sign is Virgo.\n";
                cout<<"Your element is Earth, you are most compatible with Taurus and Capricorn.\n";}
                if ((month==8)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Leo.\n";
            else if((month==9)&&((day>=1)&&(day<=22))){
                cout<<"Your birthday is September "<<day<<". So your sign is Virgo.";
                cout<<"Your element is Earth, you are most compatible with Taurus and Capricorn.\n";}
                if ((month==9)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Libra.\n";
            //end Virgo

            if     ((month==9)&&((day>=23)&&(day<=30))){
                cout<<"Your birthday is September "<<day<<". So your sign is Libra.\n";
                cout<<"Your element is Air, you are most compatible with Gemini and Aquarius.\n";}
                if ((month==9)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Virgo.\n";
            else if((month==10)&&((day>=1)&&(day<=22))){
                cout<<"Your birthday is October "<<day<<". So your sign is Libra.";
                cout<<"Your element is Air, you are most compatible with Gemini and Aquarius.\n";}
                if ((month==10)&&(day==21||day==22))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Scorpio.\n";
            //end Libra

            if     ((month==10)&&((day>=23)&&(day<=31))){
                cout<<"Your birthday is October "<<day<<". So your sign is Scorpio.\n";
                cout<<"Your element is Water, you are most compatible with Cancer and Pisces.\n";}
                if ((month==10)&&(day==23||day==24))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Libra.\n";
            else if((month==11)&&((day>=1)&&(day<=21))){
                cout<<"Your birthday is November "<<day<<". So your sign is Scorpio.";
                cout<<"Your element is Water, you are most compatible with Cancer and Pisces.\n";}
                if ((month==11)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Sagittarius.\n";
            //end Scorpio

            if     ((month==11)&&((day>=22)&&(day<=30))){
                cout<<"Your birthday is November "<<day<<". So your sign is Sagittarius.\n";
                cout<<"Your element is Fire, you are most compatible with Aries and Leo.\n";}
                if ((month==11)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Scorpio.\n";
            else if((month==12)&&((day>=1)&&(day<=21))){
                cout<<"Your birthday is December "<<day<<". So your sign is Sagittarius.";
                cout<<"Your element is Fire, you are most compatible with Aries and Leo.\n";}
                if ((month==12)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Capricorn.\n";
            //end Sagittarius

            if     ((month==12)&&((day>=22)&&(day<=31))){
                cout<<"Your birthday is December "<<day<<". So your sign is Capricorn.\n";
                cout<<"Your element is Earth, you are most compatible with Taurus and Virgo.\n";}
                if ((month==12)&&(day==22||day==23))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Sagittarius.\n";
            else if((month==1)&&((day>=1)&&(day<=19))){
                cout<<"Your birthday is January "<<day<<". So your sign is Capricorn.";
                cout<<"Your element is Earth, you are most compatible with Taurus and Virgo.\n";}
                if ((month==1)&&(day==18||day==19))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aquarius.\n";
            //end Capricorn

            if     ((month==1)&&((day>=20)&&(day<=31))){
                cout<<"Your birthday is January "<<day<<". So your sign is Aquarius.\n";
                cout<<"Your element is Air, you are most compatible with Gemini and Libra.\n";}
                if ((month==1)&&(day==20||day==21))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Capricorn.\n";
            else if((month==2)&&((day>=1)&&(day<=18))){
                cout<<"Your birthday is February "<<day<<". So your sign is Aquarius.";
                cout<<"Your element is Air, you are most compatible with Gemini and Libra.\n";}
                if ((month==2)&&(day==17||day==18))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Pisces.\n";
            //end Aquarius

            if     ((month==2)&&((day>=19)&&(day<=29))){
                cout<<"Your birthday is April "<<day<<". So your sign is Pisces.\n";
                cout<<"Your element is Water, you are most compatible with Cancer and Scorpio.\n";}
                if ((month==2)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aquarius.\n";
            else if((month==3)&&((day>=1)&&(day<=20))){
                cout<<"Your birthday is March "<<day<<". So your sign is Pisces.";
                cout<<"Your element is Water, you are most compatible with Cancer and Scorpio.\n";}
                if ((month==3)&&(day==19||day==20))
                    cout<<"Your birthday is on a cusp! The nearest adjacent sign is Aries.\n";
            //end Pisces
            if     (month>=13||day>=32)
                cout<<"That's not a real birthday.\n";

                cout<<"Do you want to run this program again? Type in 'Y' or 'N' : ";
                cin>>ans;
            }while (ans=='Y'||ans=='y');
            break;
           }
    case 5:{
            //Variables
            unsigned short x; //Number to convert
            unsigned char n1000s,n100s,n10s,n1s;
            //Input Data
            cout<<"Input a year from 1000 to 3000 to convert into a Roman Numeral.\n";
            cin>>x;

            //Process Data
            if(x<1000||x>3000)return 1;

            //Output Data
            //Thousand Position
            n1000s=(x-x%1000)/1000;
            switch(n1000s){
                case 3:cout<<"M";
                case 2:cout<<"M";
                case 1:cout<<"M";
                          }
            x-=n1000s*1000;

            //Hundreds Position
            n100s=(x-x%100)/100;
            switch(n100s){
                case 9:cout<<"CM";break;
                case 8:cout<<"DCCC";break;
                case 7:cout<<"DCC";break;
                case 6:cout<<"DC";break;
                case 5:cout<<"D";break;
                case 4:cout<<"CD";break;
                case 3:cout<<"C";
                case 2:cout<<"C";
                case 1:cout<<"C";
                          }
            x-=n100s*100;

            //Tens
            n10s=(x-x%10)/10;
            switch(n10s){
                case 9:cout<<"XC";break;
                case 8:cout<<"LXXX";break;
                case 7:cout<<"LXX";break;
                case 6:cout<<"LX";break;
                case 5:cout<<"L";break;
                case 4:cout<<"XL";break;
                case 3:cout<<"X";
                case 2:cout<<"X";
                case 1:cout<<"X";
                          }
            x-=n10s*10;

            //Ones
            n1s=(x-x%1)/1;
            switch(n1s){
                case 9:cout<<"IX";break;
                case 8:cout<<"VIII";break;
                case 7:cout<<"VII";break;
                case 6:cout<<"VI";break;
                case 5:cout<<"V";break;
                case 4:cout<<"IV";break;
                case 3:cout<<"I";
                case 2:cout<<"I";
                case 1:cout<<"I";
                         } 
            break;
           }
    case 6:{
            //Variables
            char card;
            int  value=0,excess=0;
            int  nCards;

            //Input Data
            cout<<"How many cards are in your hand?\n";
            cin>>nCards;
            do{nCards-=1;
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Process Data
            switch(card){
                    case 'K':case 'k':
                    case 'Q':case 'q':
                    case 'J':case 'j':
                    case 'T':case 't':value+=10;break;
                    case '9':
                    case '8':
                    case '7':
                    case '6':
                    case '5':
                    case '4':
                    case '3':
                    case '2':value+=(card-48);break;
                    case 'A':case 'a':value+=11;excess=10;
                         }    
            if(value>21)value-=excess;
            cout<<"The value of the hand at this point = "<<value<<endl;
            }while((nCards>0)&&(value<=21));

            //Output Data
            if(value==21){cout<<"21! You win!";}
            else if(value<21)
            {value=21-value;
            cout<<"You lose! To win, you would have needed additional cards that value "
                <<value<<endl;
            }
            else {cout<<"Busted! You lose";}
            break;
           }
    case 7:{
            //Variables
            float crudWt,curntWt;          //Crud weight in pounds
            int   fi=1,fip1=1,fip2;//Fibonacci sequence
            int   days=0;          //Number of days

            //Input Data
            cout<<"How many pounds of crud do you have?"<<endl;
            cin>>crudWt;

            //Process Data - Day 0
            curntWt=crudWt*fi;
            cout<<"  Fi Days Weight\n";
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 5
            curntWt=crudWt*fip1;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 10
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 15
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 20
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 25
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 30
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 35
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process Data - Day 40
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;     
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
            break;
           }
    case 8:{
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
            break;
           }
    case 9:{
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
            break;
           }
    case 10:{cout<<"This is my Assignment 3 menu. Enjoy!\n";
    break;}
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

