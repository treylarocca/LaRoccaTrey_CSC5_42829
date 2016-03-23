/* 
 * File:   main.cpp
 * Author: Trey LaRocca
 * This program calculates the gross pay based on hours worked and pay rate.
 * Created on March 16, 2016, 8:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Purpose Prompt
    cout<<"This program calculates the gross pay based on hours worked and pay"
            " rate."<<endl;
    cout<<" "<<endl;
    
    //Declare variables
    float payrate; //Rate of pay
    float ovrtime(40); //# of hours where overtime begins
    float hrswrkd; //Number of hours worked
    float grsspay; //Gross pay
    
    //Input values
    cout<<"Input pay rate($/hr) in dd.dd format."<<endl;
    cin>>payrate;
    cout<<"Input hours worked in dd.dd format."<<endl;
    cin>>hrswrkd;
    
    //Map inputs to outputs
    switch(hrswrkd<0||hrswrkd>98){
        case true:grsspay=0;
        default:
            switch(hrswrkd<=ovrtime){
                case true: grsspay=hrswrkd*payrate;break;
                default:   grsspay=hrswrkd*payrate+(hrswrkd-ovrtime)*payrate;
            }
    }
    
    //Output results
    cout<<"Your gross pay is $"<<setprecision(2)<<fixed<<grsspay<<endl;
    
    return 0;
}

