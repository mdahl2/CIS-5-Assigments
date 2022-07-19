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
    int total,//total amount of cookies in bag
      srvings,//total amount of servings in bag
      amprser,//amount of cookies per serving
      cookeat,//cookies eaten
      calpers;//calories per serving
      
    float serveat,//servings eaten
          caleatn;//calories eaten
      
    //Initialize Variables
    total=40;
    srvings=10;
    amprser=4;
    calpers=300;
    //Map Inputs to Outputs -> The Process
    
    //Display Results 
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>cookeat;
    serveat=cookeat/amprser;
    caleatn=serveat*calpers;
    cout<<"You consumed "<<caleatn<<" calories.";

    //Exit stage right
    
    

    return 0;
}

