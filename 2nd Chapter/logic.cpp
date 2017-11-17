#include <iostream>
using namespace std;

//A C++ Program to output logic gates.

int main()
{
	int a = 1, b = 0;

	cout << "AND Logic:" << endl;
	cout << "(a && a) " << (a && a) << "(true) ";
	cout << "(a && b) " << (a && b) << "(false) ";
	cout << "(b && b)" << (b && b) << "(false) " << endl;

	cout << endl << "OR Logic:" << endl;
	cout << "(a || a) " << (a || a) << "(true) ";
	cout << "(a || b) " << (a || b) << "(true) ";
	cout << "(b || b) " << (b || b) << "(false) " << endl;

	cout << endl << "NOT Logic:" << endl;
	cout << "a = " << a << " !a = " << !a << "  ";
	cout << "b = " << a << " !b = " << !a << "  ";


	return 0;
}