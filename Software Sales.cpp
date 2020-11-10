#include <iostream>
using namespace std;

int main()
{

	//Variables
	int quantity;
	int package = 99;

	//Amount of packages purchased
	cout << "How many packages are you purchasing?" << endl;
	cin >> quantity;
	cout << endl;

	//Calculate discount amount

	//Package amount 100 or more
	if (quantity >= 100)
	{
		cout << "You get a 50% discount. " << quantity * package * .5 << endl;
	}
	//Package amount 50 - 99
	else if (quantity >= 99)
	{
		cout << "You get a 40% discount. " << quantity * package * .6 << endl;
	}
	//Package amount 20 - 49
	else if (quantity >= 49)
	{
		cout << "You get a 30% discount. " << quantity * package * .7 << endl;
	}
	//Package amount 10 - 19
	else if (quantity >= 19)
	{
		cout << "You get a 20% discount. " << quantity * package * .8 << endl;
	}
	//Package amount 9 or less
	else 
	{
		cout << "You do not qualify for a discount. " << quantity * package << endl;
	}


	cin >> package;
}