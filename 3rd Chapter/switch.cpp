#include <iostream>
using namespace std;

//A C++ Program to show switch statements.

int main()
{
	int num = 6;

	switch(num)
	{
	case 1: cout << num << " : Monday"; break;
	case 2: cout << num << " : Tuesday"; break;
	case 3: cout << num << " : Wednesday"; break;
	case 4: cout << num << " : Thursday"; break;
	case 5: cout << num << " : Friday"; break;
	
	default: cout << num << " : Weekend Day";

	}

	return 0;
}