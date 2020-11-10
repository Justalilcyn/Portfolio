#include <iostream>
using namespace std;


int main()
{
	//Variables of Rectangle 1
	double length = 0;
	double width = 0;
	

	//Variable of Rectangle 2
	double length1 = 0;
	double width1 = 0;
	

	//Enter diminsions of rectangle 1
	cout << "Enter length of rectangle 1. " << endl;
	cout << "Length: ";
	cin >> length;
	cout << endl;
	cout << "Enter width of rectangle 1. " << endl;
	cout << "Width: ";
	cin >> width;
	cout << endl;
	cout << "The area of rectangle 1 is: " << length * width << endl;
	


	//Enter diminsions of rectangle 2
	cout << endl << "Enter length of rectangle 2. " << endl;
	cout << "Length: ";
	cin >> length1;
	cout << endl;
	cout << "Enter width of rectangle 2. " << endl;
	cout << "Width: ";
	cin >> width1;
	cout << endl;
	cout << "The area of rectangle 2 is: " << length1 * width1 << endl;
	

	//Compare area 1 and area 2
	if (length * width > length1 * width1)
	{
		cout << endl << "Rectangle 1 is bigger than rectangle 2. " << endl;
	}
	else if (length * width < length1 * width1)
	{
		cout << endl << "Rectangle 2 is bigger than rectangle 1. " << endl;
	}
	else if (length * width == length1 * width1)
	{
		cout << endl << "Both rectangles are the same size. " << endl;
	}
	cin >> width;
	
}