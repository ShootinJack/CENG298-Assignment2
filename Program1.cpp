#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
Problem 1 (intarray.cpp): Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write/print the integers back to the screen (console output). For this exercise
you need not use any functions.
*/

int main()
{
	int nums[10];
	cout << "Enter numbers\n";
	for (int i = 0; i < 10; ++i) {
		cout << i+1 << ": ";
		cin >> nums[i];
	}
	for (int i = 0; i < 10; ++i) {
		cout << nums[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}