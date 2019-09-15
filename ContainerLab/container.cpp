#include <iostream>
#include <string>
using namespace std;


template <typename T, int N>
class fix 
{
public:

	size_t size() const {
		return N;
	}

	T &operator[] (size_t index)
	{
		if (index >= N)
		{

			throw string("out of bounds: ");

		}

		return *(data + index);
	}

	T *begin() {
		return &data[0];
	}

	T *end() {
		return &data[N];
	}

private:

	T data[N];

};


int main() {

	// error test
	try
	{
		fix<double, 13> f;

		f[14] = 6.66;
	}
	catch (string msg)
	{

		cout << msg << endl;

	}


	try
	{
		// array type, followed by fixed size of the container.
		fix<double, 4> f;
		f[0] = 1.2;
		f[1] = 3.4;
		f[2] = 5.6; // What’s in f[3]? nothing

		for (unsigned i = 0; i < f.size(); i++)
			cout << f[i] << ' ';
		cout << '\n';

		//// This is how a C++2003 programmer would display the contents of f:
		//// interate through addreess and print the values at those addresses
		//for (auto it = f.begin(); it != f.end(); ++it)
		//	cout << *it << ' ';
		//cout << '\n';

		//for (auto v : f)
		//	cout << v << ' ';
		//cout << '\n';
	}
	catch (string msg)
	{

		cout << msg;

	}

	/////testing
	int begin[2];

	// return alais to begin of array
	int &a = *begin;

	int &b = begin[1];

	int &c = *(begin + 1);
	
	cout << a << endl << b << endl << c << endl;

	
	// return address of to begin of array
	int *d = &begin[0];

	// return address of to begin of array
	int *e = &(*begin);

	system("pause");
}