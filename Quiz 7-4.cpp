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
    cin>>usernum;// taking input from the user
    for(int i=0;i<vec.size();i++)  // traversing the loop
    {
        if(vec[i]==usernum)
        {
            // if the element is found erase it
            vec.erase(vec.begin()+i);
            deletecnt++;  // increase the count value by +1 
        }
    }
    // diplaying result
    cout<<usernum<<" is deleted "<<deletecnt<<" times"<<endl;
   printvector(vec);
   
}