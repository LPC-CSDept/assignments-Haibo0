#include <iostream>
using namespace std;

int inputValidata(int,int);
void getListprime(int,int);

int main()
{
  int begin, end;
  int res;

  cout<<"Enter two input\n";
  cin>>begin>>end;

  res = inputValidata(begin, end);
  if(!res)
    exit(0);
  getListprime(begin, end);
}
 int inputValidata(int begin,int end)
{
   if((begin>end)||(begin<0)||(end<0))
     return 0;
   else
     return 1;
}
 void getListprime(int begin,int end)
{
      int i,j;
      for (i=begin;i<=end;i++)
      {
        for(j=2;j<=(i/2);j++)
          if (i%j==0)
            break;
        if(j>(i/2))
          cout<<i<<" is prime number\n";
      }

  
}