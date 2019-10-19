#include <iostream>
#include <string>
#include <vector>

// reverse a vector list using recursion

using namespace std;

int myGlobal = 0;

int recusiveMode(int n, vector<string> *vec) {

	if (n < 2) {
		return 2;
	}


	string temp = vec->at(myGlobal);
	vec->at(myGlobal) = vec->at(n);
	vec->at(n) = temp;
	myGlobal++;

	recusiveMode(n - 1, vec);
	cout << n << endl;

}

int main() {

	// point to position 0 on the heap for this array
	vector<string> *vec = new vector<string>;
	vec->push_back("same");
	vec->push_back("alex");
	vec->push_back("amanda");
	vec->push_back("max");
	vec->push_back("chris");

	for (int i = 0; i < vec->size(); i++) {
		std::cout << vec->at(i) << ' ';
	}

	cout << endl;

	recusiveMode(vec->size() - 1, vec);


	for (int i = 0; i < vec->size(); i++) {
		std::cout << vec->at(i) << ' ';
	}









}