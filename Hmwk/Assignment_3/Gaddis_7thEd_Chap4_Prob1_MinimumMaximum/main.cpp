/* 
   File:   main
   Author: Morban Zarate
   Created on October 02, 2016, 8:51 PM
   Purpose: Make a program to determine what number is higher
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int inputA, inputB; //user's input to determine what # is higher 
    int outputA; //the outcome of which number is greater
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This program can determine what number is greater."<<endl;
    cout<<"Input your first number: "<<endl;
    cin>>inputA;
    cout<<"Input your second number: "<<endl;
    cin>>inputB;
    //using conditional operators to determine the greater number
    if (inputA>inputB)
        outputA=inputA;
    else
        outputA=inputB;
    cout<<"The greater number is "<<outputA<<endl;
    //Display Output
    
    //Exit Program
    return 0;
}