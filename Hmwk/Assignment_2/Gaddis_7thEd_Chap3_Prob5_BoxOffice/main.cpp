/* 
   File:   main
   Author: Morban Zarate
   Created on September 27, 2016, 5:03 PM
   Purpose: Calculate the movie's gross and net box office.
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>

using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT = 100;    //conversion to percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float adltTik, chldTik;   //adult's ticket $6.00, child's ticket $3.00
    string movName;           //movie's title
    float netBoxP, grsBoxP;   //net box office profit, gross box office profit
    float totATik, totCTik;   //total dollar value of adult and children tickets
    float amntPd;             //amount paid to the distributor
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<"This program can calculate a movie's gross and net box office profit."<<endl;
    cout<<" "<<endl;
    
    //asking for movie title
    cout<<"What's the movie's title? "<<endl;
    cin>>movName;
    cout<<" "<<endl;
    
    //asking the amount of adult tickets were sold
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>adltTik;
    cout<<" "<<endl;
    
    //asking the amount of children tickets were sold
    cout<<"How many child's tickets were sold?"<<endl;
    cin>>chldTik;
    cout<<" "<<endl;
    
    //calculations on the total dollar value of the adult and children tickets
    totATik = adltTik*6.00;     //six dollars per adult ticket
    totCTik = chldTik*3.00;     //three dollars per child ticket
    grsBoxP = totATik+totCTik;  //total gross box office profit
    netBoxP = grsBoxP*(20/PERCENT); //total net box profit when 20%
    amntPd = grsBoxP-netBoxP;   //amount paid to the distributor
    
    //Display Output
    cout<<"Movie Name:                     "<<movName<<endl;
    cout<<"Adult Tickets Sold:             "<<adltTik<<endl;
    cout<<"Child tickets Sold:             "<<chldTik<<endl;
    cout<<setprecision(2)<<fixed<<showpoint<<right;
    cout<<"Gross Box Office Profit:      $ "<<grsBoxP<<endl;
    cout<<"Net Box Office Profit:        $ "<<netBoxP<<endl;
    cout<<"Amount Paid to Distributor:   $ "<<amntPd<<endl;
    
    
    //Exit Program
    return 0;
}