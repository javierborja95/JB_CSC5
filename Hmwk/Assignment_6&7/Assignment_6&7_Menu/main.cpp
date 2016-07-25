/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on July 24, 2016, 5:00 PM
 * Purpose: A menu catalog for assignments 6 and 7.
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Output manipulation
#include <cstdlib>    //Standard Library
#include <ctime>      //Computer Time
#include <cmath>      //Math Library
#include <string>     //String input

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=pow(2,31)-1; //Max unsigned int value
const unsigned int MXRND=(1<<31)-1;    //Same max unsigned int
const int SIZE=3;
const int SIZE1=4;
const int SIZE2=5;

//Function Prototypes
void dspMenu();
bool firstLast2();
void firstLast();
void swap(int&,int&);
string lookupName(string,string[],string[]);
void getRain(float[],int);
void aveDiff(float,float);
void delRpts(char [],char [],int&);//Delete repeats from array
void display(char[],int,bool);
float normal();
float fillAry(float [],int);
void maxmin(float [],int,float &, float &);
float mean(float [],int);
float stdDev(float [],int);
void filAray(int [],int);
void sort(int [],int);
void swap(int[],int,int);
void display(int[],int);
void insSort(int[],int); //Insertion Sort
void display1(int[],int);
void filAray1(int a[],int n);
void display(char[][SIZE]);
void xTurn(char[][SIZE]);
void oTurn(char[][SIZE]);
void winChck(char[][SIZE],bool&,bool&);
void display(char[][SIZE1],int);
bool choose(char[][SIZE1]);
void getPin(int[],int);
void gnerate(int[],int);
void getCode(int[],int);
void compare(int[],int[],int[]);
void viewScd(string[][SIZE2]);
void mark(string[][SIZE2]);
//Execution

int main(int argc, char** argv) {
    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));
    //Variables
    unsigned int choice;  //First choice to see the homework assignment
    char         response;//Response to question "Do you want to see another homework assignment?"
    
    //Input Data
    cout<<"This is a menu of all my problems in assignment 6 and 7.\n"
          "Please input the problem you wish to view.\n";
do{
    dspMenu();
    cin>>choice;
    cin.ignore();
    
    //Output Data
    switch(choice){
    case 1:{
        //Variables
        bool tF; //True/false

        //Input Data
        cout<<"Input as many integers as you like\n"
              "When you are done, input a 0."<<endl;
        tF=firstLast2();
        //Process Data

        //Output Data
        if (tF==true)cout<<"The array starts or ends with the digit 2"<<endl;
        else cout<<"The array doesn't start or end with the digit 2"<<endl;
        break;
    }
    case 2:{
        //Variables
        int n; //Number of twos

        //Input Data
        cout<<"Input as many integers as you like\n"
              "When you are done, input a 0"<<endl;
        n=firstLast2();
        //Process Data

        //Output Data
        cout<<"There are "<<n<<" number of twos in the array."<<endl;
        break;
    }
    case 3:{
        //Input Data
        cout<<"Input as many integers as you like\n"
        "When you are done, input a 0."<<endl;
        //Output Data
        firstLast();
        break;
    }
    case 4:{
        //Variables
        const int SIZE=4;
        string names[SIZE]={"Michael Myers",
                            "Ash Williams",
                            "Jack Torrence",
                            "Freddy Krueger"};
        string phoneNum[SIZE]={"333-8000","333-2323",
                               "333-6150","339-7970"};
        string targetN, targetP; //Target Name, Target Phone
        char c;

        //Input Data
        cout<<names[0]<<endl<<names[1]<<endl<<names[2]<<endl<<names[3]<<endl;
        do{
            cout<<"Enter a name to find the corresponding phone number."<<endl;
            getline(cin,targetN);
            targetP=lookupName(targetN,names,phoneNum);
            if(targetP.length()>0)
                cout<<"the number is : "<<targetP<<endl;
            else
                cout<<"Name not found."<<endl;
            cout<<"Look up another name? (y/n)"<<endl;
            cin>>c;
            cin.ignore();
        }while (c=='y'||c=='Y');
        break;
    }
    case 5:{
        //Variables
        const int SIZE=12;
        float rain[SIZE]={};

        //Input Data
        getRain(rain,SIZE);
        break;
    }
    case 6:{
        //Variables
        const int SIZE=100;
        char a[SIZE];
        char b[SIZE];
        int i=0;//Number of values in array
        bool old=true;
        //Input Data
        cout<<"Input lowercase characters into the array.\n"
              "When you are done, input an integer."<<endl;
        do{
            cin>>a[i];
            i++;
        }while(i<100&&(a[i-1]>=97)&&(a[i-1]<=122));
        i--;
        //Output Data
        display(a,i,old);
        //Process Data
        old=false;
        delRpts(a,b,i);
        //Output Results
        display(b,i,old);
        break;
    }
    case 7:{
        //Variables
        const int SIZE=500000;
        float x[SIZE];
        float min,max,avg,std;

        //Input Data
        fillAry(x,SIZE);

        //Process Data
        maxmin(x,SIZE,min,max);
        avg=mean(x,SIZE);
        std=stdDev(x,SIZE);

        //Output Data
        cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
        cout<<"Integer Maximum Random Number = "<<MXRND<<endl;
        cout<<"The Minimum Random Normal Number = "<<min<<endl;
        cout<<"The Maximum Random Normal Number = "<<max<<endl;
        cout<<"The Average Random Normal Value  = "<<avg<<endl;
        cout<<"The Std Dev Random Normal Value  = "<<std<<endl;
        break;
    }
    case 8:{
        //Declare Variables
        const int SIZE=300;
        int array[SIZE];

        //Input Data
        filAray(array,SIZE);

        //Process the Data
        sort(array,SIZE);

        //Output the processed Data
        display(array,SIZE);
        break;
    }
    case 9:{
        //Variables
        const int SIZE=25;
        int a[SIZE];
        //Input Data
        filAray1(a,SIZE);

        //Process Data
        cout<<"Before sorting, values in the array are:"<<endl;
        display1(a,SIZE);
        insSort(a,SIZE);
        //Output Data
        cout<<"After Insertion Sorting, values in the array are:"<<endl;
        display1(a,SIZE);
        break;
    }
    case 10:{
        char tic[SIZE][SIZE]={'1','2','3',
                              '4','5','6',
                              '7','8','9'};
        bool p1Win=false;
        bool p2Win=false;
        //Input Data
        display(tic);
        for(int i=0;i<5&&p1Win==false&&p2Win==false;i++){
            xTurn(tic);
            winChck(tic,p1Win,p2Win);
            if(i<4&&p1Win==false)oTurn(tic);
            display(tic);
            winChck(tic,p1Win,p2Win);
        }
        //Process Data

        //Output Data
        if(p1Win)cout<<"Player 1 wins."<<endl;
        else if(p2Win)cout<<"Player 2 wins."<<endl;
        else cout<<"It's a tie."<<endl;
        break;
    }
    case 11:{
        //Variables
        const int SIZE0=7;
        char seats[SIZE0][SIZE1]={'A','B','C','D','A','B','C','D','A','B','C','D',
        'A','B','C','D','A','B','C','D','A','B','C','D','A','B','C','D',};
        bool next=true;
        //Input Data
        cout<<"This program assigns seats in an airplane."
              " 'X's means the seat is taken."<<endl;
        display(seats,SIZE0);
        for(int i=0;i<28&&next;i++){
            next=choose(seats);
            display(seats,SIZE0);
            if(i==27)cout<<"All the seats are taken."<<endl;
        }
        break;
    }
    case 12:{
        //Variables
        int choice,ans;
        string jeff[SIZE2][SIZE2]={"Jeff ","Monday ","Tuesday","Wdnesdy","Thrsday",
                                 "11-12","   o   ","   o   ","   o   ","   o   ",
                                 "12-1 ","   o   ","   o   ","   o   ","   o   ",
                                 "1-2  ","   o   ","   o   ","   o   ","   o   ",
                                 "2-3  ","   o   ","   o   ","   o   ","   o   "};
        string anna[SIZE2][SIZE2]={"Anna ","Monday ","Tuesday","Wdnesdy","Thrsday",
                                 "11-12","   o   ","   o   ","   o   ","   o   ",
                                 "12-1 ","   o   ","   o   ","   o   ","   o   ",
                                 "1-2  ","   o   ","   o   ","   o   ","   o   ",
                                 "2-3  ","   o   ","   o   ","   o   ","   o   "};
        do{
        //Input Data
            cout<<"Select 1 to view a schedule.\n"
                  "Select 2 to edit a schedule.\n"
                  "Select 3 to view all schedules.\n";
            cin>>choice;

        //Process Data
            switch(choice){
                case 1:cout<<"Select 1 for Jeff\n"
                             "Select 2 for Anna"<<endl;
                        cin>>choice;
                        if(choice==1)viewScd(jeff);
                        else viewScd(anna);break;
                case 2:cout<<"Select 1 for Jeff\n"
                             "Select 2 for Anna"<<endl;
                        cin>>choice;
                        if(choice==1)mark(jeff);
                        else mark(anna);break;
                case 3:viewScd(jeff);viewScd(anna);break;
                default:cout<<"Incorrect input"<<endl;
            }
            cout<<"Do you wish to run this program again? 1 for yes, anything else to exit."
                <<endl;
            cin>>ans;
        }while(ans==1);
        //Output Data
        cin.ignore();
        break;
    }
    case 13:{
        //Variables
        const int SIZE=10;
        const int PIN=5;  //5 digit pin
        int pin[PIN];
        int num[SIZE];
        int guess[PIN];
        char ans;

        //Input and Process Data
        getPin(pin,PIN);
        do{
            cout<<endl<<"PIN:    0 1 2 3 4 5 6 7 8 9\n"
                        "NUM:    ";
            gnerate(num,SIZE);
            for(int i=0;i<SIZE;i++){
                cout<<num[i]<<" ";
            }
            getCode(guess,PIN);
            //Output Data
            compare(pin,guess,num);
            cout<<"If you wish to log in again input a 1."
                  " Anything else to quit."<<endl;
            cin>>ans;
        }while(ans=='1');
        break;
    }
    case 14:{cout<<"This is my 14th assignment for assignment 6 & 7.\n";
        break;}
    default:cout<<"That is an invalid choice.\n";}
    
    cout<<endl;
    cout<<"Do you wish to see another homework assignment?\n"
          "Type in 'Y' for yes. Anything else to quit: ";
    cin>>response;
    cout<<endl;
}while (response=='y'||response=='Y');
cout<<"Thanks for viewing my homework assignments!\n";
    
    return 0;
}

void dspMenu(){
    cout<<"The possible options are:\n"
          "1.   Savitch_9thEd_Chap7_Prob01_IntegerArray\n"
        //Input an array of integers and displays how many entries in the array.
          "2.   Savitch_9thEd_Chap7_Prob02_TwoCount\n"
        //Input an array of integers and displays how many entries in the array.
        //Tells you how many number of twos in the array.
          "3.   Savitch_9thEd_Chap7_Prob03_SwapFirstLast\n"
        //Swaps the first and last values of the array.
          "4.   Savitch_9thEd_Chap7_Prob04_PhoneBook\n"
        //Looks up a name in a phonebook and returns the phone number..
          "5.   Savitch_9thEd_Chap7_Proj01_Rainfall\n"
        //Gets rainfall for each month and displays averages and difference.
          "6.   Savitch_9thEd_Chap7_Proj03_DeleteRepeats\n"
        //Input array of characters. Program deletes duplicates and redisplays the array.
          "7.   Savitch_9thEd_Chap7_Proj04_StdDev\n"
        //Generate a Standard Normal - Z
          "8.   Savitch_9thEd_Chap7_Proj05_OrderAndCount\n"
        //Orders array greatest to least and counts the repeat occurrences.
          "9.   Savitch_9thEd_Chap7_Proj06_InsertionSort\n"
        //Insertion Sort.
          "10.  Savitch_9thEd_Chap7_Proj10_TicTacToe\n"
        //Plays tic-tac-toe.
          "11.  Savitch_9thEd_Chap7_Proj11_AirplaneSeats\n"
        //Assigns planes seats.
          "12.  Savitch_9thEd_Chap7_Proj17_FreeBusySchedule\n"
        //Views and edits the schedules of Jeff and Anna.
          "13.  Savitch_9thEd_Chap7_Proj19_SecretPinPassword\n"
        //Enter in a 5 digit pin converted to a code.
          "14.  Assignment_6&7_menu"<<endl;
}

bool firstLast2(){
    //Declare Variables
    const int SIZE=100;
    int intAray[SIZE]={};
    int i=0;
    //Input Data
    do{
        cin>>intAray[i];
        if(intAray[i]==0){
            cout<<"There are "<<i<<" entries in this array."<<endl;
        }
        i++;
    }while(i<SIZE&&intAray[i-1]!=0);
    if(intAray[i-2]==2||intAray[i-i]==2)return true;
    return false;
}

void firstLast(){
    //Declare Variables
    const int SIZE=100;
    int intAray[SIZE]={};
    int i=0;
    int count=0; //Count of twos
    //Input Data
    do{
        cin>>intAray[i];
        if (intAray[i]==2)count++;
        if(intAray[i]==0){
            cout<<"There are "<<i<<" entries in this array."<<endl;
        }
        i++;
    }while(i<SIZE&&intAray[i-1]!=0);
    swap(intAray[i-i],intAray[i-2]);
}

void swap(int& a,int& b){
    //Process Data
    a=a^b;
    b=a^b;
    a=a^b;
    
    //Output Data
    if(a==0||b==0)cout<<"There are not enough values to swap."<<endl;
    else{
        cout<<"After swapping:"<<endl;
        cout<<"First value = "<<a<<endl;
        cout<<"Last value  = "<<b<<endl;
    }
}

string lookupName(string targetN,string names[],string phoneNum[]){
    //Process Data
    for(int i=0;i<4;i++){
        if(targetN==names[i])return phoneNum[i];
    }
    return "";
}

void getRain(float rain[],int months){
    //Declare Variables
    float average;
    //Get Data and Process Data
    cout<<"Rain for:"<<setw(19)<<"Average "<<"Difference"<<endl;
    for(int i=0;i<months;i++){
        rain[i]=(rand()%1000/100.0f);
        average=(i==0)?rain[i]:
            average=((average*(i))+(rain[i]))/(i+1);
    //Output Data
        switch (i){
            case 0:cout<<"January   ";break;
            case 1:cout<<"February  ";break;
            case 2:cout<<"March     ";break;
            case 3:cout<<"April     ";break;
            case 4:cout<<"May       ";break;
            case 5:cout<<"June      ";break;
            case 6:cout<<"July      ";break;
            case 7:cout<<"August    ";break;
            case 8:cout<<"September ";break;
            case 9:cout<<"October   ";break;
            case 10:cout<<"November  ";break;
            default:cout<<"December  ";break;
        }
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<" = "<<rain[i]<<"\""<<setw(7)<<average<<"\"   ";
        if(i>0)aveDiff(average,rain[i]);
        else cout<<"-----"<<endl;
    }
}

void aveDiff(float ave,float rain){
    //Declare Variables
    float diff;
    //Process Data
    diff=rain-ave;
    //Output
    if(diff>0)cout<<"+";
    cout<<diff<<endl;
}

void display(char a[],int i,bool old){
    //Display Results
    if (old)cout<<"There are "<<i<<" values in the array."<<endl;
    else cout<<"After deleting duplicates, there are "
            <<i<<" values in the array."<<endl;
    for(int x=1;x<=i;x++){
        cout<<x<<"."<<a[x-1]<<"  ";
    }
    cout<<endl;
}

void delRpts(char a[],char b[],int& oldSize){
    //Declare Variables
    b[0]=a[0];
    bool match;
    int newSize=1;
    //Process Data
    for(int x=1;x<=oldSize;x++){
        match=false;
        for(int y=0;y<=newSize&&match==false;y++){
            if(a[x]==b[y]){
                match=true;
            }
        }
        if(match==false){
            b[newSize]=a[x];
            newSize++;
        }
    }
    oldSize=newSize-1;
}

float stdDev(float x[],int n){
    float sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

float mean(float x[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void maxmin(float x[],int n,float &min,float &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(min>x[i])min=x[i];
    }
}

float fillAry(float x[],int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

float normal(){
    //Declare and Initialize
    float sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRND;//[0,1]
    }
    //Scale a number [0,12]-6 = [-6,6]
    return (sum-6);
}

void filAray(int a[],int n){
    //Process Data
    for(int i=0;i<n;i++){
        a[i]=rand()%31-10;//[-10,20]
    }
    //Output Data
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i]<<", ";
        if((i+1)%50==0)cout<<endl;
    }
    cout<<endl;
}

void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int x=i+1;x<n;x++){
            if(a[i]<a[x]){
                swap(a,i,x);
            }
        }
    }
    cout<<endl;
}

void swap(int a[],int x,int y){
    a[x]=a[x]^a[y];
    a[y]=a[x]^a[y];
    a[x]=a[x]^a[y];
}

void display(int a[],int size){
    cout<<" N   Count"<<endl;
    //Declare Variables
    int num,count;
    num=a[0];
    //Process Data
    for(int i=1;i<=size;i++){
        count=1;
        if (a[i]==num){
            do{
                count++;
                i++;
            }while(a[i]==num);
        }
        cout<<setw(3)<<num<<setw(5)<<count<<endl;
        num=a[i];
    }
}

void insSort(int a[],int n){
    //Declare Variables
    int x,y;
    //Process Data
    for(int i=1;i<n;i++){
        x=i;
        while(a[x]<a[(x-1)]&&(x>0)){
            swap(a,x,(x-1));
            x--;
        }
    }
}

void display1(int a[],int n){
    //Output Data
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i]<<", ";
        if((i+1)%50==0)cout<<endl;
    }
    cout<<endl;
}

void filAray1(int a[],int n){
    //Process Data
    for(int i=0;i<n;i++){
        a[i]=rand()%20+1;//[-10,20]
    }
}

void display(char a[][SIZE]){
    //Display Data
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void xTurn(char a[][SIZE]){
    //Declare variables
    int choice;
    //Input Data
    cout<<"Player 1 choose a number on the board: ";
    cin>>choice;
    switch(choice){
        case 1:a[0][0]='X';break;
        case 2:a[0][1]='X';break;
        case 3:a[0][2]='X';break;
        case 4:a[1][0]='X';break;
        case 5:a[1][1]='X';break;
        case 6:a[1][2]='X';break;
        case 7:a[2][0]='X';break;
        case 8:a[2][1]='X';break;
        case 9:a[2][2]='X';break;
    }
}

void oTurn(char a[][SIZE]){
    //Declare variables
    int choice;
    //Input Data
    cout<<"Player 2 choose a number on the board: ";
    cin>>choice;
    switch(choice){
        case 1:a[0][0]='O';break;
        case 2:a[0][1]='O';break;
        case 3:a[0][2]='O';break;
        case 4:a[1][0]='O';break;
        case 5:a[1][1]='O';break;
        case 6:a[1][2]='O';break;
        case 7:a[2][0]='O';break;
        case 8:a[2][1]='O';break;
        case 9:a[2][2]='O';break;
    }
}

void winChck(char a[][SIZE],bool& p1,bool& p2){
    if((a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||
       (a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||
       (a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[2][0]=='X'&&a[1][1]=='X'&&a[0][2]=='X')||
       (a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'))
        p1=true;
    if((a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||
       (a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')||
       (a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')||(a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O')||
       (a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'))
        p2=true;
}

void display(char a[][SIZE1],int SIZE0){
    //Display Data
    for(int i=0;i<SIZE0;i++){
        cout<<i+1<<" ";
        for(int j=0;j<SIZE1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool choose(char a[][SIZE1]){
    //Declare variables
    int  row,column; //Rows/Columns
    char choice;     //Columns
    bool goAgn;      //Go again
    //Input Data
    do{
        goAgn=false;
        cout<<"If you wish to end the program type in '-1'"<<endl;
        cout<<"Choose the row (1-7) and column ('A','B',C','D') that you want.\n";
        cin>>row;
        if(row==-1)return false;
        if(row<-1||row>7)goAgn=true;
        cin>>choice;
        //Process Data
        switch (choice){
            case 'A':case 'a':column=0;break;
            case 'B':case 'b':column=1;break;
            case 'C':case 'c':column=2;break;
            case 'D':case 'd':column=3;break;
            default:goAgn=true;
        }
        if(goAgn)cout<<"Incorrect input. Go again."<<endl;
        if(a[row-1][column]=='X'){
            cout<<"That seat is already taken. Go again."<<endl;
            goAgn=true;
        }
    }while(goAgn==true);
    //Process Data
    a[row-1][column]='X';
    return true;
}

void getPin(int a[],int size){
    cout<<"Input your 5 digit PIN seperated with spaces"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void gnerate(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]=(rand()%3+1);
    }
}

void getCode(int a[],int size){
    cout<<endl<<"Input the 5 Numbers that correspond to your PIN separated by spaces"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}

void compare(int pin[],int guess[],int num[]){
    bool correct=true;
    for(int i=0;i<5&&correct==true;i++){
        if(guess[i]==num[(pin[i])])correct=true;
        else correct=false;
    }
    if(correct)cout<<"Authentication Process Complete"<<endl;
    else cout<<"Incorrect PIN"<<endl;
}

void viewScd(string a[][SIZE2]){
    //Output Data
    cout<<"o's Show free hour slots\nx's show busy hour slots"<<endl;
    for(int i=0;i<SIZE2;i++){
        for(int j=0;j<SIZE2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void mark(string a[][SIZE2]){
    //Declare Variables
    int row,col;
    char choice;
    //Input Data
    cout<<"Select 1 to mark time slot as busy,\n"
          "Select 2 to mark time slot as free."<<endl;
    cin>>choice;
    if (choice=='1'){
        viewScd(a);
        cout<<"Input the row[1,4] and column[1,4] you wish to edit. Separate by space.\n";
        cin>>row>>col;
        a[row][col]="   x   ";
        viewScd(a);
    }
    else{
        viewScd(a);
        cout<<"Input the row[1,4] and column[1,4] you wish to edit. Separate by space.\n";
        cin>>row>>col;
        a[row][col]="   o   ";
        viewScd(a);
    }
}