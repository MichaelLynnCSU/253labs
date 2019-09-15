//#include <vector>
//#include <unordered_set>
//#include <iterator>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	vector<int> destination = { 1, 2, 3, 4, 5 };
//	unordered_set<int> source = { 11111, 22222, 33333, 44444, 55555 };
//
//	back_insert_iterator<vector<int>> bi(destination);
//	// auto bi = back_inserter(destination);
//
//	copy(source.begin(), source.end(), bi);
//
//	for (auto v : destination)
//		cout << v << ' ';
//	cout << '\n';
//
//	system("pause");
//}