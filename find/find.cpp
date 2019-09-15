// This program demonstrates the find algorithm.
//
// This is NOT a method!  Some containers have a specialized find method,
// which is generally preferred.
//
// Find returns an iterator.  When find fails, it returns the end
// iterator of the half-open interval.
//
// You might think that it would return a null pointer, but, in general,
// iterators are NOT necessarily pointers.  They behave similarly to
// pointers, and they MIGHT be implemented as pointers, but maybe not.

#include <algorithm>	    // for find
#include <iostream>

using namespace std;

int main() {
	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
		43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	int *start = &primes[3];

	int *end = &primes[20];

	cout << "Search the interval [" << *start << ',' << *end << ")\n"
		<< "It includes " << *start << ", but not " << *end << '\n';

	int *p = find(start, end, 13);

	cout << "Found 13, *p=" << *p << '\n';

	p = find(start, end, 89);
	cout << "Couldn’t find 89, *p=" << *p << '\n';

	system("pause");

	return 0;
}