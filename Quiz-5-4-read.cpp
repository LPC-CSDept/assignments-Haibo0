#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream  ifs;
  int       numofemployee,employeeid;
  string    employeename,department;
  double    salary,tsum,tavg;
  
  
  ifs.open("employeeRecord.txt");
  if(!ifs){
    cerr<<"File open Error\n";
    exit(0);
  }
  
    ifs>>numofemployee;
 
  for(int i=0;i<numofemployee;i++){
      ifs>>employeename>>salary;
   
     cout<<employeeid<<"\t "<<employeename<<"\t"<<salary<<endl;
      tsum += salary;
    tavg = tsum/numofemployee;
   cout<<"Total Sum:\t"<<tsum<<"Total Average:\t"<<tavg<<endl;
    }  
      

    
  }