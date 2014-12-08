#include <iostream>
#include <bigNumber.h>
#include <bigNumber.cpp>

using namespace std;

int main()
{
	bigNumber x("5");
	bigNumber y("11");
	x = x * 2;
	cout << x << endl;
}
