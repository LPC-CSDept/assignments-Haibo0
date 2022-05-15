#include	<iostream>
#include	<cstdlib>
#include	<ctime>
#include	<vector>
#include	<algorithm>
#include	<iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
	vector<int> number;
	int 	size = 20;
	srand(time(0));
	makevector(number, size);
	printvector(number);
	deleteone(number);
}
void makevector(vector<int> &vec, int size)
{
	for(int i=0; i<size; i++)
    	    vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
	for(int v : vec)
    	     cout << v << "\t";
	cout << endl;
}
void deleteone(vector<int>&vec)
{
    int usernum,deletecnt=0;
    cin>>usernum;
//swap userunm to the last element and delete the last element
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i] == usernum)
        {
            swap(vec[i],vec[vec.size()-1]);
            vec.pop_back();
            deletecnt++;
        }
    }  

    cout<<usernum<<" is deleted "<<deletecnt<<" times"<<endl;
   printvector(vec); 
   
}