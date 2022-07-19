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
    int max=0,
        nmb=0,
        min=10000000;
    //Declare Variables
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
     while (nmb != -99)
    {
        cin>>nmb;
    if (nmb==-99)break;
    if (nmb>max)
        max=nmb;
    if (nmb<min)
        min=nmb;
    }
    //Display Results 
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    //Exit stage right
    
    

    return 0;
}

