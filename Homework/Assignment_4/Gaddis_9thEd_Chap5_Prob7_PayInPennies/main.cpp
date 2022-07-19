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
    const int incant = 2;

    int numday;

    float daysal = 0.01,
          totsal = 0;
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results
     cout << "Enter number of days:\n ";
     cin>>numday;
    
   for(int i = 0; i < numday; i++)
    {
        totsal += daysal;
        daysal *= incant;
        
    }
    cout <<"Pay = $"<<totsal<<endl;
    cout << endl;
        
    //Exit stage right
    
    

    return 0;
}

