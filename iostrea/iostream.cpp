// This file is part of a series that illustrates the ostream_iterator
// and insert_iterator template classes.
//
// This code displays values the hard way, with an explicit loop.

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main() 
{
	int z, y, x = 5;
	cin >> x >> y;
	cout << "sdfsdf:  "  << y << x;
	//	z = NULL;  // needs to be init before printed or error is throw error C4700: uninitialized local variabl
	cout << z;
	//system("pause");
}