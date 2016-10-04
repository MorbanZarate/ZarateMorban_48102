/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:36 PM
   Purpose: Make a program to determine if the date is Magic!
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int month1, day1, year1;    //the user's input for month, day, and year
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This Program determines if the date is magic!"<<endl;
    
    cout<<"Input the Month(in numeric form)"<<endl;
    cin>>month1;
    
    cout<<"Input the Day"<<endl;
    cin>>day1;
    
    cout<<"Input the Year(the last two digits)"<<endl;
    cin>>year1;
    
    //the calculations if the date are Magic!
    if (month1 * day1 < year1)
        cout<<"This Date is not Magic."<<endl;
    else if (month1 * day1 > year1)
        cout<<"This Date is not Magic."<<endl;
    else
        cout<<"This Date is Magic!!"<<endl;
    
    //Display Output
    
    //Exit Program
    return 0;
}