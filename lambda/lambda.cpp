#include <iostream>
using namespace std;



int main() {

	auto p = [](double d) { return d / 2.0; };
	cout << p(8.6) << '\n';

	system("pause");

}