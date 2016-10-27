/* 
 * File:   main.cpp
 * Author: Morban Zarate 
 * Created on October 24 2016, 7:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string hitstay;
int cardtotal,bet,ace;
int chips = 100;
int win=0;
int lose=0;

int card ()//function used in blackjack for each new card given
{
    int min = 1;
    int max = 10;
    string one;
    int card = rand()%(10-1+1)+1;
    return card;
}

int main(int argc, char** argv) 
{
    srand(time(0));//randomizing each new card
        
    int f=0,g=0,h=0,i=0,j=0; 
    
    
    int a=0,b=0,c=0,d=0,e=0;
    int cardTotal = 0;
    
        cout <<"********************"<<endl;
        cout <<"*      Blackjack   *"<<endl;  
        cout <<"********************"<<endl;
        
         
        
        int win = 0;   //users turn
        int lose = 0;
        
        a = card();
        b = card(); 
        if (a == 1)
        {
            string yes;
            cout << "Your cards are " << a << " " << b << endl;
            cout << "Do you want to change ace card to eleven"//ask to change 
                    "(type yes or no)";                  //the value of ace
            cin >> yes;
            if(yes == "yes")
            {
                a = 11;
            }
        }
        else if(b == 1)
        {
            string yes;
            cout << "Your cards are " << a << " " << b <<endl;
            cout << "Do you want to change ace card to eleven"
                    "(type yes or no)";
            cin >> yes;
            if(yes == "yes")
            {
                b = 11;
            }
        }
        cout <<"Your cards are: "<<endl;   //shows all the cards so far
        cout <<"Card 1: "<<a <<endl;  
        cout <<"Card 2: "<<b <<endl;       
        cout <<"Type hit or stay ";
        cin >> hitstay;
        if(hitstay == "hit" )
        {
            c = card();
            if(c == 1)
        {
            string yes;
            cout << "Your cards are " << a << " " <<b << " "<< c << endl;
            cout << "Do you want to change ace card to eleven(type yes or no)";
            cin >> yes;
            if(yes == "yes")
            {
                c = 11;
            }
            else if (a+b==21)
            {
                cout <<"21"<<endl;
            }
        }       
            cout <<"new card is: "<<c<<endl;
            cout <<"Your cards are: "<<endl;   
            cout <<"Card 1: "<<a <<endl;  
            cout <<"Card 2: "<<b <<endl;
            cout <<"Card 3: "<<c<<endl;
            cardtotal = a+b+c;
            if(a + b + c > 21)
            {
                cout <<"Your cards are greater than 21" << endl;
                cout <<"You lose"<<endl;
                lose++;
            }
            else if(a + b + c <= 21)
            {
                cout <<"Type hit or stay ";
                cin >> hitstay;
                if (hitstay == "hit")
                {
                    d = card();
                    if(d == 1)
                    {
                        string yes;
                        cout << "Your cards are " << a << " " << b << " " << c 
                             << " "<<d<<
                                endl;
                        cout << "Do you want to change ace card to eleven"
                                "(type yes or no) ";
                        cin >> yes;
                        if(yes == "yes")
                        {
                           d = 11;
                        }
                    }     
                    cout <<"new card is: "<<d<<endl;
                    cout <<"Your cards are: "<<endl;   
                    cout <<"Card 1: "<<a <<endl;  
                    cout <<"Card 2: "<<b <<endl;
                    cout <<"Card 3: "<<c<<endl;
                    cout <<"card 4: "<<d<<endl;
                    cardTotal = a+b+c+d;
                    if (a+b+c+d>21)
                    {
                        cout <<"Your cards are greater than 21"<<endl;
                        cout <<"You lose"<<endl;
                        lose++;
                    }
                    else if(a+b+c+d<=21)                    
                    {
                        cout <<"Type hit or stay ";
                        cin >> hitstay;
                        if (hitstay == "hit")
                        {
                            e = card();
                            if(e == 1)
                                {
                                string yes;
                                cout << "Your cards are " << a << " " << b << ""
                                     <<c<<" "<<d<<" "<<e<<endl;
                                cout << "Do you want to change ace card to "
                                        "eleven(type yes or no)";
                                cin >> yes;
                                if(yes == "yes")
                                    {
                                    e = 11;
                                    }
                                }
                            cout <<"new card is: "<<e<<endl;
                            cout <<"Your cards are: "<<endl;   
                            cout <<"Card 1: "<<a <<endl;  
                            cout <<"Card 2: "<<b <<endl;
                            cout <<"Card 3: "<<c<<endl;
                            cout <<"card 4: "<<d<<endl;
                            cout <<"card 5: "<<e<<endl;
                            cardTotal = a+b+c+d+e;
                            if(a+b+c+d+e > 21)
                            {
                                cout <<"Your cards are greater than 21"<<endl;
                                cout <<"You lose"<<endl;
                                lose++;
                            }
                            else if (a+b+c+d+e <=21) 
                            {
                                cout <<"Total is "<<a+b+c+d+e<<endl;
                            }                            
                            
                        } 
                    }
                    
                }
            }
            
        }               
        if (hitstay =="stay" || a+b+c+d+e<=21)//dealers turn
        {
        f = card();
        g = card();
        cout <<endl;
        cout <<"Dealers cards are: "<<endl;   
        cout <<"Card 1: "<<f <<endl;  
        cout <<"Card 2: "<<g <<endl;       
        if (f+g < 17)//dealer must hit 
        { 
                h = card();
                cout <<"Dealers new card is: "<<h<<endl;
                cout <<"Dealers cards are: "<<endl;   
                cout <<"Card 1: "<<f <<endl;  
                cout <<"Card 2: "<<g <<endl;
                cout <<"Card 3: "<<h<<endl;
                cardtotal = f+g+h;
                if(f + g + h > 21)
                {
                    cout <<"Dealers cards are greater than 21" << endl;
                    cout <<"He loses"<<endl;               
                    win++;  
                }
                else if(f + g + h < 17)
                {
                    i = card();
                    cout <<"new card is: "<<i<<endl;
                    cout <<"Dealers cards are: "<<endl;   
                    cout <<"Card 1: "<<f <<endl;  
                    cout <<"Card 2: "<<g <<endl;
                    cout <<"Card 3: "<<h<<endl;
                    cout <<"card 4: "<<i<<endl;
                    cardTotal = f+g+h+i;
                    if (f+g+h+i>21)
                    {
                        cout <<"Dealers cards are greater than 21"<<endl;
                        cout <<"He loses"<<endl;
                        win++;
                    }
                    else if(f+g+h+i<17)                    
                    {
                        j = card();
                        cout <<"Dealers new card is: "<<j<<endl;
                        cout <<"Dealers cards are: "<<endl;   
                        cout <<"Card 1: "<<f <<endl;  
                        cout <<"Card 2: "<<g <<endl;
                        cout <<"Card 3: "<<h<<endl;
                        cout <<"card 4: "<<i<<endl;
                        cout <<"card 5: "<<j<<endl;
                        cardTotal = f+g+h+i+j;                      
                            if(f+g+h+i+j > 21)
                            {
                              cout <<"Dealer cards are greater than 21"<<endl;
                              cout <<"He loses"<<endl;
                              win++; 
                            }                           
                    }                                    
                }           
        } 
        }
        if(a+b+c+d+e == f+g+h+i+j)//user cards = dealer cards
        {
            cout << "Your card sum is: "<<a+b+c+d+e<<endl;
            cout << "The dealers card sum is: "<<f+g+h+i+j<<endl;
            cout << "Draw" << endl;
        }
        else if(a+b+c+d+e < f+g+h+i+j && a+b+c+d+e <= 21 && f+g+h+i+j <= 21)
        {     //user cards less than dealers cards
            cout << "Your cards sum is: " << a+b+c+d+e<<endl;
            cout << "The dealers cards sum is: " << f+g+h+i+j<<endl;
            cout << "You lose"<<endl;
            lose++;
        }
        else if(a+b+c+d+e > f+g+h+i+j && a+b+c+d+e <= 21 && f+g+h+i+j <= 21)
        {   //dealer cards less than users cards
            cout << "Your cards sum is: " << a+b+c+d+e<<endl;
            cout << "The dealers cards sum is: " << f+g+h+i+j<<endl;
            cout << "You win"<<endl;
            win++;
        }    
    return 0;
}
