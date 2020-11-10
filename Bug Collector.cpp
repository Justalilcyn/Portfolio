#include <iostream>
using namespace std;

int main()
{
	//Variables
	int bugs = 0;
	int days = 0;
	int total = 0;

	//Bug collecting loop
	for (days = 1; days <= 7; days++)
	{
		cout << "How many bugs were collected today? " << endl; 
		cout << endl;
		cin >> bugs;
		cout << endl;
			
		total += bugs;
	}
	
	//Display total amount of bugs
	cout << "Total amount of bugs collected is: " << total << endl;

	//Keeps window open
	cin >> bugs;
}