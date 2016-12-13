/* 
   File:   main
   Author: Morban Zarate
   Created on October 18, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries

#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries
    
//Global Constants
    
//Function prototypes
void divide (float, float);

//Execution Begins Here!
    
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float num1, num2;
    //Input values
    cout<<"enter two numbers and I will divide the first number by the second number: "<<endl;
    cin>>num1>>num2;
    divide (num1, num2);
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    
    return 0;
}

void divide (float arg1, float arg2)
{
    if (arg2 == 0)
    {
        cout<<"Sorry, I cannot divide by zero"<<endl;
        return;
    }
    cout<<"The quotient is "<<(arg1 / arg2)<<endl;
}
