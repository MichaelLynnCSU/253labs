// node.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

struct node {

	node *next = NULL;
	int value;

};

int main()
{
	node *root = new node;
	root->value = 5;
	root->next = NULL;

	node *temp = root;

	int i = 0;
	while (i < 5) {
		node *newNode = new node;
		newNode->value = i;
		newNode->next = NULL;
		temp->next = newNode;
		temp = temp->next;
		i++;
	}



	node *interater = root;

	while (interater->next != NULL)
	{
		cout << interater->value << endl;
		interater = interater->next;
	}
	cout << interater->value << endl;

	
	cout << "sdfsdf" << endl;

	// root NEVER CHANGES FOR ANY REASON WHEN MOVING TEMP POINTERS!!!!!!!!!!!!!!
	node *search = root;
//	cout << "im here " << search->next->value << endl;
	while (search->value != 3) {
		cout << "im here " << search->value << endl;

		if (search->value == 2) {
			cout << "innnnnnnnnn "  << endl;
		node *newNode2 = new node;
		newNode2->value = 9;
		newNode2->next = NULL;

		newNode2->next = search->next;
		search->next = newNode2;
	}

		search = search->next;
	}
	

	node *interater2 = root;
	while (interater2->next != NULL)
	{
		cout << interater2->value << endl;
		interater2 = interater2->next;
	}
	cout << interater2->value << endl;

	cout << std::hex << int('A');
	return 0;
}

