//#include <iostream>
//#include <vector>
//#include <list>
//
//
//using namespace std;
//
//template<typename T, typename X>
//void print(T start, X end)
//{
//
//	for (; start != end; start++)
//		cout << *start << "\n";
//
//}
//
//
//template <typename Container>
// typename Container::const_iterator itr;
//
//template <typename T>
//  typename vector<T>::const_iterator itr2;
//
//int main() 
//{
//
//	vector<int> vectorint;
//	vector<double> vectordouble;
//
//	list<int> setint;
//	list<double> setdouble;
//
//
//	//-------------------------------------------------------------
//
//	itr<vector<int>> = vectorint.begin();	
//
//	itr<vector<double>> = vectordouble.begin();	
//
//	print(itr<vector<int>>, vectorint.size());
//	
//	print(itr<vector<double>>, vectordouble.size());
//
//	//-------------------------------------------------------------
//
//	itr<list<int>> = setint.begin();	
//	
//	itr<list<double>> = setdouble.begin();
//	
//	print(itr<list<int>>, setint.size());
//	
//	print(itr<list<double>>, setdouble.size());
//
//	//-------------------------------------------------------------
//
//	itr2<int> = vectorint.begin();
//
//	itr2<double> = vectordouble.begin();
//	
//	print(itr2<int>, vectorint.size());
//	
//	print(itr2<double>, vectordouble.size());
//
//
//
//
//	system("pause");
//}
//
