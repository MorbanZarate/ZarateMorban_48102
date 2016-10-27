/* 
   File:   main
   Author: Morban Zarate
   Created on October 18, 2016, 12:00 PM
   Purpose:  Blackjacks!
 */

//System Libraries

#include <iostream>   //Input/Output objects
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;  //Name-space used in the System Library

//User Libraries
    
//Global Constants
    
//Function prototypes
    
//Execution Begins Here!
    
int main(int argc, char** argv) {
    
    //Declaration of Variables
    srand (time(0));
    int a = 0, b = 0, c = 0, d = 0, f = 0;  //user's cards
    int h = 0, i = 0, j = 0, k = 0, l = 0;  //dealer's cards
    string hitStay; //user's response to receive another card or not
    
    //Input values
    cout<<"**********************"<<endl;
    cout<<"Welcome to Blackjacks!"<<endl;   //introduction
    cout<<"   Are you ready?!"<<endl;
    cout<<"    Here we go!!"<<endl;
    cout<<"**********************"<<endl;
    
    a=rand()%10+1;  //random card generator
    b=rand()%10+1;  //random card generator
    
if (a == 1)
        {
            string yes;
            cout << "Your cards are " << a << " " << b << endl;
            cout << "Do you want to change ace card to eleven" 
                    " ( y / n )"<<endl;
            cin >> yes;
            if(yes == "y")
            {
                a = 11;
            }
        }
        else if(b == 1)
        {
            string yes;
            cout << "Your cards are " << a << " " << b <<endl;
            cout << "Do you want to change ace card to eleven"
                    " ( y / n ) "<<endl;
            cin >> yes;
            if(yes == "y")
            {
                b = 11;
            }
        }
        cout <<"Your cards are: "<<endl;   //shows all the cards so far
        cout <<"Card 1: "<<a <<endl;  
        cout <<"Card 2: "<<b <<endl;
        cout<<" "<<endl;
        cout<<"Hit or Stay?! ( h / s )"<<endl;
        cin>>hitStay;
        
        
        
    //Process values -> Map inputs to Outputs
    
    //Display Output
    
    //Exit Program
    
    return 0;
}