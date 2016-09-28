/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 7:44 PM
   Purpose: Math Tutor!
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <ctime>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //get the system time
    unsigned seed = time(0);
    
    //seed the random number generator
    srand(seed);
    
    //Declaration of Variables
    unsigned short number1, number2, results, answer1;
    
    //Input values
    number1=rand()%900+100; //three digit random number
    number2=rand()%900+100; //three digit random number
    
    //Process values -> Map inputs to Outputs
    results = number1 + number2;  //the answer the users inputs w/ two random #
    
    //Display Output
    cout<<"Solve!"<<endl;
    cout<<"   "<<number1<<endl;
    cout<<" + "<<number2<<endl;
    cout<<"______"<<endl;
    
        //Asking user for their answer
    cout<<endl<<"Answer?"<<endl;
    cin>>answer1;
    cout<<endl;
    
    //Determine if correct or not
    cout<<"The answer is "<<(results==answer1?"Correct":"Incorrect")<<endl;
    cout<<"The answer was = "<<results<<endl;

    //Exit Program
    return 0;
}