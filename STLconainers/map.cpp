//#include <iostream>
//#include <map>
//#include <list>
//#include <algorithm>    // std::copy
//#include <string>
////--------------------custom---------------------------//
//
//using std::cout;
//using std::endl;
//using std::map;
//using std::list;
////using std::initializer_list;
//
//
//#define emptyspace cout << endl << endl;
//
////--------------------custom---------------------------//
//
//
//int main()
//{
//	list<int> listtest = { 1,2,3 };
//
//	map<std::string, list<int>> mylist = { { "a", listtest },	{ "b", listtest } };
//	
//	auto it = mylist.find("b");
//
//	cout << "found " << it->first;
//	for (auto i : it->second)
//		cout << i;
//
//	/*for (auto it = mylist.begin(); it != mylist.end(); it++)
//	{
//
//		cout << it->first.c_str();
//		for (auto i : it->second)
//			cout << i;
//
//	}*/
//
//	auto its = mylist.find("b");
//
//	list<int> listcopy;
//	std::copy(its->second.begin(), its->second.begin(), listcopy.begin());
//
//	for(auto it = listcopy.begin(); it != listcopy.end(); it++)
//		cout << *it;
//	emptyspace
//		system("pause");
//}
