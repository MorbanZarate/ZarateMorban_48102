/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on September 21, 2016, 10:18 AM
 * Purpose: Calculating the total sales of the tickets.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float classA, classB, classC; 
    float answer1, answer2, answer3;
    float result1;
    classA = 15.00; //Class A tickets cost $15.00
    classB = 12.00; //Class B tickets cost $12.00
    classC = 9.00;  //Class C tickets cost $9.00
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    cout<<setprecision(2)<<fixed<<showpoint<<right;
    cout<<"This program can calculate the total income from the ticket sales. "<<endl;
    cout<<" "<<endl;
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>answer1;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>answer2;
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>answer3;
    result1 = (answer1*15.00)+(answer2*12.00)+(answer3*9.00);
    cout<<"The total income from the ticket sales is $"<<result1<<endl;

    
    //Output Located Here
    
    //Exit
    return 0;
}

