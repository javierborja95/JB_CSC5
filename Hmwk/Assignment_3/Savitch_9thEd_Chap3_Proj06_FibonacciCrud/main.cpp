/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 30, 2016, 12:25 PM
 * Purpose: Outputs the pounds of crud
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
#include <iomanip>    //Formatting library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
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

    //Output Data

    return 0;
}

