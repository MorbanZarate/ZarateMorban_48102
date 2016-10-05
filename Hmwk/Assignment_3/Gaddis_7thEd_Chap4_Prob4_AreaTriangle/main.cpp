/* 
   File:   main
   Author: Morban Zarate
   Created on September 18, 2016, 9:36 PM
   Purpose: make a program to calculate which rectangle has a bigger area
            by inputting the length and width
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
    float width1, length1;//the user's input of the first rectangle's dimensions
    float width2, length2;//" " second " "
    float area1,area2;  //areas of the two rectangle
    
    
    //Input values
    cout<<"Input the first rectangle's Width and Length"<<endl;
    cin>>width1;
    cin>>length1;
    
    cout<<"Input the second rectangle's Width and Length"<<endl;
    cin>>width2;
    cin>>length2;
    
    if (width1*length1>width2*length2)
        cout<<"The first rectangle has a larger area."<<endl;
    else if (width1*length1<width2*length2)
        cout<<"The second rectangle has a larger area."<<endl;
    else if (width1*length1==width2*length2)
        cout<<"Both rectangles have the same area."<<endl;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    return 0;
}