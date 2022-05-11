#include <iostream> 
using namespace std;
int findmax(int numbers[], int, int); 
int main()
{ 
  const int n =10;//declare array of size num 
  int numbers1[n], numbers2[n], max1, max2, a = 0;
  int i;
  int numbers[n]={10,15,0,-25,19,20,25,30,45,20};// element in array
    for(i = 0; i < n; i++) 
    {
      if(i < n/2) 
    {
      numbers1[i] = numbers[i];  
    }
    else 
    {
      numbers2[i] = numbers[i];
    }
  }
   
    max1 = findmax(numbers1, a, n/2); //maximum in first half
    cout<<"Max number from slot 1 : "<<max1<<"\t"; // printing maximum inn first half on screen
    max2 = findmax(numbers2, n/2, n); //maximum in second half
    cout<<"Max number from slot 2 : "<<max2; // printing maximum inn second half on screen
    
  return 0;
  }
int findmax(int numbers[], int from, int to) 
{
  int i, t = numbers[0];
  for (i = from; i < to; ++i)
{
  if (t < numbers[i]) //compare an array for max value if max  < array element than it will assign to max variable    
  {
    t = numbers[i];//assigning greater value to max
  }
}
return t; 
}