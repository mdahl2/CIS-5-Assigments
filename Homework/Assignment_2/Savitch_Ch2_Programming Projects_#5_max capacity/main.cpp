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
    int numpeop,//Number of people attending meeting
         maxpeo,//Max number of people that can attend the meeting
           morpe,//How many more people can attend
          lespeo;//How many people need to be removed from meeting
    //Initialize Variables
   
   
    //Map Inputs to Outputs -> The Process
     morpe=maxpeo-numpeop;
     lespeo=numpeop-maxpeo;
     
    //Display Results
   cout<<"Input the maximum room capacity and the number of people.\n";
   cin>>maxpeo;
   cin>>numpeop;
   
    if((numpeop>=maxpeo))
    {
    cout<<"Meeting cannot be held.\n";
    
    
    }
    else
    { 
        cout<<"Meeting can be held.\n";
    }
   
   if((numpeop>=maxpeo))
   {
     lespeo=numpeop-maxpeo;
     cout<<"Reduce number of people by 100 to avoid fire violation.\n";
       
   }
   
   else
   {
   morpe= maxpeo-numpeop;
           cout<<"Increase number of people by 100 will be allowed without"
                   "violation.";
                   
                    
                    
               
   } 
 
   
   
   
 
   
               
           
    //Exit stage right
           
           
    
    

    return 0;
}

