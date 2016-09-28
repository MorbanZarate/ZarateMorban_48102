/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 7:17 PM
   Purpose: Calculate the assessment value and the property tax.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float actValu;  //the user's input on the actual value of the property
    float asValue;  //assessment value is 60% of the actual value
    float propTax;  //property tax is 64 cents for each $100 of assessment(.64%)
    
    
    //Input values
    
    //Process values -> Map inputs to Outputs
        //asking for the actual value of property
    cout<<"What is the actual value of the piece of property? "<<endl;
    cin>>actValu;
    cout<<" "<<endl; //making a space
    
    //calculations to find the assessment value and property tax
    asValue = actValu*.60;  //actual value * 60%
    propTax = asValue*.0064;    //assessment value * .64%
    
    //display output
    cout<<setprecision(2)<<fixed<<showpoint<<right;
    cout<<"Actual Value of Property:  $ "<<actValu<<endl; 
    cout<<"Assessment Value:          $ "<<asValue<<endl;
    cout<<"Property Tax:              $ "<<propTax<<endl;
    
    //Exit Program
    return 0;
}