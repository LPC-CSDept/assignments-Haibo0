#include	<iostream>
#include	<iomanip>
using	namespace std;
void	getListprime(int begin=0, int end=100);

int	main()
{
	int	begin, end;
	do {
		cout << "Enter two number\n";
		cin >> begin >> end;
		if (begin < end )
			getListprime(begin, end);
		else if ( begin > end)
			getListprime();
		else 
			getListprime(begin);
	} while ( begin != -1);
}
    
void	getListprime(int begin, int end)
{
    int	i, j, k;
    for (i=begin; i<=end; i++)
    {
        for (j=2; j<i; j++)
        {
            if ( i % j == 0)
                break;
        }
        if ( j == i)
            cout << i << "is prime number\n"; ";
    }
    cout << endl;
}