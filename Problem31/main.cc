/*
In England the currency is made up of pound, £, and pence, p, and there are
eight coins in general circulation:

1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).

It is possible to make £2 in the following way:
1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p

How many different ways can £2 be made using any number of coins?
*/
#include <iostream>

using namespace std;

//int sum = 0;
const int NUMB_DENOMS = 2;
int denominations[NUMB_DENOMS] = {1,2};

int possible_combinations(int total)
{
	static int sum = 0;
	if(total < 0) return 0;
	if(total == 0) return 1;
	
	for(int i = NUMB_DENOMS - 1; i >= 0; --i)
	{
		//cout << denominations[i] << endl;
		
		cout << "TOTAL: " << total << endl;
		cout << "DENOMIATION: " <<denominations[i] << endl;
		if(possible_combinations(total - denominations[i]))
		{
			++sum;
			cout << "hi" << endl;
		}
		//sum = sum + possible_combinations(total - denominations[i]);
		//return possible_combinations(total - denom
	}
	
	return sum;
}


int main()
{
	cout << possible_combinations(2);
	
}
