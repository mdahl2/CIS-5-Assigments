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
    int sum,
     number,
          n;
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> The Process
    cin>>number;
    //Display Results 
    sum=0;
    for(int n=1;n<=number;n++)
        sum=sum+n;
    
    cout<<"Sum = "<<sum;
    //Exit stage right
    
    

    return 0;
}

