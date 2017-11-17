#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//A C++ Program to write a file.

int main()
{
	string poem = "\n\tI never saw a man who looked";
	poem.append("\n\tWith such a wistful eye");
	poem.append("\n\tUpon that little tent of blue");
	poem.append("\n\tWhich prisinors call the sky");

	ofstream writer("poem.txt");

	if(!writer)
	{
		cout << "Error opening file for output" << endl;
		return -1;
	}
	writer << poem << endl;
	writer.close();

	return 0;
}

