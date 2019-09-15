//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main()
//{
//
//	ifstream in("test.txt");
//	char c;
//
//	// condidtion EOF
//
//	while (!in.eof())
//	{
//		in.get(c);
//	}
//	cout << "check eof bit: " << in.eof() << endl;
//	in.clear(in.goodbit);
//	cout << "clear bit: " << in.good() << endl;
//
//	// Condition failbit
//	in.open("doesnt_exist.txt");
//
//	cout << "check fail bit: " << in.fail() << endl;
//	in.clear(in.goodbit);
//	cout << "clear bit: " << in.good() << endl;
//
//
//
//
//}