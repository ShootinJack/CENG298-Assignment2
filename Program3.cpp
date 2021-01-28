#include <iostream>
using namespace std;

/*
Problem 3 (salestax.cpp): Implement a function called addTax. The function addTax has two formal
parameters: taxRate (float), which is the amount of sales tax expressed as a percent; and cost (float),
which is the cost of an item before tax. The function returns the value (float) of cost so that it includes
sales tax.
*/

float addTax(float, float);

int main()
{
	float cost = 1000, tax = .08;
	cout << "I bought a new GPU for $1000!\nOh man i forgot about the 8 percent tax\n";
	cout << "Oh well I guess im spending $" << addTax(tax, cost) << " instead. Not bad.\n";

	system("pause");
	return 0;
}

float addTax(float tRate, float cost)
{
	return(cost + (cost*tRate));
}