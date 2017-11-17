#include <fstream> // include filestream support.
#include <iostream>
#include <string>
using namespace std;

//A C++ Program to read a file.(part b).

int main()
{
	string line;
	int i;

	ifstream reader("poem.txt");

	if (!reader)
	{
		cout << "Error opening file for output" << endl;
		return -1;
	}

	for(i = 0; ! reader.eof(); i++)
	{
		getline( reader, line);
		cout << line << endl;
	}

	reader.close();
	cout << "Itterations: " << i << endl;	
	return 0;
}
