// This example illustrates use of the C++11 unordered_set.
// It also illustrates C++11 list initialization
// (not to be confused with a ctor initialization list)
// and the C++11 range-based for loop.

#include <iostream>
#include <unordered_set>
#include<set>

using namespace std;

int main() 
{
	// sets are unordered no duplicates, numeric and alphabetic
	unordered_set<int> us = { 123, 123,456, 789, 2345, 6789, 12, 34, 56, 78 };

	for (const auto val : us)		// Note that the order of output
		cout << val << ' ';		// is not really any rational order
	cout << '\n';

	// sets are ordered no duplicates, numeric and alphabetic
	set<char> order = { 'g', 'd', 'a', 'z', 'z'};
	for (const auto val : order)		// Note that the order of output
		cout << val << ' ';		// is not really any rational order
	cout << '\n';
	system("pause");
	return 0;
}