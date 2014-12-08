//Problem 7
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(unsigned n)
{
	if(n == 0 || n == 1) return false;
	for(unsigned i = 2; i < n; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
	 

int main()
{
	unsigned count = 0;
	int sum = 0;
	for(unsigned i = 0; count < 1000; i++)
	{
		if(is_prime(i))
		{
			count++;
			sum = sum + i;
		}
	}
	cout << sum << endl;
}

