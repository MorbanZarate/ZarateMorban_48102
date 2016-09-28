/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 8:07 PM
   Purpose: Calculate the Month's Sales Tax
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration of Variables
    string month1;  //the month that the user decides to input
    float totAmnt;  //the total amount that was collected for the month
    float sales1, cntyTax, statTax, totTax;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
        
        //asking user for the month
    cout<<"For what month are we calculating the sales tax? "<<endl;
    cin>>month1;
        
        //asking user for the total collected for the inputted month
    cout<<"What's the total amount of that was collected for the month of "
        <<month1<<"? "<<endl;
    cin>>totAmnt;
    
        //calculations for the total sale taxes
    sales1 = totAmnt/1.06;  //formula given to fins sales; S=T/1.06
    cntyTax = sales1*.02;   //sales * county tax (2%)
    statTax = sales1*.04;   //sales * state tax (4%)
    totTax = cntyTax+statTax;   //total tax
    cout<<""<<endl; //space
    
    //Display Output
    cout<<setprecision(2)<<fixed<<showpoint<<right;
    cout<<"Month: "<<month1<<endl;
    cout<<"------------"<<endl;
    cout<<"Total Collected:  $ "<<totAmnt<<endl;
    cout<<"Sales:            $ "<<sales1<<endl;
    cout<<"County Sales Tax: $ "<<cntyTax<<endl;
    cout<<"State Sales Tax:  $ "<<statTax<<endl;
    cout<<"Total Sales Tax:  $ "<<totTax<<endl;
    
    
    
    //Exit Program
    return 0;
}