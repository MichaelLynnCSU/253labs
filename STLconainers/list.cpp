#include <iostream>
#include <list>

//--------------------custom---------------------------//

using std::cout;
using std::endl;
using std::list;
//using std::initializer_list;


#define emptyspace cout << endl << endl;

//--------------------custom---------------------------//


int main()
{




	//// list - initialization or Initializer Lists
	//initializer_list<int> init = { 1,2,3 };
	//for (auto i : init)
	//	cout << i;

	//for (auto i : {1,2,3})
	//	cout << i;
	//list<int> mylist2 = init;


	list<int> mylist = { 1,2,3 };
	mylist.push_back(4);
	mylist.push_front(0);

	for (auto it = mylist.rbegin(); it != mylist.rend(); it++)
	{

		cout << *it << " ";

	}


		


	



	emptyspace
		system("pause");
	}
