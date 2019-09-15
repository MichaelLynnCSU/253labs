//// position in output stream
//#include <fstream>      // std::ofstream
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	std::ofstream outfile;
//	outfile.open("test.txt");
//
//	outfile.write("This is an apple", 16);
//  Returns the position of the current character in the output stream
//	long pos = outfile.tellp();
//	cout << "tellp: " << pos << endl;
//	outfile.seekp(pos - 7);
//	outfile.write("w", 1);
//
//	outfile.close();
//
//	return 0;
//}