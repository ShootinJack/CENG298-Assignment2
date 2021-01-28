#include <iostream>
using namespace std;

/*
Problem 2 (zeroboth.cpp): Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.
*/

void zeroBoth(int&, int&);

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << " y = " << y << endl << "Now we put them in the function.\n";
	zeroBoth(x, y);
	cout << "x = " << x << " y = " << y << endl;

	cout << "Great Success!\n";
	system("pause");
	return 0;
}

void zeroBoth(int &n1, int &n2)
{
	n1 = 0;
	n2 = 0;
}