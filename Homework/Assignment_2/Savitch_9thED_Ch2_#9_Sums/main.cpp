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
int num, negsum=0, posum=0, sum=0;

   //Initialize Variables
 
    
    //Map Inputs to Outputs -> The Process
   
    
    //Display Results
   cout << "Input 10 numbers, any order, positive or negative\n";
    
    for(int i=0;i<10;i++)
 {

 //cout<<"i is"<<i<<endl;
cin >> num;

if (num >= 0 )
 {
     posum += num;
     
 } 

 else     
 {
     negsum += num ; 
     
 }  
 }


sum = posum + negsum;



 
 cout << "Negative sum = " << negsum <<endl;
 cout << "Positive sum =  "<< posum <<endl;
 cout << "Total sum    =   "<< sum;

 
    //Exit stage right
    
    

    return 0;
}

