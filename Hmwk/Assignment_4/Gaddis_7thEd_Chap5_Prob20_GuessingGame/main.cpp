/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on October 13, 2016, 12:25 PM
 * Purpose: Guessing Game
 */

//System Libraries Here
#include <iostream>
#include <cmath>    //math library
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int range, nGuess;
    int number, answer;
    
    //Input or initialize values Here
    cout<<"This is the guessing game"<<endl;
    cout<<"Choose the range for the number to guess"<<endl;
    cin>>range;
    
    
    //Process/Calculations Here
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
    number=rand()%(range+1);    //[0,range]
    
    //display results of each guess
    for(int guess=1; guess<=nGuess; guess++){
        cin>>answer;
        if(answer>number)cout<<"Guessed to high!"<<endl;
        else if (answer<number)cout<<"Guessed to low!"<<endl;
        else
            cout<<"You guessed the number!"<<endl;
    }
    
    //Output Located Here
    
    
    //Exit
    return 0;
}

