#include <iostream>
using namespace std;

struct node {
	int data;
	 node *left;
};


node *insert(node *root, int value)
{
	node *searchTree = root;	

	if (root == NULL) {
		root = new node;
		root->data = value;
		root->left = NULL;
		return root;
	}

	while (searchTree->left != NULL) 
	{

		searchTree = searchTree->left;

	}

	
	node *newNode = new node;
	newNode->data = value;
	newNode->left =  NULL;

	searchTree->left = newNode;

	return root;
}

void print(node * root)
{

	while (root != NULL)
	{
		cout << root->data << endl;
		root = root->left;

	}

}

int main()
{
	 node *root = NULL;
	 root = insert(root, 14);
	 root = insert(root, 13);
	 root = insert(root, 12);
	 print(root);
	 
	system("pause");
}