// newOpScope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node {

	node *next = NULL;
	int value;

};

node *temp() {
	
	node *root = new node;
	root->value = 5;
	root->next = NULL;
	node *temp = root;
	return root;
}

node *temp2() {

	node *root = new node;
	root->value = 6;
	root->next = NULL;
	node *temp = root;
	return temp;
}

node *temp3() {


	node *temp;
	temp->value = 7;
	return temp;
}


int main()
{
	node *test = temp();
	cout << test->value << endl;

	node *test2 = temp2();
	cout << test2->value << endl;

	//node *test3 = temp3();
	//cout << test3->value << endl;                    // doesnt' work

    return 0;
}

