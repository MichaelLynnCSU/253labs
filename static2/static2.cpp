// static2.cpp : Defines the entry point for the console application.
//

// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <vector>
#include <string>

static vector<string> testingV;

class testingstatic
{
public:

	void testS(vector<string> testingV2);

};

int main()
{

	testingstatic T1;

	testingV.push_back("value1");

	for (int i = 0; i < testingV.size(); i++) {
		cout << testingV.at(i) << ' ';

	}

	vector<string> testingV2;

	T1.testS(testingV2);

	for (int i = 0; i < testingV2.size(); i++) {
		cout << testingV2.at(i) << ' ';

	}

	return 0;
}

void testingstatic::testS(vector<string> testingV2)
{
	testingV.push_back("value2");
	testingV2.push_back("newvalue1");
}
