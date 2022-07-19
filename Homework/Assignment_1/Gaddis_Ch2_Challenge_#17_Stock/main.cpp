/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 27, 2022, 3:11 PM
 * Purpose: Figure out total stock price with commission
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
    float shr,//amount of shares
          shrp,//per share price
          cmms,//commision percentage
          toshp,//total stock price
          tocmm,//total commison price
          total;//total stock price with commision  
    
    //Initialize Variables
    shr=750;
    shrp=35.00;
    cmms=2e-2;
            
            
    //Map Inputs to Outputs -> The Process
    toshp=shr*shrp;
    tocmm=toshp*cmms;
    total=toshp+tocmm;        
    
    //Display Results 
    cout<<"You bought "<<shr<<" shares which are worth $ "<<shrp<<" each share\n";
    cout<<"They charged you a 2% commission for the transaction.\n";
    cout<<"Your total stock price without the commission was $"<<toshp<<"\n";
    cout<<"Your total commission was $"<<tocmm<<"\n";
    cout<<"Your total stock price with commission was $"<<total<<"\n";
            
    //Exit stage right
    
    

    return 0;
}

