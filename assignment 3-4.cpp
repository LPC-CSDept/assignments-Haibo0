#include<iostream>
using namespace std;

int main()
{

float FM;
float SM;
float TM;
  
  char fm;
  char sm;
  char tm;

  cout<<"enter mouth and rain fall"<<endl;
  cin>>fm;
    cin>>FM;
  
  cout<<"enter mouth and rain fall"<<endl;
  cin>>sm;
    cin>>SM;

  cout<<"enter mouth and rain fall"<<endl;
  cin>>tm;
    cin>>TM;


  float average;
  average= (FM+SM+TM)/3;
  cout<<"The average rain fall for"<<fm<<sm<<tm<<"is"<<average<<endl;
 
  

return 0;
}