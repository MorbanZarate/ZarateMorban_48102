/* 
 File:   main.cpp
 Author: Morban Zarate
 Created on December 11, 2016, 10:07 AM
 Purpose: Trying to pass this class :(
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>       //String
#include <cstdlib>      //Random Number
#include <cmath>        //Calculating the total card values 

using namespace std;  //Name-space used in the System Library
//User Libraries

//Global Constants

//Function prototypes
struct Card //Structure
{
    int value;
    string face;
};
int win=0;
int lose=0;
int coin=10;
void clearscreen();
void blackjack(Card []);
void blackjack2player(Card []);
void randcard(Card []);
void shuffle(Card []);  //randomizing cards

//Execution Begins Here!
int main(int argc, char** argv) {
//Declaration of Variables
srand(time(0));     //random seed

//Size
int numCard = 52;
Card deck[numCard];
randcard(deck);

//Input values
do{
cout<<"     ++++++++++++++++"<<endl;
cout<<"    +  BLACKJACK V.2  +"<<endl;
cout<<"     ++++++++++++++++"<<endl;
cout<<"Ready to play?!"<<endl;
cout<<"1. Blackjack"<<endl;
cout<<"2. Exit"<<endl;
cout<<"You have "<<coin<< " Coins"<<endl;


int opChoic;    //Player's option choice
cin>>opChoic;

while (opChoic != 1 && opChoic != 2)
{
    cout<<"Invalid"<<endl;
    cin>>opChoic;
}
//Clearing screen
clearscreen();

//Process values -> Map inputs to Outputs
switch(opChoic){
    {
        case 1:     //Blackjack
            cout<<"     *************"<<endl;
            cout<<"   *   BLACKJACK   *"<<endl;
            cout<<"     *************"<<endl;
            cout<<"What type of game do you want to play?"<<endl;
            cout<<"1. Player vs Computer [Easy Mode] "<<endl;
            cout<<"2. Two Players [No Coins Needed]"<<endl;
            int gamPlay;    //game choice for player
            cin>>gamPlay;
            while (opChoic != 1 && opChoic != 2)
            {
                cout<<"Invalid"<<endl;
                cin>>opChoic;
            }
            clearscreen();  //Clearing screen
            switch (gamPlay)
            {
                {
                    case 1:    //Player One VS Computer
                        blackjack(deck);   
                        clearscreen();
                }break;


                {
                    case 2:     //Player One VS Player Two
                        blackjack2player(deck);
                        clearscreen();
                }break;                                                   
            }    
    break;
    }
        {     
        case 2:     //Exiting the game
            clearscreen();
            cout<<"     ************"<<endl;
            cout<<"  *Thanks For Playing!*"<<endl;
            cout<<"     ************"<<endl;               
            exit(0);
        }
}

//Display Output
}while(coin>0);{
    //When Player has zero coins
    if (coin == 0)
        cout<<"You have ZERO coins..."<<endl;
        cout<<"     GAME OVER!"<<endl;
};

//Exit Program/Returning to Main Menu
return 0;
}

//Random card generator
void randcard(Card deck[])
{
    int num = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            deck[num].value = j + 1;
            //Hearts
            if(i == 0)
            {
                if(deck[num].value == 11)
                {
                    deck[num].face = "Jack h";
                }
                else if(deck[num].value == 12)
                {
                    deck[num].face = "Queen h";
                }
                else if(deck[num].value == 13)
                {
                    deck[num].face = "King h";
                }
                else
                {    
                    deck[num].face = "h";
                }
            }
            //Spades
            else if(i == 1)
            {
                if(deck[num].value == 11)
                {
                    deck[num].face = "Jack s";
                }
                else if(deck[num].value == 12)
                {
                    deck[num].face = "Queen s";
                }
                else if(deck[num].value == 13)
                {
                    deck[num].face = "King s";
                }
                else
                {    
                    deck[num].face = "s";
                }
            }
            //Clovers
            else if(i == 2)
            {
                if(deck[num].value == 11)
                {
                    deck[num].face = "Jack c";
                }
                else if(deck[num].value == 12)
                {
                    deck[num].face = "Queen c";
                }
                else if(deck[num].value == 13)
                {
                    deck[num].face = "King c";
                }
                else
                {    
                    deck[num].face = "c";
                }
            }
            //Diamonds
            else if(i == 3)
            {
                if(deck[num].value == 11)
                {
                    deck[num].face = "Jack d";
                }
                else if(deck[num].value == 12)
                {
                    deck[num].face = "Queen d";
                }
                else if(deck[num].value == 13)
                {
                    deck[num].face = "King d";
                }
                else
                {    
                    deck[num].face = "d";
                }
            }
            //The 11-13 values are converted to the 10 value
            if(deck[num].value > 10)
            {
                deck[num].value = 10;
            }
            num++;
        }
    }
}

void shuffle(Card deck[]) //cards are being shuffled when game is starting
{
    for(int i = 0; i < 52; i++)
    {
        int r = rand()%52+1;
        swap(deck[i].face, deck[r].face);
        swap(deck[i].value, deck[r].value);
        
    }
}

void blackjack2player(Card deck[])  //When Player 2 joins the fun
{ 
    shuffle(deck);
    int cardTot, plyrTwo;   //Player's cards value
    string hitStay;     //Players option to continue
    int counter = 0;    //Player One counter
    int ply2cnr = 0;    //Player Two counter
    cout << "Player 1 cards are: " << endl;
    cout << deck[0].value << " " << deck[0].face << " "<<endl;
    cout << deck[1].value << " " << deck[1].face << " "<<endl;
    cardTot = deck[0].value+deck[1].value;
    if (deck[0].value == 1) //Converting Ace card to a one or eleven
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;                  
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[0].value = 11;
            cardTot = deck[0].value+deck[1].value;
        }
    }
    if(deck[1].value == 1) //Converting Ace card to a one or eleven
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[1].value = 11;
            cardTot = deck[0].value+deck[1].value;
        }
    }    
    for(int i = 0; i < 3; i++)
    {
        cout << "Want a new card? (type yes or no)"<<endl;
        cin >> hitStay;
        while (hitStay != "yes" && hitStay != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>hitStay;
        }
        if(hitStay == "yes")
        {
            counter++;
            cout << "Your new card is "<< deck[2].value << " " << deck[2].face << endl; 
            cardTot = deck[0].value+deck[1].value+deck[2].value;
            if(deck[2].value == 1) //Converting Ace card to a one or eleven
            {
                string yes;
                cout << "Do you want to change ace card to eleven "
                        "(type yes or no)"<<endl;
                cin >> yes;
                while (yes != "yes" && yes != "no" )
            {
                cout<<"Invalid"<<endl;
                cin>>yes;
            }
                if(yes == "yes")
                {
                    deck[2].value = 11;
                    cardTot = deck[0].value+deck[1].value+deck[2].value;
                }
            }
            if (i == 0)
            {
                cardTot = deck[0].value+deck[1].value+deck[2].value;
                if(cardTot > 21)
                {
                    i = 3;
                }
            }
            else if (i == 1)
            {
            cardTot = deck[0].value + deck[1].value + deck[2].value + deck[3].value;    
            if(cardTot > 21)
                {
                    i = 3;
                }
            }
            else if (i == 2)
            {
                cardTot = deck[0].value + deck[1].value + deck[2].value + deck[3].value + deck[4].value;
                if(cardTot > 21)
                {
                    i = 3;
                }
            }
        }
        else 
        {
            i = 3;
        }              
    }
            cout << "Player 2 cards are: " << endl;
            cout << deck[5].value << " " << deck[5].face << " "<<endl;
            cout << deck[6].value << " " << deck[6].face << " "<<endl;
            plyrTwo = deck[5].value + deck[6].value;
    if (deck[5].value == 1) //Converting Ace card to a one or eleven
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;                  
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[5].value = 11;
            plyrTwo = deck[5].value + deck[6].value;
        }
    }
    if(deck[6].value == 1) //Converting Ace card to a one or eleven
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[6].value = 11;
            plyrTwo = deck[5].value + deck[6].value;
        }
    }    
    for(int i = 0; i < 3; i++)
    {
        cout << "Want a new card? (type yes or no)"<<endl;
        cin >> hitStay;
        while (hitStay != "yes" && hitStay != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>hitStay;
        }
        if(hitStay == "yes")
        {
            ply2cnr++;
            cout << "Your new card is "<< deck[7].value << " " << 
                    deck[7].face << endl; 
            plyrTwo = deck[5].value + deck[6].value + deck[7].value;
            if(deck[7].value == 1) //Converting Ace card to a one or eleven
            {
                string yes;
                cout << "Do you want to change ace card to eleven "
                        "(type yes or no)"<<endl;
                cin >> yes;
                while (yes != "yes" && yes != "no" )
            {
                cout<<"Invalid"<<endl;
                cin>>yes;
            }
                if(yes == "yes")
                {
                    deck[7].value = 11;
                plyrTwo = deck[5].value + deck[6].value + deck[7].value;
                }
            }
            if (i == 0)
            {
                plyrTwo = deck[5].value + deck[6].value + deck[7].value;
                if(plyrTwo > 21)
                {
                    i = 3;
                }
            }
            else if (i == 1)
            {
            plyrTwo = deck[5].value + deck[6].value + deck[7].value + deck[8].value ;    
            if(deck[5].value + deck[6].value + deck[7].value + deck[8].value > 21)
                {
                    i = 3;
                }
            }
            else if (i == 2)
            {
                plyrTwo = deck[5].value + deck[6].value + deck[7].value + deck[8].value + deck[9].value ;
                if(deck[5].value + deck[6].value + deck[7].value + deck[8].value + deck[9].value > 21)
                {
                    i = 3;
                }
            }
        }
        else 
        {
            i = 3;
        }              
    }
    
    
    if (counter == 0)
    {
        cout << endl;
        cout << "Player 1 cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
    }
    else if(counter == 1)
    {
        cout << endl;
        cout << "Player 1 cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
    }
    else if(counter == 2)
    {
        cout << endl;
        cout << "Player 1 cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
        cout << deck[3].value << " " << deck[3].face << " "<<endl;
                
    }
    else if (counter == 3)
    {
        cout << endl;
        cout << "Player 1 cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
        cout << deck[3].value << " " << deck[3].face << " "<<endl;
        cout << deck[4].value << " " << deck[4].face << " "<<endl;
    }
    if (ply2cnr == 0)
    {
        cout << endl;
        cout << "Player 2 cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
    }        
    else if(ply2cnr == 1)
    {
        cout << endl;
        cout << "Player 2 cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
    }
    else if(ply2cnr == 2)
    {
        cout << endl;
        cout << "Player 2 cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
        cout << deck[8].value << " " << deck[8].face << " "<<endl;
                
    }
    else if (ply2cnr == 3)
    {
        cout << endl;
        cout << "Player 2 cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
        cout << deck[8].value << " " << deck[8].face << " "<<endl;
        cout << deck[9].value << " " << deck[9].face << " "<<endl;
    }
            
//Results/Outcomes
if (cardTot > 21 && plyrTwo > 21)
    {
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Draw"<<endl;  
    }
else if (plyrTwo > 21)
    {
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 1 wins"<<endl; 
    }
else if (cardTot > 21)
    {
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 1 loses"<<endl; 
    }
else if (cardTot == plyrTwo)
    {
        cout << "Player 1 card sum is: "<<cardTot<<endl;
        cout << "Player 2 card sum is: "<<plyrTwo<<endl;
        cout << "Draw" << endl;
    }
else if(cardTot<plyrTwo && cardTot<= 21 && plyrTwo<=21)
    {    
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 2 wins"<<endl;
    }
else if (cardTot < 21 && plyrTwo > 21)
    {
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 1 wins"<<endl; 
    }
else if ( cardTot > 21 && plyrTwo <21)
    {
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 2 wins"<<endl;
    }
else if(cardTot>plyrTwo && cardTot<= 21 && plyrTwo<= 21)
    {  
        cout << "Player 1 card sum is: " << cardTot<<endl;
        cout << "Player 2 card sum is: " << plyrTwo<<endl;
        cout << "Player 1 wins"<<endl; 
    }
    cout << endl;
    //Game ended; Main Menu
    int go;
    cout << "Press 1 for Main Menu: ";
    cin >> go;
    while (go != 1)
        {
            cout<<"Invalid"<<endl;
            cin>>go;
        }
}

//Player vs Computer Game
void blackjack(Card deck[])
{ 
    shuffle(deck);
    int cardTot, dealTot; //Players and Dealers card values
    string hitStay;     //Player's option to continue
    int counter = 0;    //Player's counter
    int dealCnr = 0;    //Dealer's counter
    //Player's two cards
    cout << "Your cards are: " << endl;
    cout << deck[0].value << " " << deck[0].face << " "<<endl;
    cout << deck[1].value << " " << deck[1].face << " "<<endl;
    cardTot = deck[0].value + deck[1].value;
    if (deck[0].value == 1) //Aces card conversion
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;                  
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[0].value = 11;
            cardTot = deck[0].value + deck[1].value;
        }
    }
    if(deck[1].value == 1) //Ace card conversion
    {
        string yes;
        cout << "Do you want to change ace card to eleven (type yes or no)"
                <<endl;
        cin >> yes;
        while (yes != "yes" && yes != "no" )
        {
            cout<<"invalid"<<endl;
            cin>>yes;
        }
        if(yes == "yes")
        {
            deck[1].value = 11;
            cardTot = deck[0].value + deck[1].value;
        }
    }
    //Player receiving additional cards
    for(int i = 0; i < 3; i++)
    {
        cout << "Want a new card? (type yes or no)"<<endl;
        cin >> hitStay;
        while (hitStay != "yes" && hitStay != "no" )
        {
            cout<<"Invalid"<<endl;
            cin>>hitStay;
        }
        if(hitStay == "yes")
        {
            counter++;
            //Player's third card
            cout << "Your new card is "<< deck[2].value << " " << deck[2].face << endl; 
            cardTot = deck[0].value + deck[1].value + deck[2].value;
            if(deck[2].value == 1) //Aces card conversion
            {
                string yes;
                cout << "Do you want to change ace card to eleven (type yes or no):"<<endl;
                cin >> yes;
                while (yes != "yes" && yes != "no" )
            {
                cout<<"Invalid"<<endl;
                cin>>yes;
            }
                if(yes == "yes")
                {
                    deck[i+2].value = 11;
                    cardTot = deck[0].value + deck[1].value + deck[2].value;
                }
            }
            if (i == 0)
            {
                cardTot = deck[0].value + deck[1].value + deck[2].value;
                if(cardTot > 21)
                {
                    i = 3;
                }
            }
            else if (i == 1)
            {
            cardTot = deck[0].value + deck[1].value + deck[2].value + deck[3].value;
            if(cardTot > 21)
                {
                    i = 3;
                }
            }
            else if (i == 2)
            {
            cardTot = deck[0].value + deck[1].value + deck[2].value + deck[3].value + deck[4].value;
                if(cardTot > 21)
                {
                    i = 3;
                }
            }
        }
        else 
        {
            i = 3;
        }              
    }
            cout << "Dealers cards are: " << endl;
            cout << deck[5].value << " " << deck[5].face << " "<<endl;
            cout << deck[6].value << " " << deck[6].face << " "<<endl;
            dealTot = deck[5].value + deck[6].value;
            for (int i = 0; i < 3; i++)
            {    
                if(i == 0)
                {
                    if (deck[5].value + deck[6].value < 17)
                    {
                        dealCnr++;
                        cout << "New card is: "<<
                            deck[7].value << " " << deck [7].face << endl;
                dealTot = deck[5].value + deck[6].value+deck[7].value;
                    }
                    else 
                    {
                        i = 3;
                    } 
                }
                if(i == 1)
                {
                    if (deck[5].value + deck[6].value + deck[7].value < 17)
                    {
                        dealCnr++;
                        cout << "New card is: "<<
                            deck[8].value << " " << deck [8].face << endl;
                dealTot = deck[5].value + deck[6].value + deck[7].value + deck[8].value;
                    }
                    else 
                    {
                        i = 3;
                    } 
                }
                if(i == 2)
                {
                    if (deck[5].value + deck[6].value + deck[7].value + deck[8].value < 17)
                    {
                        dealCnr++;
                        cout << "New card is: "<<
                              deck[9].value << " " << deck [9].face << endl;
                        dealTot = deck[5].value + deck[6].value+
                                deck[7].value + deck[8].value + deck[9].value;
                    }
                    else 
                    {
                        i = 3;
                    } 
                }
            }
            
    //Player's cards
    if (counter == 0)
    {
        cout << endl;
        cout << "Your cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
    }
    else if(counter == 1)
    {
        cout << endl;
        cout << "Your cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
    }
    else if(counter == 2)
    {
        cout << endl;
        cout << "Your cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
        cout << deck[3].value << " " << deck[3].face << " "<<endl;
                
    }
    else if (counter == 3)
    {
        cout << endl;
        cout << "Your cards are: "<<endl;
        cout << deck[0].value << " " << deck[0].face << " "<<endl;
        cout << deck[1].value << " " << deck[1].face << " "<<endl;
        cout << deck[2].value << " " << deck[2].face << " "<<endl;
        cout << deck[3].value << " " << deck[3].face << " "<<endl;
        cout << deck[4].value << " " << deck[4].face << " "<<endl;
    }
            
    //Dealer's cards
    if (dealCnr == 0)
    {
        cout << endl;
        cout << "Dealers cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
    }        
    else if(dealCnr == 1)
    {
        cout << endl;
        cout << "Dealers cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
    }
    else if(dealCnr == 2)
    {
        cout << endl;
        cout << "Dealers cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
        cout << deck[8].value << " " << deck[8].face << " "<<endl;
                
    }
    else if (dealCnr == 3)
    {
        cout << endl;
        cout << "Dealers cards are: "<<endl;
        cout << deck[5].value << " " << deck[5].face << " "<<endl;
        cout << deck[6].value << " " << deck[6].face << " "<<endl;
        cout << deck[7].value << " " << deck[7].face << " "<<endl;
        cout << deck[8].value << " " << deck[8].face << " "<<endl;
        cout << deck[9].value << " " << deck[9].face << " "<<endl;
    }      
    if (cardTot > 21)
    {
        cout << "Your cards sum is: " << cardTot <<endl;
        cout << "The dealers cards sum is: " << dealTot <<endl;
        cout << "You lose 1 coin"<<endl;
        lose++;
        coin--;  
    }
    else if (dealTot > 21)
    {
        cout << "Your cards sum is: " << cardTot <<endl;
        cout << "The dealers cards sum is: " << dealTot <<endl;
        cout << "You win 1 coin"<<endl; 
        win++;
        coin++;
    }
    else if (cardTot == dealTot)
    {
        cout << "Your card sum is: "<< cardTot <<endl;
        cout << "The dealers card sum is: "<< dealTot <<endl;
        cout << "Draw" << endl;
    }
    else if(cardTot < dealTot && cardTot <= 21 && dealTot <= 21)
    {    
        cout << "Your cards sum is: " << cardTot<<endl;
        cout << "The dealers cards sum is: " << dealTot <<endl;
        cout << "You lose 1 coin"<<endl;
        lose++;
        coin--;
    }
    else if (cardTot < 21 && dealTot > 21)
    {
        cout << "Your cards sum is: " << cardTot <<endl;
        cout << "The dealers cards sum is: " << dealTot <<endl;
        cout << "You win 1 coin"<<endl; 
        win++;
        coin++;
    }
    else if ( cardTot > 21 && dealTot <21)
    {
        cout << "Your cards sum is: " << cardTot<<endl;
        cout << "The dealers cards sum is: " << dealTot<<endl;
        cout << "You lose 1 coin"<<endl;
        lose++;
        coin--;
    }
    else if(cardTot > dealTot && cardTot<= 21 && dealTot<= 21)
    {  
        cout << "Your cards sum is: " << cardTot <<endl;
        cout << "The dealers cards sum is: " << dealTot <<endl;
        cout << "You win 1 coin"<<endl; 
        win++;
        coin++;
    }
    cout << endl;        
    int go;
    cout << "Press 1 to go back to Main Menu: ";
    cin >> go; 
    while (go != 1 )
        {
            cout<<"Invalid"<<endl;
            cin>>go;
        }
}

//Clearing Screen
void clearscreen()
{
    for (int i = 0; i<25; i++)
    cout <<endl;
}