#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
        // define structure
        const unsigned short N=5;
        struct Scores{
                double sc[N];
                string grade;
        };
        
        struct Grade{
                string first;
                string last;
                string ssn;
                Scores score;
        };
        
        Grade g;
        int count = 1;
        
        // open file for input
        ifstream fin("grades.txt");
        
        // open binary file for write
        ofstream fout("grades.bin", ios::out | ios::binary);
        if(!fout){
                cout<<"Cannot open grades.bin file.\n";
                return 0;
        }
        
        if(!fin){
                cout<<"Cannot open grades.txt file.\n";
                return 0;
        }
        // read all 16 records from grades.txt file
        while(count<=16){
                // store each data in structure
                fin>>g.first;
                fin>>g.last;
                fin>>g.ssn;
                fin>>g.score.sc[0];
                fin>>g.score.sc[1];
                fin>>g.score.sc[2];
                fin>>g.score.sc[3];
                fin>>g.score.sc[4];
                fin>>g.score.grade;
                
                // write structure g in binary file
                fout.write((char *) &g, sizeof(Grade));
                
                count++;
        }
        
        //  display success message 
        if(fout.good()){
                cout<<"All records from Grades.txt are written in Grades.bin file successfully.";
        }
        else{
                cout<<"Error in write records in Grades.bin file";
        }
        // close files
        fin.close();
        fout.close(); 
                
        
        
        return 0;
}