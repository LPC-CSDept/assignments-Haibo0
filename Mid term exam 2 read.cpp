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
    cout<<"The total number of students is "<<numofstudent<<endl;
    int count = 0;  
    for(int i=0; i<numofstudent; i++){
        ifs>>studentname>>score1>>score2;
        sum = score1+score2;
        avg = sum/2;
        cout << "Student Name: " << studentname << endl;
        cout << "Score #1: " << score1 << "     " << "Score #2: " << score2 << endl;
        cout << "Sum of Scores: " << sum << "      " << "Average: " << avg << endl;
        if(avg>80)
            count++;
    }
    cout<<"The number of students who got average score greater than 80 is "<<count<<endl;
    ifs.close();
}
