/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:36 PM
   Purpose:  
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
    float purcItm, statTax, counTax, totTax, saleTax;    //purchased item, state tax, county tax, total tax, sale tax
    //Input values
    purcItm = 52;   //purchased item is 52 dollars
    statTax = .04;  //state tax is four percent
    counTax = .02;  // county tax is two percent
    //Process values -> Map inputs to Outputs
    totTax = statTax+counTax;
    saleTax = purcItm*totTax;
    //Display Output
    cout<<"If the purchased item costed $"<<purcItm<<endl;
    cout<<"and the state sale tax is "<<statTax*100<<"%"<<endl;
    cout<<"and the county sale tax is "<<counTax*100<<"%"<<endl;
    cout<<"then, the total sale tax for this purchased item is $"<<saleTax<<"."<<endl;
    //Exit Program
    return 0;
}