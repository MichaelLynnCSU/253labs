//#include <random>
//#include <iostream>
//#include <ctime>
//#include <map>
//#include <string>
//using namespace std;
////Define a random - number generator, and use() to generate a number.This is not a function call, 
////because gen is an object, not a function.It’s operator().
//int main() 
//{
//	// seconds since start of 1970
//	const auto seed = time(nullptr);
//
//	minstd_rand a, b(seed);
//
//
//	uniform_int_distribution<int> dist(1, 6);
//	
//	for (int i = 0; i<5; i++)
//		cout << a() << '\n';
//
//	cout << "\n";
//
//	for (int i = 0; i<10; i++)
//		cout << dist(b) << '\n';
//
//	cout << "\n";
//
//	normal_distribution<double> dist2(21.5, 1.5);
//	map<int, int> tally;
//
//	for (int i = 0; i<10000; i++)
//		tally[dist2(b)]++;
//
//	for (auto p : tally)
//		cout << p.first << ": " << string(p.second / 100, '#') << '\n';
//	system("pause");
//
//}