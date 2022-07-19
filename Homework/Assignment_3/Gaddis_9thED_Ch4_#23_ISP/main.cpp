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
    char pack;
    
    //Initialize Variables
    float month,//monthly payment
           hour,
         exhour,
           bill;
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results 
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>>pack;
    cin>>hour;
    
    switch(pack)
    {
    case'A':
        month=9.95;
        if(hour>=10)
        {
            exhour=hour-10;
            bill=month+(2.00*exhour);
        }
        else
            bill=month;
        
                
        
        break;
    case'B':
        month=14.95;
        if(hour>=20)
        {
            exhour=hour-20;
            bill=month+(1.00*exhour);
        }
        else
            bill=month;
        
       

        break;
        
    case'C':
        month=19.95;
        
            bill=month;
        
     break;
     
        default:
            cout<<"Package does not exist\n";
     }
    
    cout<<"Bill = "<<bill; 
            
    //Exit stage right
    
    

    return 0;
}

