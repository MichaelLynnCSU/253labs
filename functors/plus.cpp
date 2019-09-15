//#include <iostream>
//#include <algorithm>	    // for transform
//#include <functional>	    // for plus
//
//using namespace std;
//
//int main() {
//	int data1[] = { 11, 22, 33, 44, 55 };
//	int data2[] = { 500, 400, 300, 200, 100 };
//	int result[5];
//
//	cout << "2 + 2 = " << plus<int>()(2, 2) << '\n';
//
//	transform(data1, data1 + 5, data2, result, plus<int>());
//	// transform(data1, data1+5, data2, result, [](int a, int b){return a+b;});
//
//	for (auto v : result)
//		cout << v << ' ';
//	cout << '\n';
//	
//	
//	//Raw Strings
//	//	A raw string starts with R"( and ends with )".The parens are not part of the string.
//
//	cout << R"X(A goatee!  :-)"  Cool!)X";
//	cout << R"(Don't be "afraid" of letters:\n\a\b\c\d\e\f\g)";
//		
//	system("pause");
//}