/* 
   File:   main
   Author: Morban Zarate
   Created on October 04, 2016, 7:06 PM
   Purpose: Change for a dollar game!
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
    float penn1, nick1, dime1, quart1;  //penny, nickel, dime, quarter
    
    float totValu;  //the total value at the end
    
    //Input values
    cout<<"Let's play a game! I'll ask how many pennies, nickels, dimes,"
            " and quarters, and you need to come up with a total value of"
            " a dollar!"<<endl;
    
    cout<<"How many pennies?"<<endl;
    cin>>penn1;
    
    cout<<"How many nickles?"<<endl;
    cin>>nick1;

    cout<<"How many dimes?"<<endl;
    cin>>dime1;
    
    cout<<"How many quarters?"<<endl;
    cin>>quart1;
    
    totValu = (.01 * penn1) + (.05 * nick1) + (.10 * dime1) + (.25 * quart1);
    
    if (totValu == 1)
        cout<<"Congratulations! You made $"<<totValu<<"!"<<endl;
    
    else 
        cout<<"You Lose! You made $"<<totValu<<"!"<<endl;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    return 0;
}