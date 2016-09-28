/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 3:34 PM
   Purpose: Make a program that will calculate the average rainfall.
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string month1, month2, month3;   //the months that are going to be inputted
    float amount1, amount2, amount3;    //the amount of rainfall in inches
    float avgAmnt;  //the average rainfall of the three months
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This program can calculate the average rainfall."<<endl;
    
    //inputing the first month's information
    cout<<" "<<endl;
    cout<<"Enter the first month: ";
    cin>>month1;
    cout<<"What is the amount of rain that fell in "<<month1<<" (inches)?: "<<endl;
    cin>>amount1;
    
    //inputing the second month's information
    cout<<"Enter the second month: ";
    cin>>month2;
    cout<<"What is the amount of rain that fell in "<<month2<<" (inches)?: "<<endl;
    cin>>amount2;
    
    //inputing the third month's information
    cout<<"Enter the third month: ";
    cin>>month3;
    cout<<"What is the amount of rain that fell in "<<month3<<" (inches)?: "<<endl;
    cin>>amount3;
    
    //Display Output
    avgAmnt = (amount1 + amount2 + amount3)/3;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<", is ";
    cout<<avgAmnt<<" inches."<<endl;
    
            
    
    //Exit Program
    return 0;
}