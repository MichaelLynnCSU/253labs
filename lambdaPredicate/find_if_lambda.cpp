// This program demonstrates the find_if algorithm.
// This is NOT a method!

#include <algorithm>	    // for find_if
#include <set>
#include <iostream>

using namespace std;

int main() {
	set<int> s = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
		43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	auto it = find_if(s.begin(), s.end(),
		[](int n) {return n>20 && n<25; });

	if (it == s.end())
		cout << "Failure\n";
	else
		cout << "Success, *it=" << *it << '\n';
	system("pause");
}