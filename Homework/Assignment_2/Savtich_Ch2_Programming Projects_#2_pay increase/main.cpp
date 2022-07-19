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
    const float payinc=7.6e-2;//Pay increase
    
    int      olansal;//Old Annual Salary
    
    float       rtropay,//retroactive pay over 6 months
                  nwsal,//New annual Salary
                 newmon;//New monthly salary
            
    //Initialize Variables
    
            
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Input previous annual salary.\n";
    cin>>olansal;
    rtropay=(olansal*payinc)/2;
    cout<<"Retroactive pay    = $  "<<rtropay<<endl;
    nwsal=(olansal*payinc)+olansal;
    cout<<"New annual salary  = $"<<nwsal<<endl;
    newmon=nwsal/12;
    cout<<"New monthly salary = $ "<<newmon<<endl;
    
    //Exit stage right
    
    

    return 0;
}

