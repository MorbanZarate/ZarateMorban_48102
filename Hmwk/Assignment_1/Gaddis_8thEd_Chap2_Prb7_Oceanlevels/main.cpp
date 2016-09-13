/* File:   main.cpp
 * Author: Morban Zarate
 * Created on September 13, 2016, 11:48 AM
 * Purpose:  To calculate when homeowners in Riverside will have beach front property
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMMFT=304.8; //Conversion milimeters to feet from Google
const float CNVMMM=1000.0;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare of Variables with initialization
    float rate=1.5; //Sea level rise rate in mm/year
    int nYear1=5; 
    int nYear2=7; 
    int nYear3=10; //Years to calculate rise
    float rise1, rise2, rise3; //solutions for the the 3 years from above
    int nYrBch; //Number of years before your home is beach front property
    float elevRiv=860; //Elevation of Riverside in feet according to Wikipedia
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    
    //Output Located Here
    cout<<"The rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;
    
    
    //Exit
    return 0;
}

