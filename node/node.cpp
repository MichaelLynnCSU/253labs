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



	node *interater = new node;
	interater = root;
	
	while (interater->next != NULL)
	{
		cout << interater->value << endl;
		interater = interater->next;
	}
	cout << interater->value << endl;




    return 0;
}

