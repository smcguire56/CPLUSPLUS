#include <iostream>
using namespace std;

//A C++ Program to output constants.

int main()
{
	const double PI = 3.1415926536;

	cout << "6\" circle circumference: " << (PI * 6) << endl;
	
	enum
	{ RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

	cout << "I shot a red worth: " << RED << endl;
	cout << "Than a blue worth: " << BLUE << endl;
	cout << "Total scored: " << (RED + BLUE) << endl;

	typedef enum { NEGATIVE, POSITIVE} charge;
	charge neutral = NEGATIVE, live = POSITIVE;

	cout << "Neutral Wire: " << neutral << endl;
	cout << "Live Wire: " << POSITIVE << endl;

	return 0;
}