#include <iostream>
using namespace std;

int main()
{

// Variables
double price = 0;
double tip = .18;
double tax = .07;
//int amount = price * tip * tax;

// Calculate price of meal
cout << "Enter the price of the meal" << endl;
cin >> price;
cout << "Price of food " << price << endl;
cout << "18% tip: " << price * tip << endl;
cout << "7% tax: " << price * tax << endl;
cout << "Total cost: " << price + (price * tip) + (price * tax) << endl;

return 0;
}