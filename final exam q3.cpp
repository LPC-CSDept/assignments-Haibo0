#include<iostream>
using namespace std;

/* Return 1 if arr2[] is a subset of arr1[] */
bool is_Subset(int arr2[], int arr1[],int n, int m)
{
    int i = 0, j = 0;

    if (m < n)
        return 0;

    // Iterate over both array 
    while (i < n && j < m)
    {

        if (arr1[j] < arr2[i]) // If the element is smaller than Move ahead in the first array
        {
            j++;
        }
        else if (arr1[j] > arr2[i]) // If both are equal, then move  both of them forward
        {
           return 0;
        }

        else if (arr1[j] == arr2[i]) // If we donot have a element smaller or equal to the second array then break
        {
            j++;
            i++;
        }
    }
    if (i < n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// Driver Code
int main()
{
    const int SIZE1 = 5;
    const int SIZE2 = 10;
    int numbers1[SIZE1] = {2, 3, 5, 9, 10};
    int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};
   cout<<"array 1 is "<<endl;
    for(int i=0;i<5;i++){
      cout<<numbers1[i]<<"\t"<<endl;
    }
  cout<<"array 2 is "<<endl;
    for(int i=0;i<10;i++){
      cout<<numbers2[i]<<"\n";
    }
    if (is_Subset(numbers1, numbers2, SIZE1, SIZE2))
    {
        cout<<"arr1 is subset of arr2 ";
    }
    else
    {
        cout<<"arr1 is not a subset of arr2 ";
    }
    return 0;
}
