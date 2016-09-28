/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 6:50 PM
   Purpose: Calculate the number of Widgets based on the weight of the pallet.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float widWght = 9.2; //the weight of each widget 9.2 pounds

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float palWght;  //the weight of the pallet without the widgets
    float palWidg;  //the weight of the pallet with the widgets
    float numWidg;  //the number of widgets on the pallet    
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
        //asking the weight of the pallet by itself
    cout<<"Without the widgets, how much does the pallet weight(pounds)? "<<endl;
    cin>>palWght;
    
        //asking the weight of the pallet with the widgets
    cout<<"With the widgets, how much does the pallet weight(pounds)? "<<endl;
    cin>>palWidg;
    
        //calculations for the amount of widgets on the pallet
    numWidg = (palWidg-palWght)/widWght;
    
    //Display Output
    cout<<"With the pallet weighing "<<palWght<<" pounds and the total weight"
          " of the pallet is "<<palWidg<<" pounds, then there are "<<numWidg<<
          " widgets on top the pallet"<<endl;
    
    //Exit Program
    return 0;
}