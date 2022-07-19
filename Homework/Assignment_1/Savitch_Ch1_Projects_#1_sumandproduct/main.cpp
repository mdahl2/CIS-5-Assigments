/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 * Created on June 24, 2022, 1:15 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int RT1,RT2,Sum,Product;
    cout<<"This program will find the sum and"
            " product of two numbers.\n";
    cout<<"\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter first number\n";
    cin>> RT1;
    cout<<"Enter second number\n";
    cin>> RT2;
    Sum=RT1+RT2;
    Product=RT1*RT2;
    cout<<"Your sum will be " << Sum << ".\n";
    cout<< "and your product will be ";
    cout<< Product;
    
            
    
            
          

    return 0;
}

