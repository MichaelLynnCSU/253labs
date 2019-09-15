//// This file is part of a series that illustrates the ostream_iterator
//// and insert_iterator template classes.
////
//// This code displays values the hard way, with an explicit loop.
//
//#include <iostream>
//#include <fstream>
//#include <iterator>
//
//using namespace std;
//
//int main() {
//	ifstream in("/etc/resolv.conf");
//
//	// Try changing <string> to <char> or <double>
//	istream_iterator<string> eos;
//	istream_iterator<string> it(in);
//	ostream_iterator<string> out(cout);	    // Try adding ", " argument
//
//	copy(it, eos, out);
//
//	system("pause");
//}