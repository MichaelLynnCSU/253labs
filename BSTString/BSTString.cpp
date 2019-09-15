// //BSTString.cpp : Defines the entry point for the console application.
//
//
//#include "stdafx.h"
//#include <iostream>
//#include <string>
//#include <vector>
//#include <string>
//#include<time.h>
//using namespace std;
//
//struct node
//{
//	string key;
//	struct node *left;
//	struct node *right;
//} *root;
//
//void insert(node *tree, node *newnode)
//{
//	if (root == NULL)
//	{
//		root = new node;
//		root->key = newnode->key;
//		root->left = NULL;
//		root->right = NULL;
//		cout << "Root Node is Added" << endl;
//		return;
//	}
//
//	if (tree->key == newnode->key)
//	{
//		cout << "Element already in the tree" << endl;
//		return;
//	}
//	if (tree->key > newnode->key)
//	{
//		if (tree->left != NULL)
//		{
//			insert(tree->left, newnode);
//		}
//		else
//		{
//			tree->left = newnode;
//			(tree->left)->left = NULL;
//			(tree->left)->right = NULL;
//			cout << "Node Added To Left" << endl;
//			return;
//		}
//	}
//	else
//	{
//		if (tree->right != NULL)
//		{
//			insert(tree->right, newnode);
//		}
//		else
//		{
//			tree->right = newnode;
//			(tree->right)->left = NULL;
//			(tree->right)->right = NULL;
//			cout << "Node Added To Right" << endl;
//			return;
//		}
//	}
//}
//
//bool find(string item, node **par, node **loc)
//{
//	node *ptr, *ptrsave;
//	if (root == NULL)
//	{
//		*loc = NULL;
//		*par = NULL;
//		return false;
//	}
//	if (item == root->key)
//	{
//		*loc = root;
//		*par = NULL;
//		return true;
//	}
//	if (item < root->key)
//		ptr = root->left;
//	else
//		ptr = root->right;
//	ptrsave = root;
//	
//	while (ptr != NULL)
//	{
//		if (item == ptr->key)
//		{
//			*loc = ptr;
//			*par = ptrsave;
//			return true;
//		}
//		ptrsave = ptr;
//		if (item < ptr->key)
//			ptr = ptr->left;
//		else
//			ptr = ptr->right;
//	}
//	if (ptr == NULL) 
//		cout << "does not exist" << endl; return false; 
//	*loc = NULL;
//	*par = ptrsave;
//	return true;
//}
//
//int main()
//{
//	root = NULL;	
//	node *temp = new node;
//	temp->key = "a";
//	insert(root, temp);
//	node *temp2 = new node;
//	temp2->key = "b";
//	insert(root, temp2);
//
//	node *location = new node;
//	if (find("a", &root, &location))
//	{
//		cout << location->key << endl;
//	}
//
//    return 0;
//}


#include <iostream>
#include <string>
#include <vector>
#include "stdafx.h"
using namespace std;

int compareStrings(const std::string & a, const std::string & b, int & commonPrefix) {

	while (true) {

		int characterComparison = (int)a[commonPrefix] - (int)b[commonPrefix];
		if (characterComparison != 0) {
			return characterComparison;
		}
		else {
			commonPrefix++;
		}

		// we've compared every character in the strings and they are
		// all equal therefore we return true
		if (commonPrefix >= a.size() && commonPrefix >= b.size()) {
			return 0;
		}

		// if the sizes aren't equivalent then return the difference
		// since they cannot be equal
		if (a.size() != b.size()) {
			return b.size() - a.size();
		}

	}
}

int skewedStringBinarySearch_Helper(int rangeStart, int rangeEnd, int & commonPrefixStart, int & commonPrefixEnd, const std::string & key, const std::vector<std::string> & S) {

	// get midpoint of the range
	int midPoint = (rangeStart + rangeEnd) / 2;

	int prefix = (commonPrefixStart < commonPrefixEnd) ? commonPrefixStart : commonPrefixEnd;
	int compare = (compareStrings(key, S[midPoint], prefix) == 0);

	// index doesn't exist when the comparison fails
	// and the range is of size 1
	if (compare != 0 && rangeStart == rangeEnd) {
		return -1;
	}

	if (compare == 0) {
		return midPoint;
	}
	else if (compare < 0) {
		return skewedStringBinarySearch_Helper(rangeStart, midPoint - 1, commonPrefixStart, prefix, key, S);
	}
	else if (compare > 0) {
		return skewedStringBinarySearch_Helper(midPoint + 1, rangeEnd, prefix, commonPrefixEnd, key, S);
	}

}

int skewedStringBinarySearch(const std::string & key, const std::vector<std::string> & S) {

	// get midpoint of the list
	int midPoint = S.size() / 2;
	int prefixStart = 0, prefixEnd = 0;
	compareStrings(key, S[0], prefixStart);
	compareStrings(key, S[S.size() - 1], prefixEnd);
	return skewedStringBinarySearch_Helper(0, S.size() - 1, prefixStart, prefixEnd, key, S);
}

int main() {

	vector<string> practice;
	for (int i = 0; i < 100; i++) {
		int randlength = rand() % 20 + 1;
		string newString = "";
		for (int j = 0; j < 100; j++) {
			int randscsii = rand() % 122 + 33;
			newString.push_back((char)randscsii);
		}
		practice.push_back(newString);
		cout << newString << endl;
	}

	string searchstring;
	cin >> searchstring;
	while (skewedStringBinarySearch(searchstring, practice) == -1) {
	cin >> searchstring;
	}

}

