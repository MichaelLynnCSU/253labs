//#include <list>
//#include <set>
//#include <iterator>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	list<int> destination = { 1, 2, 3, 4, 5 };
//	set<int> source = { 678, 901, 234, 567, 890, 123 };
//
//	auto it = destination.begin();
//	advance(it, 3);					    // Why not it+=3?
//
//	insert_iterator< list<int> > insert_it(destination, it); // Why > >?
//
//	copy(source.begin(), source.end(), insert_it);
//
//	for (auto v : destination)
//		cout << v << ' ';
//	cout << '\n';
//
//	system("pause");
//}