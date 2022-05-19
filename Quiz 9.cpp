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


//use while loop to read employee details in the array from the file
void readfile(Employee emps[], int size, int& count){
   count = 0;   
   ifstream  ifs;
  ifs.open ("employee.txt");
   if(!ifs){
       cout<<"Error: could not find the employee.txt file.";
       return ;
   }
  //The reason why while loop because I don't have to know how many informations in employee.txt
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
// use for loop to find and print all employees imformations
void employee(Employee emps[], int count){
   cout<<"Employees infomations\n";
    for(int i=0; i<count; i++){
           cout << emps[i].ID<<" ";
       cout << emps[i].fname<<" ";
       cout << emps[i].lname<<" ";
       cout << emps[i].sal<<" ";
       cout << emps[i].department<<" ";
       cout << emps[i].month<<" ";
       cout << emps[i].day<<" ";
       cout << emps[i].year<<" ";
       cout<<endl;
       
   }
   cout<<endl;
}
// use for loop to find and print all employees with salary > 100000
void salary(Employee emps[], int count){
   cout<<"Employees salary greater than 100,000\n";
   for(int i=0; i<count; i++){
    // //use if condition can very easy to find who salays greater than 100,000
     if(emps[i].sal > 100000){
           cout << emps[i].ID<<" ";
       cout << emps[i].fname<<" ";
       cout << emps[i].lname<<" ";
       cout << emps[i].sal<<" ";
       cout << emps[i].department<<" ";
       cout << emps[i].month<<" ";
       cout << emps[i].day<<" ";
       cout << emps[i].year<<" ";
       cout<<endl;
       }
   }
   cout<<endl;
}


// use for loop to print all employees with Computer department 
void computerdepartment(Employee emps[], int count){
   cout<<"Employees in Computer department:\n";
   for(int i=0; i<count; i++){
  //use if condition can very easy to find who work at Computer  department   
     if(emps[i].department=="Computer"){
           cout << emps[i].ID<<" ";
       cout << emps[i].fname<<" ";
       cout << emps[i].lname<<" ";
       cout << emps[i].sal<<" ";
       cout << emps[i].department<<" ";
       cout << emps[i].month<<" ";
       cout << emps[i].day<<" ";
       cout << emps[i].year<<" ";
       cout<<endl;
       }
   }
   cout<<endl;
}

//main function to drive all function
int main(){

   const int SIZE = 1000;
   Employee emps[SIZE];
   int count;
  
   readfile(emps,SIZE, count);
   if(count>0){
      employee(emps,count);
      salary(emps,count);
      computerdepartment(emps,count);  
   }
  

   return 0;
}

