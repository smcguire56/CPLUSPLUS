#include <iostream>
using namespace std;

//A C++ Program to show point.

int main()
{
	int num[] = {1,2,3,4,5,6,7,8,9,10};

	int* ptr = num;

	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	ptr++;
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	ptr++;
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

	ptr -= 2; 
	cout << endl << "ptr at: " << ptr << " gets: " << *ptr;
	cout << endl;

	for(int i = 0; i < 10; i++)
	{
		cout << endl << "Element: " << i;
		cout << "	Value: " << *ptr;
		ptr++; 
	}	
	return 0;
}
