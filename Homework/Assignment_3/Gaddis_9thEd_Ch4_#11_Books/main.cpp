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
    
    int book;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> The Process
    
    //Display Results
    
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>book;
    
    if(book==0)
    {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 0\n";
    }
    else if(book==1)
    {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 5\n";
    }
    else if(book==2)
    {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 15\n";
    }
    else if (book==3)
    {
        cout<<"Books purchased =  "<<book<<endl;  
        cout<<"Points earned   = 30\n";
    }      
    else if (book>=4)
    {
        cout<<"Books purchased =  "<<book<<endl; 
        cout<<"Points earned   = 60\n";
    }
    
    
        
  //Exit stage right
    
    

    return 0;
}

