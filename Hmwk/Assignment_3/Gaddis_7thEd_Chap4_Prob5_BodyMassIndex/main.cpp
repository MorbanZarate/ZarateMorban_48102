/* 
   File:   main
   Author: Morban Zarate
   Created on October 4, 2016, 4:44 PM
   Purpose: Calculate the user's BMI and determine if the user's body
            is overweight, underweight, or optimal 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float weight1, height1; // user's input on weight and height
    float bdMsInx;  //body mass index
    
    //Input values
    cout<<"To determine your BMI, please enter your weight in pounds"<<endl;
    cin>>weight1;
    cout<<"Now, enter your height in inches"<<endl;
    cin>>height1;
    
    bdMsInx = weight1 * 703 / (height1 * height1);
    
    if (bdMsInx > 25)
        cout<<"Your BMI is "<<bdMsInx<<". You are consider to be overweight."<<endl;
    
    else if (bdMsInx < 18.5)
        cout<<"Your BMI is "<<bdMsInx<<". You are consider to be underweight."<<endl;
    
    else if (25 >= bdMsInx && bdMsInx >= 18.5 )
        cout<<"Your BMI is "<<bdMsInx<<". You are consider OPTIMAL."<<endl;
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    return 0;
}