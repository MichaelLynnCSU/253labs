// Change the container type to show their characteristics.
//
// vector       - unsorted, duplicates allowed
// list         - unsorted, duplicates allowed
// string       - unsorted, duplicates allowed
// set          - sorted, duplicates forbidden
// unorderset   - unsorted, duplicates forbidden
// multiset     - sorted, duplicates allowed



// map          - duplicate keys forbidden, sorted/unsorted key/data
// multimap     - duplicates keys allowed, sorted/unsorted key/data

#include <vector>
#include <list>
#include <set>
#include <string>
#include <iostream>				// for cout
#include <iomanip>				// for setprecision
#include <sstream>				// for ostringstream
#include <cmath>				// for atan
using namespace std;

int main()
{
	std::ostringstream ss;

	ss << std::setprecision(10) << 4 * atan(1);

	const std::string pi = ss.str();		      // First ten digits of π
	{
		std::set<std::string> container(pi.begin(), pi.end());	      // Try vector/list/set/multiset

		for (std::set<std::string>::iterator it = container.begin(); it != container.end(); ++it)
			std::cout << *it << ' ';

		std::cout << '\n';
	}

	//{
	//	multiset<char> container(pi.begin(), pi.end());

	//	for (multiset<char>::iterator it = container.begin(); it != container.end(); ++it)
	//		cout << *it << ' ';

	//	cout << '\n';
	//}

	{
	
		vector<int> container = {12,12,12,12,12,12};
		vector<int>::iterator it;
		for (it = container.begin(); it != container.end(); ++it)
		{
			*it = 5;
			std::cout << *it << ' ';
		}



		std::cout << '\n';

		for (auto &i : container) 
		{
			i = 6;
			std::cout << i << endl;
		}

	}

	//{
	//	list<char> container(pi.begin(), pi.end());
	//	
	//	for (list<char>::iterator it = container.begin(); it != container.end(); ++it)
	//		cout << *it << ' ';

	//	cout << '\n';

	//}




	system("pause");
}