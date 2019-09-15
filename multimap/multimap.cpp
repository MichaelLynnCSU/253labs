
#include <map>
#include <string>
#include <iostream>				// for cout
#include <iomanip>				// for setprecision
#include <sstream>				// for ostringstream
#include <cmath>				// for atan

using namespace std;

int main()
{

	map<string, double> gpa;	// Try multimap

	map<string, double>::iterator it;

	pair<string, double> p("Jack", 3.998);

	gpa.insert(p);

	p.first = "Wim";     p.second = 4.20; gpa.insert(p);  // Wim Bohm

	p.first = "Ross";    p.second = 3.92; gpa.insert(p);  // Ross Beveridge

	p.first = "Darrell"; p.second = 2.0;  gpa.insert(p);  // Some poor dope

	p.first = "Ross";    p.second = 3.87; gpa.insert(p);  // Ross McConnell

	for (it = gpa.begin(); it != gpa.end(); ++it)
		cout << it->first << " has a GPA of " << it->second << '\n';

	system("pause");

}