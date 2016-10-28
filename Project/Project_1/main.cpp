/* 
   File:   main
   Author: Morban Zarate
   Created on October 20, 2016, 2:00 PM
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
    srand (time(0));    //random number generator
    int a = 0, b = 0, c = 0, d = 0, e = 0;  //user's cards
    int f = 0, g = 0, h = 0, i = 0, j = 0;  //dealer's cards
    string hitStay; //user's response to receive another card or not
    
    //Input values
    cout<<"**********************"<<endl;
    cout<<"Welcome to Blackjacks!"<<endl;   //introduction
    cout<<"   Are you ready?!"<<endl;
    cout<<"    Here we go!!"<<endl;
    cout<<"**********************"<<endl;
    
    //Player's first two cards
    a=rand()%10+1;  //random card generator
    b=rand()%10+1;  //random card generator
    
    if (a == 1)
        {
        string yes;
        cout<<"Your cards are " << a << " " << b << endl;
        cout<<"Do you want to change ace card to eleven" 
              " ( y / n ) "<<endl;
        cin >> yes;
        if(yes == "y")
            {
            a = 11;
            }
        }
    else if(b == 1)
        {
        string yes;
        cout<<"Your cards are " << a << " " << b <<endl;
        cout<<"Do you want to change ace card to eleven"
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
    if (a + b == 21)
        {
        cout<<"21! You Win!"<<endl;
        return 0;
        }
    cout<<" "<<endl;
    
    //Player's opportunity to continue
    cout<<"Hit or Stay?! ( h / s )"<<endl;
    cin>>hitStay;
    
    //Player's third card
    if(hitStay == "h")
        {
            c = rand()%10+1;    //random card generator
            if(c == 1)
                {
                string yes;
                cout <<"Your cards are "<<a<<" "<<b<<" "<<c<<endl;
                cout <<"Do you want to change ace card to eleven? "
                       " ( y / n ) "<<endl;
                cin>>yes;
                if(yes == "y")
                    {
                    c = 11;
                    }
                }
            
            cout<<"New card is: "<<c<<endl;
            cout<<"Your cards are: "<<endl;   
            cout<<"Card 1: "<<a<<endl;  
            cout<<"Card 2: "<<b<<endl;
            cout<<"Card 3: "<<c<<endl;
            cout<<" "<<endl;
            
            //win/lose/continue calculations
            if (a + b + c == 21)
                {
                cout<<"21! You Win!"<<endl;
                return 0;
                }
            if (a + b + c > 21)
                {
                int cardTot = a + b + c;
                cout<<"You got "<<cardTot<<". You Lose!"<<endl;
                return 0;
                }
            
            //Player's opportunity to continue 
            cout<<"Hit or Stay?! ( h / s )"<<endl;
            cin>>hitStay;

            //Player's fourth card
            if(hitStay == "h")
                {
                    d = rand()%10+1;    //random card generator
                    if(d == 1)
                        {
                        string yes;
                        cout<<"Your cards are "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                        cout<<"Do you want to change ace card to eleven? "
                              " ( y / n ) "<<endl;
                        cin>>yes;
                        if(yes == "y")
                            {
                            d = 11;
                            }
                        }

                    cout<<"new card is: "<<d<<endl;
                    cout<<"Your cards are: "<<endl;   
                    cout<<"Card 1: "<<a<<endl;  
                    cout<<"Card 2: "<<b<<endl;
                    cout<<"Card 3: "<<c<<endl;
                    cout<<"Card 4: "<<d<<endl;
                    cout<<" "<<endl;

                    //win/lose/continue calculations
                    if (a + b + c + d == 21)
                        {
                        cout<<"21! You Win!"<<endl;
                        return 0;
                        }
                    if (a + b + c + d > 21)
                        {
                        int cardTot = a + b + c + d;
                        cout<<"You got "<<cardTot<<". You Lose!"<<endl;
                        return 0;
                        }
                    
                    //Player's opportunity to continue
                    cout<<"Hit or Stay?! ( h / s )"<<endl;
                    cin>>hitStay;

                    //Player's fifth card
                    if(hitStay == "h")
                        {
                            e = rand()%10+1;    //random card generator
                            if(e == 1)
                            {
                                string yes;
                                cout<<"Your cards are "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
                                cout<<"Do you want to change ace card to eleven? "
                                       " ( y / n ) "<<endl;
                                cin>>yes;
                            if(yes == "y")
                                {
                                    e = 11;
                                }
                            }

                            cout<<"new card is: "<<e<<endl;
                            cout<<"Your cards are: "<<endl;   
                            cout<<"Card 1: "<<a<<endl;  
                            cout<<"Card 2: "<<b<<endl;
                            cout<<"Card 3: "<<c<<endl;
                            cout<<"Card 4: "<<d<<endl;
                            cout<<"Card 5: "<<e<<endl;
                            cout<<" "<<endl;

                            //win/lose/continue calculations
                            if (a + b + c + d + e == 21)
                                {
                                cout<<"21! You Win!"<<endl;
                                return 0;
                                }
                            if (a + b + c + d + e > 21)
                                {
                                int cardTot = a + b + c + d + e;
                                cout<<"You have "<<cardTot<<". You Lose!"<<endl;
                                return 0;
                                }
                        }
                }
        }
    
    //Player's final results
    int player = a + b + c + d + e;
    cout<<"Here is what you have!"<<endl;
    cout<<"Card 1: "<<a<<endl;
    cout<<"Card 2: "<<b<<endl;
    cout<<"Card 3: "<<c<<endl;
    cout<<"Card 4: "<<d<<endl;
    cout<<"Card 5: "<<e<<endl;
    cout<<"You have "<<player<<"."<<endl;
    
    //Dealer's turn
    cout<<"**********************"<<endl;
    cout<<"***Dealer's turn!*****"<<endl;
    cout<<"**********************"<<endl;
    cout<<" "<<endl;
    
    //pause
    cout<<"Push any character and ENTER to continue!"<<endl;
    string enter;
    cin>>enter;
    
    //Dealer's first two cards
    f = rand()%10+1;
    g = rand()%10+1;
    cout<<"Card 1: "<<f<<endl;
    cout<<"Card 2: "<<g<<endl;
    if (f + g == 21)
        {
        cout<<"21! Dealer Wins!"<<endl;
        return 0;
        }
    else if (f + g > player)
        {
        int dealer = f + g;
        cout<<"Dealer has "<<dealer<<". You have "<<"."<<endl;
        cout<<"Dealer Wins!"<<endl;
        return 0;
        }
    else
        {
        //pause
        cout<<"Push any character and ENTER to continue!"<<endl;
        string enter;
        cin>>enter;
        
        //Dealer's third card
        h = rand()%10+1;
        cout<<"Card 1: "<<f<<endl;
        cout<<"Card 2: "<<g<<endl;
        cout<<"Card 3: "<<h<<endl;
        
        //win/lose//continue calculations
        if (f + g + h == 21)
            {
            cout<<"21! Dealer Wins!"<<endl;
            return 0;
            }
        else if (f + g + h > 21)
            {
            int dealer = f + g + h;
            cout<<"Dealer has "<<dealer<<". You Win!"<<endl;
            return 0;
            }
        else if (f + g + h > player)
            {
            int dealer = f + g + h;
            cout<<"Dealer has "<<dealer<<". You have "<<player<<". Dealer Win!"<<endl;
            return 0;
            }
        else
            {
            //pause
            cout<<"Push any character and ENTER to continue!"<<endl;
            string enter;
            cin>>enter;
        
            //Dealer's fourth card
            i = rand()%10+1;
            cout<<"Card 1: "<<f<<endl;
            cout<<"Card 2: "<<g<<endl;
            cout<<"Card 3: "<<h<<endl;
            cout<<"Card 4: "<<i<<endl;
            
            //win/lose/continue calculations
            if (f + g + h + i == 21)
                {
                cout<<"21! Dealer Wins!"<<endl;
                return 0;
                }
            else if (f + g + h + i > 21)
                {
                int dealer = f + g + h + i;
                cout<<"Dealer has "<<dealer<<". You Win!"<<endl;
                return 0;
                }
            else if (f + g + h + i > player)
                {
                int dealer = f + g + h + i;
                cout<<"Dealer has "<<dealer<<". You have "<<player<<". Dealer Wins!"<<endl;
                return 0;
                }
            else
                {
                //pause
                cout<<"Push any character and ENTER to continue!"<<endl;
                string enter;
                cin>>enter;
        
                //Dealer's fifth card
                j = rand()%10+1;
                cout<<"Card 1: "<<f<<endl;
                cout<<"Card 2: "<<g<<endl;
                cout<<"Card 3: "<<h<<endl;
                cout<<"Card 4: "<<i<<endl;
                cout<<"Card 5: "<<j<<endl;
                
                //win/lose calculations
                if (f + g + h + i + j == 21)
                    {
                    cout<<"21! Dealer Wins!"<<endl;
                    return 0;
                    }
                else if (f + g + h + i + j > player)
                    {
                    int dealer = f + g + h + i + j;
                    cout<<"Dealer has "<<dealer<<". You have "<<player<<". Dealer Wins!"<<endl;
                    return 0;
                    }
                else if (f + g + h + i + j == player)
                    {
                    int dealer = f + g + h + i + j;
                    cout<<"Dealer has "<<dealer<<". You have "<<player<<". It's a Draw!"<<endl;
                    return 0;
                    }
                else
                    {
                    int dealer = f + g + h + i + j;
                    cout<<"Dealer has "<<dealer<<". You have "<<player<<". You Win!"<<endl;
                    return 0;
                    }
                }
            }
        }   
    //Exit Program
    
    return 0;
}