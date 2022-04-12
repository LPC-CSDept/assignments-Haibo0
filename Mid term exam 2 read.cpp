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
    tavg = 0;
    for(int i=0; i<numofstudent; i++){
        ifs>>studentname>>score1>>score2;
        sum = score1+score2;
        tsum += sum;
    }
    tavg = tsum/numofstudent;
    cout<<"The sum of all students is "<<tsum<<endl;
    cout<<"The average of all students is "<<tavg<<endl;
    
    int count = 0;  
    for(int i=0; i<numofstudent; i++){
        ifs>>studentname>>score1>>score2;
        sum = score1+score2;
        avg = sum/2;
        if(avg>80)
            count++;
    }
    cout<<"The number of students who got average score greater than 80 is "<<count<<endl;
    ifs.close();
}