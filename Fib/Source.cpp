#include <iostream>
#include <string>
#include <vector>

// reverse a vector list using recursion

using namespace std;

int myGlobal = 0;


void recusiveMode(int n) {

	if (n > 1) {
		cout << "yep1 " << n << endl;
		recusiveMode(n - 1);
		cout << "yep2 " << n << endl;
	}

	cout << "yep3 " << n << endl;
}

int  recusiveMode2(int n) {
	int temp = 0;
	if (n > 1) {
		cout << "yep1 " << n << endl;
		temp = recusiveMode2(n - 1);
		cout << "yep2 " << temp << endl;
	}
	else {
		return 0;
	}

	cout << "yep3 " << temp << endl;

}

int  recusiveMode3(int n) {
	int temp = 0;
	if (n > 1) {
		cout << "yep1 " << n << endl;
		temp = recusiveMode3(n - 1);
		cout << "yep2 " << temp << endl;
	}

		return n;


	cout << "yep3 " << temp << endl;

}

int  recusiveMode4(int n) {
	int temp = 0;
	if (n < 1) {

		return 0;

	}
		cout << "yep1 " << n << endl;
	    temp = recusiveMode4(n - 1) + 1;
		cout << "yep2 " << temp << endl;
		return temp;

}

int  recusiveMode5(int n) {
	int temp = 0;
	if (n < 2) {

		return n;

	}

	cout << "yep1 " << n << endl;
	temp = recusiveMode5(n - 1) + recusiveMode5(n - 2);
	cout << "yep2 " << temp << endl;
	return temp;

}
int main() {

//	recusiveMode(5);
//	recusiveMode2(5);
//	recusiveMode3(5);
//	recusiveMode4(5);
	recusiveMode5(4);


}