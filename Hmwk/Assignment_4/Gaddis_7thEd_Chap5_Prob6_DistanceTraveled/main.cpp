/* 
   File:   main
   Author: Morban Zarate
   Created on October 16, 2016, 11:47 PM
   Purpose:  making a program that will calculate distance traveled 
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
    float speed1, hour1;  //the user's input of speed and hours traveled
    float distnc1;  //distance traveled
    
    //Input values
    cout<<"Input the speed you were going: "<<endl;
    cin>>speed1;
    
    cout<<"Input the hours you have drove: "<<endl;
    cin>>hour1;
    
    //Process values -> Map inputs to Outputs
    cout<<"Hour         Distance Traveled"<<endl;
    cout<<"______________________________"<<endl;
    
    for (int i = 1; i <= hour1; i++)
    {
        distnc1 = speed1 * i;

        cout<<i<<"                       "<<distnc1<<endl;
    }
    //Display Output
    
    //Exit Program
    return 0;
}