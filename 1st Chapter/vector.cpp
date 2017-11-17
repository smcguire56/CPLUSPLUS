#include <iostream>
#include <vector>	// vectors library required.
using namespace std;

//A C++ Program to output variables.

int main()
{
	vector <int> vec(3,100);

	cout << "\nvector <int> vec(3,100);" << endl;	

	cout << "Vector size: " << vec.size() << endl;
	cout << "Is empty? 1=true, 0=false: " << vec.empty() << endl;
	cout << "First element: " << vec.at(0) << endl;
	cout << "Final element: " << vec.back() << endl;

	vec.pop_back();			// Remove final Element
	cout << "\nvec.pop_back();" << endl;
	cout << "Vector size: " << vec.size() << endl;
	cout << "Final element: " << vec.back() << endl;

	vec.clear();		   // Remove all Elements
	cout << "\nvec.clear();" << endl;
	cout << "Vector size: " << vec.size() << endl;

	vec.push_back(200);	   // Add an Element 
	cout << "\nvec.push_back(200);" << endl;
	cout << "First element: " << vec.front() << endl;

	return 0;
}