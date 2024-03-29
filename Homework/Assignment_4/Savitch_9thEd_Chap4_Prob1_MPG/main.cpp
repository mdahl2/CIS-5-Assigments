/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 22, 2022, 12:13 PM
 * Purpose: C++ Template- To be used in all future assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions/Higher Dimensional arrays
float const Liter=0.264172;

float mglln(float ml, int lt)
{
    return ml/(Liter*lt);
}

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int lt;

   float ml;
    
    float mpg;
    
    char repeat;
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    repeat='y';
    //Display Results
    while (repeat=='y') {
       
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>lt;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>ml;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"miles per gallon:"<<endl;
        cout<<mglln(ml, lt)<<endl;
        
        mpg=ml/(lt*Liter);
        
        cout<<"Again:"<<endl;
        cin>>repeat;
        
        if (repeat=='y')
        cout<<endl;
        
    }
    
    
    //Exit stage right
    
    

    return 0;
}

