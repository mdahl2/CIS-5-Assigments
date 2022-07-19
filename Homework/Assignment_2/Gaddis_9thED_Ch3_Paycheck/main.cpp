/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 22, 2022, 12:13 PM
 * Purpose: C++ Template- To be used in all future assignments
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions/Higher Dimensional arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float hour,pay,grospay;
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    cout<<"This program calculates the gross paycheck\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>pay;
    cin>>hour;
    
    
    
    if(hour<40)
    
        grospay=hour*pay;
    
        
       
    else
    
        grospay=pay*40+(2*pay*(hour-40));
       
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
     cout<<"Paycheck = $"<<grospay<<endl;
            
    //Display Results 
    
    //Exit stage right
    
    

    return 0;
}

