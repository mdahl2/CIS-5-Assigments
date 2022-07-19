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
    string s1,s2,e1,e2;
    //Initialize Variables
    cin>>s1>>s2;
    
    //Map Inputs to Outputs -> The Process
    if(s1=="Aries"||s1="Leo"||s1=="Sagittarius")e1="Fire";
    else if(s1=="Taurus"||s1=="Virgo"||s1=="Capricorn")e1="Fire";
    else if(s1=="Gemini"||s1=="Libra"||s1=="Aquarius")e1="Air";
    else if(s1=="Cancer"||s1=="Scorpio"||s1=="Pisces")e1="Water";
    
    if(s2=="Aries"||s2="Leo"||s2=="Sagittarius")e2="Fire";
    else if(s2=="Taurus"||s2=="Virgo"||s2=="Capricorn")e2="Earth";
    else if(s2=="Gemini"||s2=="Libra"||s2=="Aquarius")e2="Air";
    else if(s2=="Cancer"||s2=="Scorpio"||s2=="Pisces")e2="Water";
    
    
    //Display Results
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    if(e1==e2)cout<<s1<<" and "<<s2<<" are compatible "<<e1<<" signs.";
    else cout<<s1<<" and "<<s2<<" are not compatible signs.";
    
    //Exit stage right
    
    

    return 0;
}

