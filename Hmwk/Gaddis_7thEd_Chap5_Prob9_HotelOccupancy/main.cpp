/* 
   File:   main
   Author: Morban Zarate
   Created on October 17, 2016, 10:38 PM
   Purpose: Display the available rooms in a hotel
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
    float numFlr, numRms, numRmUs;  //user's input of number of floor, number of rooms, and number of rooms used
    
    //Input values
    cout<<"Enter the number of floors your hotel has: "<<endl;
    cin>>numFlr;
    
    for (int i = 1; i <= numFlr; i++)
        cout<<"For floor "<<i<<", how many rooms does this floor have and how many rooms are being occupied? ";
        cin>>numRms, numRmUs;
        cout<<""<<endl;
        
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    return 0;
}