#include <iostream>
using namespace std;
int main()
{
  # Use the mnemonic variale name, instead of d, k, t, r
  float d;
  float k;
  float t;
  float r;
  cout<<"Please enter the wright, it's can't less than 0 kg or biger than 20kg"<<endl;
  cin>>k;
  cout<<"Please enter the distance, it's can't less than 10 mile or biger than 3000mile"<<endl;
  cin>>d;

  if(k>=0&&k<=2)
    r=1.10;
  else if(k>2&&k<=6)
    r=2.20;
  else if(k>6&&k<=10)
    r=3.70;
  else if(k>10&&k<=20)
    r=4.80;
  else
    {  cout<<"error"<<endl;}

  // Use the indentation rule
    t=(d/500)*r;
    if(t>0)
      {cout<<"the total charge is "<<t<<endl;}
    else
      {cout<<"error"<<endl;}
    return 0;

}