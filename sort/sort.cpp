//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <functional>   // std::greater/less
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
//	/*Default comparison*/
//	string s = "Kokopelli";
//	sort(s.begin(), s.end(), compare);
//	cout << s << '\n';
//	
//	/*Explicit comparison*/
//	string s = "Kokopelli";
//	sort(s.begin(), s.end(), less<char>());
//	cout << s << '\n';
//
//	/*Reverse sort*/
//	string s = "Kokopelli";
//	sort(s.begin(), s.end(), greater<char>());
//	cout << s << '\n';
//
//	/*Unique*/
//	string s = "Kokopelli";
//	sort(s.begin(), s.end(), compare);
//	auto it = unique(s.begin(), s.end());
//	s.resize(it - s.begin());
//	cout << s << '\n';
//
//	/*λ - function*/
//	string s = "Kokopelli";
//	sort(s.begin(), s.end(),
//		[](char a, char b) {return a<b; });
//	cout << s << '\n';
//
//	system("pause");
//
//}