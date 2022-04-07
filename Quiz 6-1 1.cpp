#include<iostream>
using namespace std;
int main()
{
    int n1=0, n2=0;
    cout<<"Enter two numbers\n";
    cin>>n1>>n2;
    swap(n1,n2);
    
  float f1=0,f2=0;
  cout<<"Enter two float numbers\n";
    cin>>f1>>f2;
    swap(f1,f2);
      
  cout << "n1 = " << n1 << " n2 = " << n2 << endl;
  cout << "f1 = " << f1 << " f2 = " << f2 << endl;
  
    
}
void swapTwoValues(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
   
}
void swapTwoValues(float f1, float f2)
{
    float temp;
    temp = f1;
    f1 = f2;
    f2 = temp;
}