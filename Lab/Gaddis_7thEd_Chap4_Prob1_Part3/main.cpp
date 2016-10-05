/* 
   File:   main
   Author: Morban Zarate
   Created on October 02, 2016, 8:51 PM
   Purpose: Make a program to determine what number is higher
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
    int inputA, inputB, inputC, inputD; //user's input to determine what # is higher 

    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This program can rearrange the numbers from greater to less."<<endl;
    cout<<"Input your first number: "<<endl;
    cin>>inputA;
    cout<<"Input your second number: "<<endl;
    cin>>inputB;
    cout<<"Input your third number: "<<endl;
    cin>>inputC;
    cout<<"Input you fourth number: "<<endl;
    cin>>inputD;
    cout<<""<<endl;
    
    //using conditional operators to determine the greater number
    
    //block one
    
    if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputB>inputC&inputB>inputD
            &inputC>inputD)
        cout<<inputA<<","<<inputB<<","<<inputC<<","<<inputD<<endl;
    
    else if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputB>inputC&inputB>inputD
            &inputD>inputC)
        cout<<inputA<<","<<inputB<<","<<inputD<<","<<inputC<<endl;
    
    else if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputC>inputB&inputC>inputD
            &inputB>inputD)
        cout<<inputA<<","<<inputC<<","<<inputB<<","<<inputD<<endl;
    
    else if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputC>inputB&inputC>inputD
            &inputD>inputB)
        cout<<inputA<<","<<inputC<<","<<inputD<<","<<inputB<<endl;
    
    else if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputD>inputB&inputD>inputC
            &inputB>inputC)
        cout<<inputA<<","<<inputD<<","<<inputB<<","<<inputC<<endl;
    
    else if (inputA>inputB&inputA>inputC&inputA>inputD
            &inputD>inputB&inputD>inputC
            &inputC>inputB)
        cout<<inputA<<","<<inputD<<","<<inputC<<","<<inputB<<endl;

    //block two
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputA>inputC&inputA>inputD
            &inputC>inputD)
        cout<<inputB<<","<<inputA<<","<<inputC<<","<<inputD<<endl;
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputA>inputC&inputA>inputD
            &inputD>inputC)
        cout<<inputB<<","<<inputA<<","<<inputD<<","<<inputC<<endl;
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputC>inputA&inputC>inputD
            &inputA>inputD)
        cout<<inputB<<","<<inputC<<","<<inputA<<","<<inputD<<endl;
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputC>inputA&inputC>inputD
            &inputD>inputA)
        cout<<inputB<<","<<inputC<<","<<inputD<<","<<inputA<<endl;
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputD>inputA&inputD>inputC
            &inputA>inputC)
        cout<<inputB<<","<<inputD<<","<<inputA<<","<<inputC<<endl;
    
    else if (inputB>inputA&inputB>inputC&inputB>inputD
            &inputD>inputA&inputD>inputC
            &inputC>inputA)
        cout<<inputB<<","<<inputD<<","<<inputC<<","<<inputA<<endl;
    
    //block three
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputA>inputB&inputA>inputD
            &inputB>inputD)
        cout<<inputC<<","<<inputA<<","<<inputB<<","<<inputD<<endl;
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputA>inputB&inputA>inputD
            &inputD>inputB)
        cout<<inputC<<","<<inputA<<","<<inputD<<","<<inputB<<endl;
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputB>inputA&inputB>inputD
            &inputA>inputD)
        cout<<inputC<<","<<inputB<<","<<inputA<<","<<inputD<<endl;
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputB>inputA&inputB>inputD
            &inputD>inputA)
        cout<<inputC<<","<<inputB<<","<<inputD<<","<<inputA<<endl;
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputD>inputA&inputD>inputB
            &inputA>inputB)
        cout<<inputC<<","<<inputD<<","<<inputA<<","<<inputB<<endl;
    
    else if (inputC>inputA&inputC>inputB&inputC>inputD
            &inputD>inputA&inputD>inputB
            &inputB>inputA)
        cout<<inputC<<","<<inputD<<","<<inputB<<","<<inputA<<endl;
    
    //block four
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputA>inputB&inputA>inputC
            &inputB>inputC)
        cout<<inputD<<","<<inputA<<","<<inputB<<","<<inputC<<endl;
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputA>inputB&inputA>inputC
            &inputC>inputD)
        cout<<inputD<<","<<inputA<<","<<inputC<<","<<inputD<<endl;
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputB>inputA&inputB>inputC
            &inputA>inputC)
        cout<<inputD<<","<<inputB<<","<<inputA<<","<<inputC<<endl;
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputB>inputA&inputB>inputC
            &inputC>inputA)
        cout<<inputD<<","<<inputB<<","<<inputC<<","<<inputA<<endl;
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputC>inputA&inputC>inputB
            &inputA>inputB)
        cout<<inputD<<","<<inputC<<","<<inputA<<","<<inputB<<endl;
    
    else if (inputD>inputA&inputD>inputB&inputD>inputC
            &inputC>inputA&inputC>inputB
            &inputB>inputA)
        cout<<inputD<<","<<inputC<<","<<inputB<<","<<inputA<<endl;
    
    //Display Output
    
    //Exit Program
    return 0;
}