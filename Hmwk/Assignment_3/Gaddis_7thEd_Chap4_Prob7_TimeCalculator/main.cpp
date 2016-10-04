/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on September 29, 2016, 12:23 PM
 * Purpose: Calculate time with the seconds given
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int totSecs;  //user's input of seconds
    int sec, min, totMins, hours, totHour, totDays;   //seconds, minutes, total minutes, hours, total hours, total days
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    cout<<"This program can convert seconds to minutes, hours,and days."<<endl;
    cout<<"Input the seconds: "<<endl;
    cin>>totSecs;
    
    //calculations
    sec = totSecs%60;
    totMins = totSecs/60;
    min = totMins%60;
    totHour = totMins/60;
    hours = totHour%24;
    totDays = totHour/24;
    
    cout<<" "<<endl;
    cout<<"There are "<<totDays<<"-Days: "<<hours<<"-Hours: "<<min<<"-Minutes: "<<sec<<"-Seconds."<<endl;
    
    
    //Output Located Here
    
    
    //Exit
    return 0;
}

