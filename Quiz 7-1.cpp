#include <cmath>
#include <iostream>
using namespace std;

const int N = 10;

int main(){
  int number[N] = {10,15,0,-25,19,20,25,30,45,20};

  //for loop to go through each element of the array
    //if the difference between the elements is less than 10, before the element and behind it. 
      //then print the element
       
  for (int i=0; i<N-1; i++){
    if (i == 0 && (abs(number[i]-number[i+1])<10)){
      cout << number[i] << endl;
    }
    if (i != 0 && (abs(number[i]-number[i+1])<10) && (abs(number[i]-number[i-1])<10)){
      cout << number[i] << endl;
    }
  }

  
}