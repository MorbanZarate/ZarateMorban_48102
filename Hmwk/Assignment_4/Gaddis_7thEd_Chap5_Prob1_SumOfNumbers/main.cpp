/* 
   File:   main
   Author: Morban Zarate
   Created on October 11, 2016, 1:16 PM
   Purpose:  making a program to calculate the sum of numbers
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
    int numInpt = 0;    //user's number input
    int sumNumb = 0;    //the outcome of the sum
    
    //Input values
    cout<<"Please enter a positive integer: "<<endl;
    cin>>numInpt;
    
    //if input is < 0
    while (numInpt < 0)
    {
        cout<<"Please enter a positive integer ONLY."<<endl;
        cin>>numInpt;
    }
    
    //Process values -> Map inputs to Outputs
    for (int i = 1; i <= numInpt; i++)
    {
        sumNumb += i;
    }
    cout<<"The sum of these numbers is "<<sumNumb<<endl;
    
    //Display Output
    
    //Exit Program
    return 0;
}