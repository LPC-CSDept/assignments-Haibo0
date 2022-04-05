#include	<iostream>
using namespace	std;

int	evensumGet(int);
int	oddsumGet(int);

int	main()
{
	int 	evenSum=0,oddSum=0; 
	int	input;

	do
	{
		cout << " Enter your input \n";
		cin >> input;
		if ( input == -1)
			break;
		else if ( input % 2)
			oddSum = oddsumGet(input);
	      	else 
			evenSum = evensumGet(input);
	} while (1);
	cout << oddSum << ": The summation of all Odd inputs\n";
	cout << evenSum << ": The summation of all Even inputs\n";
}

int	evensumGet(int input)
{
    int	sum=0;
    for (int i=2; i<=input; i+=2)
        sum += i;
    return sum;
}

int	oddsumGet(int input)
{
    int	sum=0;
    for (int i=1; i<=input; i+=2)
        sum += i;
    return sum;
}