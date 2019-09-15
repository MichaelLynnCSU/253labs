//// People who program by guesswork are often wrong about .eof().
//// They think that it means “Will the next read fail?”.
//// They are wrong. It means “Did the previous read fail?”.
//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ifstream in("/etc/resolv.conf");
//	string line;
//
//	while (!in.eof()) {
//		getline(in, line);
//		cout << "★★★ " << line << '\n';
//	}
//}