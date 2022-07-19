/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 22, 2022, 12:13 PM
 * Purpose: C++ Template- To be used in all future assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions/Higher Dimensional arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float x;
    float PI;
    
    //Initialize Variables
     
    PI=3.1415928;
    
    //Map Inputs to Outputs -> The Process
    
    
    
    //Display Results
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>x;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout<<"sin(45) = "<<sin (x*PI/180)<<endl;
    cout<<"cos(45) = "<<cos (x*PI/180)<<endl;
    cout<<"tan(45) = "<<tan (x*PI/180);
    
    
    
            
    
    //Exit stage right
    
    

    return 0;
}

