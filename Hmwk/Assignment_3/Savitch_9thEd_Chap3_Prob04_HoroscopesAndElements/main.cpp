/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 29, 2016, 10:00 PM
 * Purpose: User submits birthday. Horoscope, element and compatability outputs.
 * If one or two days away from adjacent sign, program announces that your 
 * birthday is on a "cusp."
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
    return 0;
}

