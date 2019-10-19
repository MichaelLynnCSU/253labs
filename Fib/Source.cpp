#include <iostream>
#include <string>
#include <vector>

// reverse a vector list using recursion

using namespace std;

int myGlobal = 0;

int recusiveMode(int n) {

	if (n < 2) {
		return n;
	}

	return recusiveMode(n - 1) + recusiveMode(n - 2);

}

int main() {

	cout << "The 12th fibonacci number is: " << recusiveMode(12) << endl;


}