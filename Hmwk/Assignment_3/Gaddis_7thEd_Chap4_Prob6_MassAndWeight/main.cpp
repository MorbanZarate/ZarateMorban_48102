/* 
   File:   main
   Author: Morban Zarate
   Created on October 04, 2016, 6:28 PM
   Purpose: Make a program to determine if the object's mass is too heavy or too light  
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
    float weight1;  //the weight of the object
    float newton1;  //weight(newton) = mass(input) * 9.8
    
    //Input values
    cout<<"Enter the object's mass in kilograms: "<<endl;
    cin>>weight1;
    
    newton1 = weight1 * 9.8;
    
    if (newton1 > 1000)
        cout<<"The object's weight is "<<newton1<<". It is too heavy."<<endl;
    
    else if (newton1 < 10)
        cout<<"The object's weight is "<<newton1<<". It is too light."<<endl;
    else 
        cout<<"The object's weight is "<<newton1<<"."<<endl;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    return 0;
}