/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:57 PM
   Purpose:  Calculating the tip on a restaurant bill.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100; //conversion to Percentage
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mealChr, taxPerc, mealTax, totMeal, tipPerc, totTip, totCost;    //meal charge, tax percentage, meal tax, total meal cost, tip percentage, total tip
    //Input values
    mealChr = 44.50;    //meal charge is $44.50
    taxPerc = 6.75/PERCENT;    //meal tax is 6.75 percent
    mealTax = mealChr*taxPerc;   //total tax for meal
    totMeal = mealChr+mealTax; //total price of the meal after taxes
    tipPerc = 15.0/PERCENT;   //tip percentage is 15 percent
    totTip = totMeal*tipPerc;   //total tip at 15 percent
    totCost = totMeal+totTip;   //total cost of the meal with tip
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Meal Cost: $"<<mealChr<<endl;
    cout<<"Tax:       $"<<mealTax<<endl;
    cout<<"15% Tip:   $"<<totTip<<endl;
    cout<<" "<<endl;
    cout<<"Total:     $"<<totCost<<endl;
    //Exit Program
    return 0;
}