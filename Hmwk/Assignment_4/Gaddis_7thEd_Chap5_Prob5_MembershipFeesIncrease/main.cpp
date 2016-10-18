/* 
   File:   main
   Author: Morban Zarate
   Created on October 13, 2016, 2:38 PM
   Purpose:  a program to calculate the total cost of the annual fee
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
    int minYear = 0;    //minimum year starting at zero; beginning year being $2,500
    int maxYear = 6;    //maximum year which is the 6th year
    float startPr = 2500;    // starting price
    
    
    //Input values
    
    cout<<"Year 0 = $2500"<<endl;
    //Process values -> Map inputs to Outputs
    for(int i = 1; i <= maxYear; i++)
    {
        startPr += (.04*startPr);   //4% multiple current price of membership
        cout<<"Year "<<i<<" = $"<<startPr<<endl;
        
    }
    
    //Display Output
    
    //Exit Program
    return 0;
}