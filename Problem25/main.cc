/*
 * Set bigNumber digit number to 1000 for this program
*/

#include <iostream>
#include <bigNumber.h>
#include <bigNumber.cpp>

using namespace std;

int main()
{
	
	//First and Second fibonacci numbers given.
	bigNumber term1("1");
	bigNumber term2("1");
	bigNumber fibNumb("0");
	
	//Current Term
	int term = 2;
	
	while(fibNumb.at(0) == '0')
	{
		fibNumb = term1 + term2;
		
		
		term1 = term2;
		term2 = fibNumb;
		++term;
	}
	cout << term << endl;
	
}
