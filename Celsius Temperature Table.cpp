#include <iostream>
using namespace std;

//function
double convertTemp(double);

int main()
{
	//variables
	int open;
	double temperature;

	//show temperatures
	cout << "Fahrenheit\t\tCelcius " << endl;
	
	//controlled loop that loops 20 times
	for (double temperature = 0; temperature < 21; temperature++)
	{
		cout << temperature << "\t\t\t " << convertTemp(temperature) << endl;
	}
	
	//keeps window open
	cin >> open;
	return 0;
}
	
//runs calculations
double convertTemp(double temperature)
{
	return (temperature - 32) * 5/9;
}