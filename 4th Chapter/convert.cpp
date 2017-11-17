#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//A C++ Program to show conversion.

int main()
{
	string term = "100";
	int number = 100;

	int num;				// To store a converting string.
	string text;			// To store a converting integer.
	stringstream stream;	// To perform conversion.

	stream << term;			// Load the string.

	stream >> num;			// Extract the integer.

	num /= 4;
	cout << "Integer value: " << num << endl;

	stream.str("");
	stream.clear();

	stream << number; 		// Load the integer

	stream >> text;		 	// Extract the string

	text += " Per Cent";
	cout << "String value: " << text << endl;
	
	return 0;
}