#include <iostream>
#include <string>
using namespace std;

//A C++ Program to show addresses of data.

int main()
{
	int num = 100;
	double sum = 0.0123456789;
	string text = "C++ Fun";

	cout << "Integer variables starts at: " << &num << endl;
	cout << "Double variables starts at: " << &sum << endl;
	cout << "String variable starts at: " << &text << endl;
	return 0;
}
