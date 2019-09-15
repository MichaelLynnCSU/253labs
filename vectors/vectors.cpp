#include <vector>
#include <iostream>
using namespace std;

class test
{
public:
	int ok;

};

int main()
{

	{

		vector<int> *c = new vector<int>[10];
		cout << c->size() << endl;
		cout << c->capacity() << endl;

	}


	{
		int* a = new int;  	 //Requests memory to be allocated for variable a
		int* b = new int(10); //Requests memory allocation and stores value 10
		int* c = new int[10]; //Requests memory allocation for an array of size 10
		delete a; 			 //Deletes memory allocated to a
	}

	{
		int a;			//Memory allocated on stack
		int b = 10;		//Memory allocated on stack and stores value 10
		int c[10];		//Memory allocated for an array of 10 integers on stack
	}

	
	

	system("pause");


}