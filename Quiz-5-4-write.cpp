#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ofstream  ofs;
  int       numofemployee,employeeid;
  string    employeename,department;
  double    salary;
  
  
  ofs.open("employeeRecord.txt");
  if(!ofs){
    cerr<<"File open Error\n";
    exit(0);
  }
  cin>>numofemployee;
  ofs<<numofemployee<<endl;
  
  for (int i=0;i<numofemployee;i++){
      cin>>employeeid>>employeename>>department>>salary;
      ofs<<employeeid<<" "<<employeename<<" "<<department<<" "<<salary<<endl;
  }
  ofs.close();
  
}