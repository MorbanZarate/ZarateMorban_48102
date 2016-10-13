/* 
   File:   main
   Author: Morban Zarate
   Created on October 11, 2016, 1:30 PM
   Purpose:  making a table to show the ocean level in the next 25 years
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
    int minYear = 1;    //starting year
    int maxYear = 25;   //last year
    float sumOcLv = 0;
    
    //Input values
    
    
    
    //Process values -> Map inputs to Outputs
    cout<<"Table of ocean level risen per year."<<endl;
    cout<<"----------------------------------------"<<endl;
    
    for (int i = 1; i <= 25; i++)
    {
        sumOcLv += 1.5; //adding 1.5 mm into each year
        cout<<"Year "<<i<<":                "<<sumOcLv<<" millimeters"<<endl;
    }
    
    
    //Display Output
    
    
    //Exit Program
    return 0;
}