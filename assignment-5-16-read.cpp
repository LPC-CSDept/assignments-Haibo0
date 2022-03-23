#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream  ifs;
  int       numofstudent;
  string    studentname;
  double    score1, score2;
  double    sum,avg;
  double    tsum,tavg;

  ifs.open("studentRecord.txt");
   if(!ifs){
    cerr<<"File open Error\n";
    exit(0);
  }
  ifs>>numofstudent;
  tsum = 0;
  for(int i=0;i<numofstudent;i++){
      ifs>>studentname>>score1>>score2;
      sum = score1+score2;
      avg =sum/2;
      tsum += sum;
    
      cout<<studentname<<"\t "<<score1<<"\t"<<score2<<endl;
      cout<<"Sum:\t"<<sum<<"Average:\t"<<avg<<endl;

    
  }
   tavg = tsum/numofstudent;
   cout<<"Total Sum:\t"<<tsum<<"Total Average:\t"<<tavg<<endl;
}