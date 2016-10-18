/* 
   File:   main
   Author: Morban Zarate
   Created on October 13, 2016, 1:56 PM
   Purpose: Make a table of how much calories burned w/ loop.  
 */

//System Libraries
#include <iostream> //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int minMins = 10;   //minimum minutes
    int maxMins = 30;   //maximum minutes
    float avgCals;
    
    //Input values
    cout<<"Table of how many calories burned:"<<endl;
    cout<<"__________________________________"<<endl;
    
    for (int i = 10; i <= 30; i+=5)
    {
        avgCals += 3.9; //adding 3.9 calories per minute
        cout<<i<<" Minutes = "<<avgCals<<" Calories."<<endl;
    }
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    
    
    //Exit Program
    return 0;
}