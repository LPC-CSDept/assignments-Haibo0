
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRdnum(void);
int isGreater(int n);
int main()
{
    ofstream outfile;
    outfile.open("random.txt");
    srand(time(0));
    int num;
    for(int i=0;i<10;i++)
    {
        num=getRdnum();
        outfile<<num<<endl;
    }
    outfile.close();
    return 0;
}
int getRdnum(void)
{
    int num;
    num=rand()%50+1;
    return num;
}
int isGreater(int n)
{
    int num;
    if(num>n)
        return num;
    else
        return 0;
}


