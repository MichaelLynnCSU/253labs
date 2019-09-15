// This program demonstrates the copy algorithm.
// This is NOT a method!

#include <algorithm>	    // for copy
#include <list>
#include <iostream>

using namespace std;

int main() {
	list<char> s = { 'n', 'e', 'h', 'e' };
	
	for (auto i : s)
	{
		cout << i;
	}

	cout << endl;

	s.push_front('o');
	s.push_back('a');
	s.push_front('b');
	s.push_back('d');
	s.push_front('X');
	

	list<char>::iterator it = s.begin();		// type list<char>::iterator

	for (auto i : s)
	{
		cout << i;
	}

	cout << endl;

	char buf[80];

	copy(++it, s.end(), buf);

	buf[8] = '\0';

	cout << buf << '\n';

	system("pause");
}