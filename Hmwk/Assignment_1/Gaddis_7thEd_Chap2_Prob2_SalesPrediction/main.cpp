/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:17 PM
   Purpose: Obtain what East Coast division will generate.
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
     float totSale,divPerc,totProf; //total sales, division percentage, total profit
    //Input values
    totSale = 4.6e6;    //$4.6 million
    divPerc = .62;  //62 percent
    //Process values -> Map inputs to Outputs
    totProf = totSale*divPerc;  //total sales * division percentage = total profit
    //Display Output
    cout<<"The East Coast division will generate $ "<<totProf<<" if the total sales are $ "<<totSale<<"."<<endl;

    //Exit Program
    return 0;
}