/* 
   File:   main
   Author: Morban Zarate
   Created on September 20, 2016, 4:11 PM
   Purpose:  Calculate Subtotal and Sale Total.
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <iomanip>
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT = 100;    //conversion to percentage
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float item1, item2, item3, item4, item5;    //items #1-5
    float saleTax;  //sale tax
    float totItPr;  //total price of all items
    float totalAm;  //total amount including tax
    
    //Input values
    item1 = 12.95;  //item one cost $12.95
    item2 = 24.95;  //item two cost $24.95
    item3 = 6.95;   //item three cost $6.95
    item4 = 14.95;  //item four cost $14.95
    item5 = 3.95;   //item five cost $3.95
    
    totItPr = item1+item2+item3+item4+item5;    //total price of all items
    
    saleTax = totItPr*(6/PERCENT);  //total tax - sale tax is 6%
    
    totalAm = totItPr+saleTax; //total value of the five items including tax
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Item 1   = $"<<item1<<endl;
    cout<<"Item 2   = $"<<item2<<endl;
    cout<<"Item 3   = $"<<item3<<endl;
    cout<<"Item 4   = $"<<item4<<endl;
    cout<<"Item 5   = $"<<item5<<endl;
    cout<<" "<<endl;
    cout<<"Subtotal = $"<<totItPr<<endl;
    cout<<"6% Tax   = $"<<setw(4)<<saleTax<<endl;
    cout<<" "<<endl;
    cout<<"Total    = $"<<totalAm<<endl;
    
    //Display Output
    
    //Exit Program
    return 0;
}