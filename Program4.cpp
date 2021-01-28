#include <iostream>
#include <string>
using namespace std;

/*
Problem 4 (conversion.cpp): Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
new input values until the user says he or she wants to end the program (user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/

void getInput(double&, double&);
void convert(double&, double&, double&, double&);
void output(double&, double&, double&, double&);

int main()
{
	double feet, inches, centi, meter;
	string in;
	while (true) {
		getInput(feet, inches);
		convert(feet, inches, meter, centi);
		output(feet, inches, meter, centi);
		cout << "Enter anything to go again. Type exit to exit: ";
		cin >> in;
		if (in == "exit") {
			break;
		}
		else {
			continue;
		}
	}
	system("pause");
	return 0;
}

void getInput(double &ft, double &in)
{
	while (true) {
		cout << "Enter the length in feet: ";
		cin >> ft;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Enter a number.\n";
		}
		else {
			while (true) {
				cout << "Enter the length in inches: ";
				cin >> in;
				if (cin.fail()) {
					cin.clear();
					cin.ignore();
					cout << "Enter a number\n";
				}
				else {
					break;
				}
			}
			break;
		}
	}
}

void convert(double &ft, double &in, double &m, double &cm)
{
	m = ft * .3048;
	cm = in / 12 * 30.48;
}

void output(double &ft, double &in, double &m, double &cm)
{
	cout << ft << " feet " << in << " inches.\nIs\n";
	cout << m << " meters " << cm << " centimeters.\n";
}