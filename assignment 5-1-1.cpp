#include <iostream>
#include <climits> //needed for INT_MAX
using namespace std;
int main() {
  int n = 0;
  int num = 0;
  int nthp=1;
  float invp = 0.0;
  int i = 0;
 cout<<"enter a number"<<endl;
  cin>>n;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  if(0<n) {
    num=n;    
  }
  else if(0>n){
    num=n*-1;    
  }
  else {
    
    return 0;
  }

for(int i=0;i<num;i++)
    {
      //nthp = nthp * 2; //same as next line
      nthp*=2;
      cout<<nthp << endl;
      if(n<0) {
          invp=1.0/nthp;
          cout<<invp << endl;
        }
    }  
  return 0;
  
}