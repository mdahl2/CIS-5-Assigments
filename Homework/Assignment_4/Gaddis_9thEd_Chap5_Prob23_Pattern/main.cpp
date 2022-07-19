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
     int a;
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results 
    cin>>a;
   for (int i=1;i<=a;i++) {
    
    for(int j=1;j<=i;j++){
        cout<<"+";
    }
    cout<<endl<<endl;
}

   for (int i=1;i<=a;i++){ 
    for(int j=1;j<=a+1-i;j++) {
        cout<<"+";
    }
    if (i<a) cout<<endl<<endl;
    }
    //Exit stage right
    
    

    return 0;
}

