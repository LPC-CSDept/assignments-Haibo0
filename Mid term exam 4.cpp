
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRdnum( );
int getRdnum(n1);
int getRdnum(n1,n2); 
int main()
{
    int num;
    cout<<"The random number is "<<num<<endl;
   
}
int getRdnum( )
{
    int num;
    num=rand()%100+1;
    return num;
}
int getRdnum(n2)
{
    int num;
    num=rand()%n2+1;
    return num;
}
int getRdnum(n1, n2)
{
    int num;
    num=rand()%(n2-n1+1)+n1;
    return num;
}





