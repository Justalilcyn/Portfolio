#include <iostream>
using namespace std;

//Function
double kineticEnergy(double, double);

int main()
{
	//Variables
	int open;
	double mass;
	double velocity;
	double kineticenergy;

	//Enter mass
	cout << "Enter object's mass: ";
	cin >> mass;
	cout << endl;

	//Enter velocity
	cout << "Enter object's velocity: ";
	cin >> velocity;
	cout << endl;

	//Call Function
	kineticenergy = kineticEnergy(mass, velocity);
	cout << "The kinetic energy of the object is: " << kineticenergy;

	//Keep window open
	cin >> open;
	return 0;
}

//Runs Calculations
double kineticEnergy(double mass, double velocity)
{
	return (pow(velocity, 2.0) * (mass) * (.5));
}