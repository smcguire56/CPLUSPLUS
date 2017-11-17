#include <iostream>
#include <string>
using namespace std;

//A C++ Program to use what function to find what type of error is shown.

int main()
{
	string lang = "C++";

	try
	{
		lang.erase(4,6);
	}

	catch (exception &error)
	{
		cerr << "Exception: " << error.what() << endl;
	}

	return 0;
}