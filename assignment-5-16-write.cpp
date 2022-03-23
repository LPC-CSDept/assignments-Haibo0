#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ofstream  ofs;
  int       numofstudent;
  string    studentname;
  double    score1, score2;
  
  
  ofs.open("studentRecord.txt");
  if(!ofs){
    cerr<<"File open Error\n";
    exit(0);
  }
  cin>>numofstudent;
  ofs<<numofstudent;
  
  for (int i=0;i<numofstudent;i++){
      cin>>studentname>>score1>>score2;
      ofs<<studentname<<" "<<score1<<" "<<score2<<endl;
  }
  ofs.close();
  
}