/* 
   File:   main
   Author: Morban Zarate
   Created on October 17, 11:05 PM
   Purpose:  Assignment 4 with Menu
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;  //Name-space used in the System Library
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    
    int menuItm;    //Choice from menu

    //Loop until users exits
    do{
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1"<<endl;
        cout<<"2.  Type 2  for Problem 3"<<endl;
        cout<<"3.  Type 3  for Problem 4"<<endl;
        cout<<"4.  Type 4  for Problem 5"<<endl;
        cout<<"5.  Type 5  for Problem 6"<<endl;
        cout<<"6.  Type 6  for Problem 7"<<endl;
        cout<<"7.  Type 7  for Problem 20"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){

            case 1:{

                cout<<"Inside Problem 1"<<endl;
                    //Declaration of Variables
                    int numInpt = 0;    //user's number input
                    int sumNumb = 0;    //the outcome of the sum
                    //Input values
                    cout<<"Please enter a positive integer: "<<endl;
                    cin>>numInpt;
                    //if input is < 0
                    while (numInpt < 0)
                    {
                        cout<<"Please enter a positive integer ONLY."<<endl;
                        cin>>numInpt;
                    }
                    //Process values -> Map inputs to Outputs
                    for (int i = 1; i <= numInpt; i++)
                    {
                        sumNumb += i;
                    }
                    cout<<"The sum of these numbers is "<<sumNumb<<endl;

                break;

            }

            case 2:{

                cout<<"Inside Problem 3"<<endl;
                    //Declaration of Variables
                    int minYear = 1;    //starting year
                    int maxYear = 25;   //last year
                    float sumOcLv = 0;
                    //Process values -> Map inputs to Outputs
                    cout<<"Table of ocean level risen per year."<<endl;
                    cout<<"----------------------------------------"<<endl;
                    for (int i = 1; i <= 25; i++)
                    {
                        sumOcLv += 1.5; //adding 1.5 mm into each year
                        cout<<"Year "<<i<<":                "<<sumOcLv<<" millimeters"<<endl;
                    }
                break;

            }

            case 3:{

                cout<<"Inside Problem 4"<<endl;
                    //Declaration of Variables
                    int minMins = 10;   //minimum minutes
                    int maxMins = 30;   //maximum minutes
                    float avgCals;
                    //Input values
                    cout<<"Table of how many calories burned:"<<endl;
                    cout<<"__________________________________"<<endl;
                    for (int i = 10; i <= 30; i+=5)
                    {
                        avgCals += 3.9; //adding 3.9 calories per minute
                        cout<<i<<" Minutes = "<<avgCals<<" Calories."<<endl;
                    }
                break;

            }

            case 4:{

                cout<<"Inside Problem 5"<<endl;
                    //Declaration of Variables
                    int minYear = 0;    //minimum year starting at zero; beginning year being $2,500
                    int maxYear = 6;    //maximum year which is the 6th year
                    float startPr = 2500;    // starting price
                    //Input values
                    cout<<"Year 0 = $2500"<<endl;
                    //Process values -> Map inputs to Outputs
                    for(int i = 1; i <= maxYear; i++)
                    {
                        startPr += (.04*startPr);   //4% multiple current price of membership
                        cout<<"Year "<<i<<" = $"<<startPr<<endl;
                    }
                break;

            }

            case 5:{

                cout<<"Inside Problem 6"<<endl;
                    //Declaration of Variables
                    float speed1, hour1;  //the user's input of speed and hours traveled
                    float distnc1;  //distance traveled
                    //Input values
                    cout<<"Input the speed you were going: "<<endl;
                    cin>>speed1;
                    cout<<"Input the hours you have drove: "<<endl;
                    cin>>hour1;
                    //Process values -> Map inputs to Outputs
                    cout<<"Hour         Distance Traveled"<<endl;
                    cout<<"______________________________"<<endl;
                    for (int i = 1; i <= hour1; i++)
                    {
                        distnc1 = speed1 * i;
                        cout<<i<<"                       "<<distnc1<<endl;
                    }

                break;

            }

            case 6:{

                cout<<"Inside Problem 7"<<endl;
                    //Declaration of Variables
                    float numDays;  //the user's input of number of days
                    float numPenn;  //the number of pennies the user will have
                    //Input values
                    cout<<"Enter the # of days: "<<endl;
                    cin>>numDays;
                    cout<<"# of Days            #Pennies"<<endl;
                    cout<<"_____________________________"<<endl;
                    //Process values -> Map inputs to Outputs
                    for (int i = 1; i <= numDays; i++)
                    {
                        numPenn = pow(2.0,i-1);
                        cout<<i<<"                   "<<numPenn<<endl;
                    }

                break;

            }

            case 7:{

                cout<<"Inside Problem 20"<<endl;

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
                break;

            }//End Case

        }//End the Switch/Case

    }while(menuItm>0&&menuItm<=7);//Ends the Do-While Loop

    //Exit Program
    return 0;
}