#include <iostream>
#include <vector>
using namespace std;

//A C++ Program to show while loops.

int main()
{
	vector <int> vec(10);
	int i= 0;

	while(i < vec.size())
	{
		i++;
		if (i == 3){cout << " | Skipped"; continue;}
		if (i == 8){cout << endl << "Done"; break;}

		vec[i-1] = i;
		cout << " | " << vec.at(i-1);
	}

	return 0;
}