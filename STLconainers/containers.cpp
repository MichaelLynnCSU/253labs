//#include <iostream>
//#include <string>
//#include <list>
//#include <forward_list>
//using namespace std;
//
//
////--------------------custom---------------------------//
//#define emptyspace cout << endl << endl;
////typedef list<int> container;
////--------------------custom---------------------------//
//
//
//////////////using namespace std::endl ENDL;  ?????? ???????? ????????? ?????? ???
//
//
//int main()
//{
//	//RandomAccessIterator(std::array, vector, string, map)
//	//BidirectionalIterator(list, set, unordered_set)
//	//ForwardIterator(forward_list)
//
//	{
//		string str = "make";
//
//		auto _printStart = str.begin();
//
//		auto _printEnd = str.end() - 1;
//
//		cout << "Beginnning: " << *_printStart << '\n';
//
//		cout << "End: " << *_printEnd << '\n';
//
//	}
//
//
//	{
//
//	string str = "make";
//
//	string::iterator it;
//
//	string::reverse_iterator rit;	
//
//	emptyspace
//
//	for (it = str.begin(); it != str.end(); it++)
//		cout << *it << endl;
//
//	emptyspace
//
//	for (rit = str.rbegin(); rit != str.rend(); ++rit)
//		cout << *rit;
//
//
//	const string sctr = "make";
//
//	string::const_iterator cit;
//
//	string::const_reverse_iterator crit;
//
//	emptyspace
//
//	for (cit = sctr.cbegin(); cit != sctr.cend(); ++cit)
//		cout << *cit;
//	
//	emptyspace
//
//	for (crit = sctr.crbegin(); crit != sctr.crend(); ++crit)
//			cout << *crit;
//		
//
//	}
//
//
//	{
//
//		list<int> mylist;
//		list<int>::iterator it;
//
//		emptyspace
//
//			for (int candidate = 0; candidate < 10; candidate++)
//				mylist.push_back(candidate);
//
//		for (it = mylist.begin(); it != mylist.end(); ++it)
//			cout << *it << ' ';
//
//
//		emptyspace
//			mylist.push_front(100);
//		cout << mylist.front();
//
//		emptyspace
//
//			mylist.push_front(50);
//		cout << mylist.back();
//
//		emptyspace
//	}
//	
//	{
//
//		std::forward_list<int> flist = { 34, 77, 16, 2 };
//
//		for (auto it = flist.begin(); it != flist.end(); ++it)
//			std::cout << ' ' << *it;
//
//
//			emptyspace
//
//			emptyspace
//		flist.push_front(100);
//		cout << flist.front();
//
//
//	}
//
//	
//	system("pause");
//}