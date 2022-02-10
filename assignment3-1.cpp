#include<iostream>
using namespace std;

int main()
{

int classA;
int classB;
int classC;

int priceA=15;
int priceB=12;
int priceC=9;

int total;

cout <<"number of A:";
cin>>classA;
cout <<"number of B:";
 cin>>classB;  
cout <<"number of C:";
 cin>>classC;

 total =(classA*priceA)+ (classB*priceB)+(classC*priceC);

 cout<<"total price:"<<total<<endl;
}