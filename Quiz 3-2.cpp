#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int num1;
  int num2;
  int num3;
  
 
     num1=rand() %100;
     cout<<"num1="<<num1<<endl;
     num2 = rand() %100;
     cout<<"num2="<<num1<<endl;
     num3 =rand() %100;
     cout<<"num3="<<num3<<endl;
  int sum;
     cout<<"sum="<<num1+num2+num3<<endl;
  int average;
     cout<<"average="<<(num1+num2+num3)/3<<endl;
    return 0;
}