/* 
 * File:   main.cpp
 * Author: Javier Borja
 * Created on June 21, 2016, 1:10 PM
 * Purpose: Log of syntax errors
 */

//System Libraries
#include <iostream>   //Input/ Output Stream Library
using namespace std;  //iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input Data
    
    //Process Data
    
    //Output Data
    cout<<"Putting an extra space between the < and the iostream file name yielded:\n"
            "main.cpp:9:10: error: #include expects 'FILENAME' or <FILENAME>\n\n";
    cout<<"Omitting the < symbol from the include directive yielded:\n"
            "main.cpp:9:10: error: #include expects 'FILENAME' or <FILENAME>";
    cout<<"Omitting the int from int main() yeilded:\n"
            "RUN SUCCESSFUL\n\n";
    cout<<"Mispelling the word main resulted in:"
            "BUILD FAILED\n\n";
    cout<<"Omitting the ( resulted in:\n"        
          "main.cpp:19:10: error: expected initializer before ')' token\n\n";
    cout<<"Omitting the } at the end resulted in:\n"        
          "main.cpp:46:13: error: expected '}' at end of input\n";  
            
    //Exit Stage Right!
    return 0;
}

