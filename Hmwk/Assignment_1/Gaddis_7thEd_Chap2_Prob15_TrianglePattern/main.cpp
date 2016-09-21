/* 
   File:   main
   Author: Morban Zarate
   Created on September 20, 2016, 5:15 PM
   Purpose: Display a Triangle Pattern
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
    char s=' '; //the space character
    char t; //character used to create the Triangle
    
    //Input values
    cout<<"What character would you like to use to make a Triangle? ";
    cin>>t;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    cout<<s<<s<<s<<s<<t<<s<<s<<s<<endl;
    cout<<s<<s<<s<<t<<t<<t<<s<<s<<endl;
    cout<<s<<s<<t<<t<<t<<t<<t<<s<<endl;
    cout<<s<<t<<t<<t<<t<<t<<t<<t<<endl;
    
    
    
    //Exit Program
    return 0;
}