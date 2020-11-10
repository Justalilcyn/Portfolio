#include <iostream>
using namespace std;

int main()
{
	// Variable declarations
	int distance = 0;
	int speed = 60;
	int time = 0;
	int nellie = 0;



	// Calculate Distance for different times
	// Distance in 5 hours
	time = 5;
	distance = speed * time;
	// Show distance on screen
	cout << "Distance travelled in " << time << " hours is " << distance << " miles. " << endl;

	// Distance in 8 hours
	time = 8;
	distance = speed * time;
	// Show distance on screen
	cout << "Distance travelled in " << time << " hours is " << distance << " miles. " << endl;

	// Distance in 12 hours
	time = 12;
	distance = speed * time;
	// Show distance on screen
	cout << "Distance travelled in " << time << " hours is " << distance << " miles." << endl;

	cout << "We're done! Time to chill! ";

	cout << "Whoa, Nellie!";
	cin >> nellie;

	return 0;

}