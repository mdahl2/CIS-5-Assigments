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
    int quater,dime,nickle,total; 
    
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> The Process
    total=(quater*25)+(dime*10)+(nickle*5);
    
    //Display Results 
    cout<<"Press return after entering number\n";
    cout<<"Enter number of quaters\n";
    cin>>quater;
    cout<<"Enter number of dimes\n";
    cin>>dime;
    cout<<"Enter number of nickles\n";
    cin>>nickle;
    total=(quater*25)+(dime*10)+(nickle*5);
    cout<<"If you have "<<quater<<" quaters,\n";
    cout<<"and if you have "<<dime<<" dimes,\n";
    cout<<"and if you have "<<nickle<<" nickles,\n";
    cout<<"then you have "<<total<<" cents in change\n";
            
            
    
    //Exit stage right
    
    

    return 0;
}

