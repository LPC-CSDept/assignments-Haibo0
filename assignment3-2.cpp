#include <iostream>
using namespace std;
int main()
{
double students;
double males;
double females;

double percentageoffemales;
double percentageofmales;

cout<<"Enter the number of students:";
cin >> students; 
cout<<"Enter the number of males:";
cin >> males;
cout<<"Enter the number of females:";
cin >> females;

percentageoffemales= females/students;
percentageofmales= males/students;

cout<<"The percentage of females"<<percentageoffemales<<endl;
cout<<"The percentage of males"<<percentageofmales<<endl;
return 0;
}