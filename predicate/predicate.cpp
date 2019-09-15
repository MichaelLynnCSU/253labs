// This program demonstrates the find_if algorithm.
// This is NOT a method!

#include <algorithm>	    // for find_if
#include <set>
#include <iostream>

using namespace std;

// This is a predicate.  In general, a predicate is a function
// that returns a boolean.

bool pred(int n) {
	return n > 20 && n < 25;		// Should find 23
									// return n > 50;			// Should find 53
									// return n > 20 && n < 22;		// Should fail
}

int main() {
	set<int> s = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
		43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	set<int>::iterator it;		// or use auto

	it = find_if(s.begin(), s.end(), pred);
	if (it == s.end())
		cout << "Failure\n";
	else
		cout << "Success, *it=" << *it << '\n';
	system("pause");
}