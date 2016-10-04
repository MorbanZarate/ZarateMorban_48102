/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:36 PM
   Purpose: Converting a number to a Roman Numeral
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <cmath>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int choiceA;    // the number that the user inputs to convert
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This program can convert a number to a Roman Numeral."<<endl;
    cout<<"Please, input a number that's between #1-10: "<<endl;
    cin>>choiceA;
    
    //switch statement
    switch (choiceA)
    {
        case 1: cout<<"I.\n";
                  break;
        case 2: cout<<"II.\n";
                  break;
        case 3: cout<<"III.\n";
                  break;                  
        case 4: cout<<"IV.\n";
                  break;
        case 5: cout<<"V.\n";
                  break;
        case 6: cout<<"VI.\n";
                  break;
        case 7: cout<<"VII.\n";
                  break;
        case 8: cout<<"VIII.\n";
                  break;
        case 9: cout<<"IX.\n";
                  break;
        case 10: cout<<"X.\n";
                  break;
        default: cout<<"You did not enter a number between #1-10!"<<endl;                  
    }
    
    //Display Output
    
    //Exit Program
    return 0;
}