// This example shows why typename is needed.
// Don’t confuse typename with typedef.

#include <iostream>
#include <set>

using namespace std;

// superset is just like a set, except that it doesn’t like 42.

template <class T>
class superset {
public:
	typename typedef set<T>::iterator iterator;		// This won’t compile without typename.  Why?

	void insert(const T &val) {
		if (val != 42)
			storage.insert(val);
	}
	iterator begin() const {
		return storage.begin();
	}
	iterator end() const {
		return storage.end();
	}
private:
	set<T> storage;
};

int main() {
	superset<double> ss;
	ss.insert(3.14159);
	ss.insert(42.0);
	ss.insert(2.71828);

	for (superset<double>::iterator it = ss.begin(); it != ss.end(); ++it)
		cout << *it << ' ';
	cout << '\n';

	for (auto d : ss)
		cout << d << ' ';
	cout << '\n';
}