#include <iostream>
using namespace std;

void writeOutput(int*);
void computeTriple(int*);

int main()
{
	int num = 5;
	int* ptr = &num;

	writeOutput(ptr);

	*ptr += 15;
	writeOutput(ptr);

	computeTriple(ptr);
	writeOutput(ptr);
	return 0;
}

void writeOutput(int* value)
{
	cout << "Current Value: " << *value << endl;
}

void computeTriple(int* value)
{
	*value *= 3;
}