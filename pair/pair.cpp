// This program demonstrates the templated pair class
// and the templated make_pair utility function.

#include <utility>	    // for pair and make_pair
#include <iostream>

using namespace std;

int main() {
	pair<int, double> p(11, 22.33);
	cout << p.first << ", " << p.second << '\n';

	p.first = 44; p.second = 55.66;
	cout << p.first << ", " << p.second << '\n';

	p = make_pair(77, 88.99);
	cout << p.first << ", " << p.second << '\n';

	system("pause");
}