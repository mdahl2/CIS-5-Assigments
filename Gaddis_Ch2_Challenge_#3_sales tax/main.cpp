/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 27, 2022, 1:37 PM
 * Purpose: Figure out total sales tax
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
    int prhse; //inital purchase
            
    float stax, //state tax
          ctax, //county tax
          totax, //total tax
          fnlphs; //final purchase  
            
    
    //Initialize Variables
    prhse=95;//95 dollars
    stax=4e-2;//4 percent
    ctax=2e-2;//2 percent
            
    
    //Map Inputs to Outputs -> The Process
    totax=(prhse*stax)+(prhse*ctax);
    fnlphs=prhse+totax;
    
    
    //Display Results
    cout<<"You bought an item for "<<prhse<<" dollars.\n";
    cout<<"The sales tax is "<<stax<<" percent.\n";
    cout<<"The county tax is"<<ctax<<" percent.\n";
    cout<<"Your total tax is "<<totax<<" dollars.\n";
    cout<<"Then your total purchase was "<<fnlphs<<" dollars\n";
    
    //Exit stage right
    
    

    return 0;
}

