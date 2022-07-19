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
    float galn, //gallons car holds
          mpgt, //mpg in town
          mpgh, //mpg on highway
          dstt, //distance in town
          dsth; //distance on highway 
    
    //Initialize Variables
    galn=20;
    mpgt=2.35e1;
    mpgh=2.89e1;
    
            
           
    //Map Inputs to Outputs -> The Process
    dstt=galn*mpgt;
    dsth=galn*mpgh;
            
    //Display Results
    cout<<"If your car holds "<<galn<<" gallons,\n";
    cout<<"then you car will go "<<dstt<<" miles in town\n";
    cout<<"and your car will go "<<dsth<<" miles on highway\n";
    
    
    //Exit stage right
    
    

    return 0;
}

