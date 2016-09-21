/* 
   File:   main
   Author: Morban Zarate
   Created on September 20, 2016, 3:51 PM
   Purpose:  Displaying the Annual Pay
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
    float payAmnt = 1700.00;    //employee earns $1,700.00 each pay period
    int payPerd = 26;   //26 pay periods per year
    float annlPay = payAmnt*payPerd;    // total annual pay
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"payAmount  = $"<<payAmnt<<endl;
    cout<<" "<<endl;
    cout<<"payPeriods =  "<<payPerd<<endl;
    cout<<" "<<endl;
    cout<<"annualPay  = $"<<annlPay<<endl;
    
    //Exit Program
    return 0;
}