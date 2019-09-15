//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <functional>   // std::greater/less
//#include <set>
//using namespace std;
//
//bool compare(char a, char b) {
//	return a < b;
//}
////Of course, some containers are intrinsically sorted.
////You might specify a comparison functor for those containers.
////You wouldn’t use the sort algorithm for those containers.
////However, you might want to apply the sort algorithm to an unsorted container, such as a std::array, vector, string, or even a C array.
////list has a sort method.
//
//int main()
//{
//
//	//  containers take template class objecrt so we have to use functors instead of lambda functions
//	set<int, less<int> > s = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
//	for (auto v : s)
//		cout << v << ' ';
//
//	set<int, greater<int> > s = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
//	for (auto v : s)
//		cout << v << ' ';
//
//
//	struct compare{                            // 😱😱struct‽😱😱
//		bool operator()(int a, int b) const {
//		return a < b;
//	}
//	};
//
//	set<int, compare> s = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
//	for (auto v : s)
//		cout << v << ' ';
//
//
//	system("pause");
//
//}