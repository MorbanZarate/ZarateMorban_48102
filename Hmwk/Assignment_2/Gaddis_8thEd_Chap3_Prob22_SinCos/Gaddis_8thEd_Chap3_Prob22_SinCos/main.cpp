/* 
 * File:   main.cpp
 * Author: Morban Zarate
 * Created on September 20, 2016, 12:15 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input/output objects
#include <iomanip>  //formatting
#include <cmath>    //sin cos tan
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1.0); //PI
const float CNVDEGR=PI/180; //conversion from degrees to radians

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg, radians;
    
    //Input or initialize values Here
    deg=0;
    radians=deg*CNVDEGR;
        
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    //Output Located Here
    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;    

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;    
    
    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;    

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;    
    
    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    deg+=15;
    radians=deg*CNVDEGR;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;    
    
    //Exit
    return 0;
}

