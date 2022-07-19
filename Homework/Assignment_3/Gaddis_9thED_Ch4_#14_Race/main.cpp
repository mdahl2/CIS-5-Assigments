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
    
    string run1,run2,run3;
    int runt1,runt2,runt3;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n";
    cout<<"Their names, then their times\n";
    cin>>run1;
    cin>>runt1;
    cin>>run2;
    cin>>runt2;
    cin>>run3;
    cin>>runt3;
    
    
    
        if (runt1 < runt2)
        {
            if (runt1 < runt3)
            {
                cout<<run1<<" "<<runt1<<endl;
                
                if (runt2 < runt3)
                {
                    cout<<run2<<" "<<runt2<<endl;
                    
                    cout<<run3<<" "<<runt3<<endl; 
                }
                else
                {
                    cout<<run3<<" "<<runt3<<endl; 
                    cout<<run2<<" "<<runt2<<endl;
                }
            }
        }
        if (runt2 < runt3)
        {
            if (runt2 < runt1)
            {
                cout<<run2<<" "<<runt2<<endl;
                
                if (runt1 < runt3)
                {
                    cout<<run1<<" "<<runt1<<endl;
                    cout<<run3<<" "<<runt3<<endl;  
                }
                else
                {
                    cout<<run3<<" "<<runt3<<endl; 
                    cout<<run1<<" "<<runt1<<endl;
                }
            }
        }
        if (runt3 < runt2)
        {
            if (runt3 < runt1)
            {
                cout<<run3<<" "<<runt3<<endl; 
                
                if (runt1 < runt2)
                {
                    cout<<run1<<" "<<runt1<<endl;
                    cout<<run2<<" "<<runt2<<endl;
                }
                else
                {
                    cout<<run2<<" "<<runt2<<endl;
                    cout<<run1<<" "<<runt1<<endl;
                }
            }
        }
    
    cout<<endl;
    
            
    
    //Exit stage right
    

    return 0;
}

