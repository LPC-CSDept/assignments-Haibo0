#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int begin;
  int end;
  int chk = 0;

  cout << "enter beginning: ";
  cin >> begin;
  cout << "enter end: ";
  cin >> end;

  for(int i = begin; i<end; i++){
    for(int c=2; c<i; c++){
      if(i%c==0){
        chk++;
        break;
      }
    }
    if(chk==0){
      cout << i << endl;
    }
    chk = 0;
  }
  cout << endl;

  return 0;
  }
