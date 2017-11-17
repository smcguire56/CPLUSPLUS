#include <iostream>
#include <string>
using namespace std;

//A C++ Program to show input.

int main()
{
	string name;
	cout << "Please enter your full name: ";
	cin >> name;
	cout << "Welcome " << name << endl;

	cout << "Please re-enter your full name: ";
	cin.ignore(256, '\n');
	getline(cin, name);
	cout << "Thanks, " << name << endl; 
	
	return 0;
}