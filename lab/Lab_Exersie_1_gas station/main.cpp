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
    float ggas,//Gas gauge percent full
          sizeg,//size of tank in gallons
          mpg,//Gas mileage
          filup,//gallons required to fill up
          reg1 , //Regular Gas at gas station 1
          mgs, // miles to gas station 1
          cfiup,//cost to fill up at gas station 1
          dist,//total distance driven back and forth to gas station 1
          cstdr,//cost to drive distance to and from gas station 1  
          totmil,//total cost with mileage to gas station 1
          ppgam,//price per gallon when adding mileage to station 1
          regl2,//Regular gas at gas station 2
          mgs2, //miles to gas station 2
          cfiup2,//cost to fill up at gas station 2
          dist2,//Total distance driven in miles back and forth to gas station 2
          cstdr2,//cost to drive distance to and from gas station 2
          totmil2,//total cost with mileage to gas station 2
          ppgam2;//price per gallon when adding mileage to station 2  
          
         
    //Initialize Variables
    ggas=75e-2;
    sizeg=22;
    mpg=17;
    reg1=425e-2;
    mgs=10;
    cstdr=5;
    
    regl2=409e-2;
    mgs2=20;
    cstdr2=96235e-4;
    
            
    
    //Map Inputs to Outputs -> The Process
    filup=sizeg*(1-ggas);
    cfiup=reg1*filup;
    dist=2*mgs;
    totmil=cfiup+cstdr;
    ppgam=totmil/filup;
    
    cfiup2=regl2*filup;
    dist2=2*mgs2;
    totmil2=cfiup2+cstdr2;
    ppgam2=totmil2/filup;
            
    
            
    
    
            
    
    //Display Results
    cout<<"Gas gauge percentage = "<<ggas*100<<" percent\n";
    cout<<"Size of tank in gallon = "<<sizeg<<" gallons\n";
    cout<<"Gas mileage = "<<mpg<<" mpg\n";
    cout<<"Gallons Required to fill up = "<<filup<<" gallons\n";
    cout<<endl;
    cout<<"Calculate cost of Gas Station 1\n";
    cout<<endl;
    cout<<"Regular Gas= $"<<reg1<<endl;
    cout<<"Miles to Gas station = "<<mgs<<" miles\n";
    cout<<"Cost to fill up = $"<<cfiup<<endl;
    cout<<"Total distance traveled in miles back and forth = "<<dist<<" miles\n";
    cout<<"Cost to drive distance = $"<<cstdr<<endl;
    cout<<"Total cost with mileage = $"<<totmil<<endl;
    cout<<"Price per gallon adding mileage = $"<<ppgam<<endl;
    cout<<endl;
    cout<<"Calculate cost of Gas Station 2\n";
    cout<<endl;
    cout<<"Regular Gas = $"<<regl2<<endl;
    cout<<"Miles to Gas Station 2 = "<<mgs2<<" miles\n";
    cout<<"Cost to fill up = $"<<cfiup2<<endl;
    cout<<"Total distance driven in miles to Gas Station 2 = "<<dist2<<" miles"
            "\n";
    cout<<"Cost to drive distance from gas station 2 = $"<<cstdr2<<endl;
    cout<<"Total cost with mileage to gas station = $"<<totmil2<<endl;
    cout<<"Price per gallon adding mileage to gas station 2 = $"<<ppgam2<<endl;
    
    
            
    
    //Exit stage right
    
    

    return 0;
}

