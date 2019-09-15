//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <set>
//#include <forward_list>
//
//using namespace std;
//
//class Hundred {
//public:
//	
//	int data[100];
//
//	// for unknown number of parameters
//	Hundred(const initializer_list<int> &il) 
//	{
//		// copy init list into array
//		copy(il.begin(), il.end(), data);
//
//	}
//	
//	// create a object accessor for our array, interesting
//	int &operator[](int n) { return data[n]; }
//};
//
//int main()
//{
//	Hundred h = { 11,22,33,44,55 };
//	cout << h[1] + h[4] << '\n';
//	system("pause");
//
//};