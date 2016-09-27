/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on September 21, 2016, 9:54 AM
 * Purpose: 
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
    float numGalln; //number of gallons of gas the car can hold
    float numMile;  //number of miles the car can be driven on a full tank
    float mileGall;  //the calculation to find how much miles per gallon for the vehicle
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"This program can calculate the miles your vehicle can be driven per gallon."<<endl;
    cout<<" "<<endl;
    cout<<"Enter number of gallons your car can hold? "<<endl;
    cin>>numGalln;
    cout<<"Enter the number of miles it can be driven on a full tank? "<<endl;
    cin>>numMile;
    mileGall = numMile/numGalln;
    cout<<"Your vehicle gas milage is "<<mileGall<<" miles per gallons"<<endl;
    
    //Exit
    return 0;
}

