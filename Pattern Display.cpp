#include <iostream>
using namespace std;

int main()
{
	//Variables
	const int traingle = 11;
	const int length = 0;
	int stop;

	//First pattern
    for (int row = 0; row < traingle; row++)
	{
		for (int column = 0; column < (row+length); column++)
		{
			cout << "+";
		}
		cout << endl;
	} 
	
	cout << "-----------\n"; 

	//Second pattern
	for (int row = 0; row < traingle; row++)
	{
		for (int column = 11; column > (row+length); column--)
		{
			cout << "+";
		}
		cout << endl;
	}
	//Keeps window open
	cin >> stop;
}