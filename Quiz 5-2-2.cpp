#include<iostream>
using namespace std;

int main(){
int N,M;
int result;
int i;
while(0>N || N>10){
  cout << "Input N(between 0 and 10): ";
  cin >> N;
  if(0>N || N>10){
    cout << "Invalid Input. Try again." << endl;
  }
}
while(1>=M || M>=10){
  cout << "Input M(between 1 and 10): ";
  cin >> M;
  if(1>=M || M>=10){
    cout << "Invalid Input. Try again." << endl;
  }
}

// No need to repeat result = 0 or result = N;
// What is the purpose of this loop?
for(int i=0;i<=M;i++){
    if(i==0){
    result=0;
  }
    else{
        result=N;
    }
}
// after the above code, result will be N if M is not 0
// Thus simply,
result = ( M == 0) ? 0 : N

for(int c=1;c<=i;c++){
    result =result * N;
}
cout<<result<<endl;
return 0;
  }