#include <iostream>
using namespace std;

//A C++ Program to show ternary.

int main()
{
	int a, b, max;
	a = 1, b = 24;

	cout << "Variable a value is: ";
	cout << ((a != 1)? "not one, " : "one, ");
	cout << (( a%2 != 0)? "odd": "even" );

	cout << endl << "Variable b value is: ";
	cout << (( b != 1 )? "not one, " : "one, " );
	cout << (( b%2 != 0)? "odd" : "even");

	max = (a > b)? a:b;
	cout << endl << "Greater value is: " << max << endl;



	return 0;
}