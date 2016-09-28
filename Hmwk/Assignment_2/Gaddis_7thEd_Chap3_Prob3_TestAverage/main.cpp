/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on September 21, 2016, 10:45 AM
 * Purpose: Calculating the Average Test Scores
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short int test1, test2, test3, test4, test5;    //Test score #1-5
    float avgTest; //Average test
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<setprecision(1)<<fixed<<showpoint<<right;
    cout<<"This program can calculate the average of the five test scores."<<endl;
    cout<<" "<<endl;
    cout<<"Enter test score number 1: "<<endl;
    cin>>test1;
    cout<<"Enter test score number 2: "<<endl;
    cin>>test2;    
    cout<<"Enter test score number 3: "<<endl;
    cin>>test3;    
    cout<<"Enter test score number 4: "<<endl;
    cin>>test4;    
    cout<<"Enter test score number 5: "<<endl;
    cin>>test5;
    avgTest = (test1 + test2 + test3 + test4 + test5)/5;
    cout<<"The average is "<<avgTest<<endl;
    
    //Exit
    return 0;
}

