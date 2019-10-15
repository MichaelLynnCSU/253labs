#include<iostream>
#include <vector> 
using namespace std;

int bucketsize = 15;

int hashFunction(int key) {

	int temp = key % bucketsize;
	return temp;

}


class listoflists {

public:
	vector<vector<int> > table;

	listoflists() {
		for (int i = 0; i < bucketsize; i++) {
			vector<int> single_vector;
			table.push_back(single_vector);
		}

	}


};


//You can try this nice little trick for C++.Take the expression which gives you the arrayand then append a commaand the number of elements you want to see.
//Expanding that value will show you elements 0 - (N - 1) where N is the number you add after the comma.
//For example if pArray is the array, type pArray, 10 in the watch window.

int main(int argc, char* argv[]) {


	listoflists l2;

	l2.table.size();

	int key = 15;
	int index = hashFunction(key);
	l2.table[index].push_back(key);

	key = 15;
	index = hashFunction(key);
	l2.table[index].push_back(key);

	key = 7;
	index = hashFunction(key);
	l2.table[index].push_back(key);


	cout << "test" << endl;


}