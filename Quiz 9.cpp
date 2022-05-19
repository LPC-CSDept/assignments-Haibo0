#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// structure

struct Employee{
   int ID;
   string fname;
   string lname;
   double sal;
   string department;
   string month;
   int day;
   int year;
};

 

// read employee details in the array from the file
void readfile(Employee emps[], int size, int& count){
   count = 0;   
   ifstream  ifs;
  ifs.open ("employee.txt");
   if(!ifs){
       cout<<"Error: could not find the employee.txt file.";
       return ;
   }
  
   while(count<size &&
      
       ifs >> emps[count].ID
       >> emps[count].fname
       >> emps[count].lname
       >> emps[count].sal
       >> emps[count].department
       >> emps[count].month
       >> emps[count].day
       >> emps[count].year
       )
       count++;
  
   ifs.close();
  
}