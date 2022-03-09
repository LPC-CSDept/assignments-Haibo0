#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int b,e;
  int i=1;
  cout<<"enter 2 interger"<<endl;
cin>>b>>e;

  int c = 1;
while(b<=c && c<=e){
  c = pow(2,i);
  if(c<e){
  cout<< c <<endl;
  i++;  
  }
}

  
    return 0;
  
}