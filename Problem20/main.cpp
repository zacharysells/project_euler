//n! means n  (n  1)  ...  3  2  1

//For example, 10! = 10  9  ...  3  2  1 = 3628800,
//and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

//Find the sum of the digits in the number 100!

#include <bigNumber.h>
#include <bigNumber.cpp>
using namespace std;

int main()
{
	bigNumber tmp;
	bigNumber factor1("100");
	
	for(int i = 99; i > 0; i--)
	{
		factor1 = factor1.mult(i);
	}
	int sum = 0;
	for(int i = 0; i < MAX_NUM_DIGITS_IN_NUMBER; i++)
	{
		sum = sum + (factor1.data[i] - '0');
	}
	cout << sum << endl;
}
