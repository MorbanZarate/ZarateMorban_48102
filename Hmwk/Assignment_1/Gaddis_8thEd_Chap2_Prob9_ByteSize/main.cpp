/* 
 * File:   main.cpp
 * Author: Morban Zarate
 *Created on September 8, 2016, 12:06 PM
 * Purpose
 */

//System Libraries
#include <iostream>  //input/output objects

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Display Output
    cout<<"The size of a Boolean            = "<<sizeof(bool)<<" byte";
    cout<<" [0 -> false, true otherwise]\n";
    cout<<"The size of a character          = "<<sizeof(char)<<" byte";
    cout<<" [-2^7,2^7-1],[-128,127]\n";
    cout<<"The size of a unsigned character = "<<sizeof(unsigned char)<<" byte";
    cout<<" [0,2^8],[0,255]\n";
    cout<<"The size of a short              = "<<sizeof(short)<<" bytes";
    cout<<" [-2^15,2^15-1],[-32768,32767]\n";
    cout<<"The size of a unsigned short     = "<<sizeof(unsigned short)<<" bytes";
    cout<<" [0,2^16-1],[0,65535]\n";
    cout<<"The size of a integer            = "<<sizeof(int)<<" bytes";
    cout<<" [-2^31,2^31-1],[+-2.15 billion]\n";
    cout<<"The size of a unsigned integer   = "<<sizeof(unsigned int)<<" bytes";
    cout<<" [0,2^31-1],[0,4.3 billion]\n";
    cout<<"The size of a long               = "<<sizeof(long)<<" bytes";
    cout<<" [-2^63,2^63-1],[+-9.2 quintillion]\n";
    cout<<"The size of a unsigned long      = "<<sizeof(unsigned long)<<" bytes";
    cout<<" [0,2^64-1],[0,18.4 quintillion]\n";
    cout<<"The size of a float              = "<<sizeof(float)<<" bytes";
    cout<<" [10^+-38],[7SD]\n";
    cout<<"The size of a double             = "<<sizeof(double)<<" bytes";
    cout<<" [10^+-308],[16SD]\n";
    cout<<"The size of a long double        = "<<sizeof(long double)<<" bytes";
    cout<<" [10^+-4932],[34SD]\n";
    
    //exit program
    return 0;
}

