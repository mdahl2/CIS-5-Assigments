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
    float Fah,//Fahrenheit
          cel;//celius
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results 
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>Fah;
    cel=((Fah-32)*5)/9;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout<<Fah<<" Degrees Fahrenheit = "<<cel<<" Degrees Centigrade";
    //Exit stage right
    
    

    return 0;
}

