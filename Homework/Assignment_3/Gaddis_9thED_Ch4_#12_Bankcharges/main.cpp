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
    int   moth,//$10 monthly charge
         check,//number of checks
         exbal;//extra $15 dollar charge
    
    float blnce,//Starting balance
         chkfee,//Check fee
         neblnc;//New balance
            
    //Initialize Variables
    moth=10;
    exbal=15;
   
    
            
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results 
    cout<<"Monthly Bank Fees\n";
    cout<<"Input Current Bank Balance and Number of Checks\n";
    cin>>blnce;
    if (blnce < 0)
        cout << "Your account is overdrawn.";

    cin>>check;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if(check<20)
    {
        chkfee=check*0.10;
        
       if(blnce<400)
      {
        neblnc=(blnce-((chkfee)+moth+exbal));  
      } 
       else
       {
        neblnc=(blnce-((chkfee)+moth));
       }
    }
    
    else if(20<=check && check<=39)
    {
        chkfee=check*0.08;
        
       if(blnce<400)
      {
        neblnc=(blnce-((chkfee)+moth+exbal));  
      } 
       else
       {
        neblnc=(blnce-((chkfee)+moth));
       }
    }
    
    else if(40<=check && check<=59)
    {
        chkfee=check*0.06;
        
       if(blnce<400)
      {
        neblnc=(blnce-((chkfee)+moth+exbal));  
      } 
       else
       {
        neblnc=(blnce-((chkfee)+moth));
       }
    }
    
    else if(check>=60)
    {
        chkfee=check*0.04;
        
       if(blnce<400)
      {
        neblnc=(blnce-((chkfee)+moth+exbal));  
      } 
       else
       {
        neblnc=(blnce-((chkfee)+moth));
       }
    }            
    
    
    
    
    cout<<"Balance     $   "<<blnce<<endl;
    cout<<"Check Fee   $     "<<chkfee<<endl;
    cout<<"Monthly Fee $    "<<moth<<endl;
    cout<<"Low Balance $    "<<exbal<<endl;
    cout<<"New Balance $    "<<neblnc;
    
    
    
    
    
    
    
    
    
    
            
            
    
        
    
                
       
    
    
    //Exit stage right
    
    

    return 0;
}

