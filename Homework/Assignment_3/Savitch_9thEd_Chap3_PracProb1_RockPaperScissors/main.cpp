/* 
 * File:   main.cpp
 * Author: Matthew Dahl
 * Created on June 22, 2022, 12:13 PM
 * Purpose: C++ Template- To be used in all future assignments
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions/Higher Dimensional arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char plyr1,plyr2;
    
    //Initialize Variables
    do{
        plyr1=rand()%4+80;//[80-83]
    }while(plyr1=='Q');
        
    do{
        plyr2=rand()%4+80;//[80-83]
    }while(plyr2=='Q');
    
    //Map Inputs to Outputs -> The Process
    if(plyr1==plyr2){
        cout<<"It's a tie"<<endl;
    }else if(plyr1=='P'){
        if(plyr2=='R')cout<<"Player 1 Wins"<<endl;
        else cout<<"Player 2 Wins"<<endl;
    }else if(plyr1=='R'){
        if(plyr2=='P')cout<<"Player 2 Wins"<<endl;
        else cout<<"Player 1 Wins"<<endl;
    }else{
        if(plyr2=='P')cout<<"Player 1 Wins"<<endl;
        else cout<<"Player 2 Wins"<<endl;
    }
    
    //Display Results 
    cout<<"Player 1 chooses "<<plyr1<<endl;
    cout<<"Player 2 chooses "<<plyr2<<endl;
    //Exit stage right
    
    

    return 0;
}

