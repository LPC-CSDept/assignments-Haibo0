#include<iostream>
#include <string>
using namespace std;
int main()
{
    double rain1, rain2, rain3;
    
    cout<<"Enter the June rainfall in inches:"<<endl;
    cin>>rain1;
    
    cout<<"Enter the July rainfall in inches:"<<endl;
    cin>>rain2;

     
    cout<<"Enter August rainfall in inches:"<<endl;
    cin>>rain3;

    double avg = (rain1+rain2+rain3)/3;
    cout<<"The average rainfall for June, July and August "<<avg<<endl;

    return 0;

}