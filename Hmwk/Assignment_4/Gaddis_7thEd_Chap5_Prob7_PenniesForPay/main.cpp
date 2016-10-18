/* 
   File:   main
   Author: Morban Zarate
   Created on October 17, 2016, 10:02 PM
   Purpose:  Calculate how much pennies will earn depending the # of days inputted
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
    float numDays;  //the user's input of number of days
    float numPenn;  //the number of pennies the user will have
    
    //Input values
    cout<<"Enter the # of days: "<<endl;
    cin>>numDays;
    
    cout<<"# of Days            #Pennies"<<endl;
    cout<<"_____________________________"<<endl;
    
    //Process values -> Map inputs to Outputs
    for (int i = 1; i <= numDays; i++)
    {

        numPenn = pow(2.0,i-1);
        
        cout<<i<<"                   "<<numPenn<<endl;

    }
    
    //Display Output
    
    
    //Exit Program
    return 0;
}