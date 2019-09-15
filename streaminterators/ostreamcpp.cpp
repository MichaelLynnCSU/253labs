//#include <algorithm>
//#include <iostream>
//#include <iterator>
//#include <set>
//
//// Instead of using namespace std, let’s try explicit using declarations:
//
//using std::copy;
//using std::cout;
//using std::ostream_iterator;
//using std::set;
//
//int main() {
//	set<short> s = { 11, 22, 33, 44, 55 };
//	for (auto v : s)
//		cout << v << '-';
//	cout << '\n';
//
//	ostream_iterator<int> it(cout, ", ");
//	copy(s.begin(), s.end(), it);
//	cout << '\n';
//
//	system("pause");
//}