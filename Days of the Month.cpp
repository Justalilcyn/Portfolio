#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variable
	const int size = 12;
	int open;

	string months[size] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	int days[size] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//Loop
	for (int index = 0; index < size; index++)
	{
		cout << months[index] << " has " << days[index] << " days " << endl;
	}
	cin >> open;
	return 0;
}