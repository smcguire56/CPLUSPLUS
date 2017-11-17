#include <stdexcept> // support standard exception.
#include <typeinfo>	 // support type information.
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//A C++ Program to use what function to find exceptions.

int main()
{
	string lang = "C++";
	int num = 1000000000; // 1 billion

	try 
	{
		//lang.replace(100, 1, "C");
		//lang.resize(3 * num);
		ifstream reader("nonsuch.txt");
		if(!reader) throw logic_error("File not found");
	}

	catch(out_of_range &e)
	{
		cerr << "Range Exception: " << e.what() << endl;
		cerr << "Exception type: " << typeid(e).name();
		cerr << endl << "Program terminated." << endl;
		return -1;
	}

	catch (exception &e)
	{
		cerr << "Exception: " << e.what() << endl;
		cerr << "Exception Type: " << typeid(e).name() << endl;
	}

	cout << "Program continues..." << endl; 

	return 0;
}