#include <iostream>
#include <string>
#include <array>

using namespace std;


class bass 
{

public:

	bass()
	{
		cout << "constructor rrtest" << endl;
	}

	bass(const bass &object)
	{
		cout << "copy test" << endl;
	}

	~bass()
	{
		cout << "dectructor test" << endl;
	}

	int copyint(int num);

	char *copyLetters(char *src, int num);

	bass objecttest(bass &object);

	// because we we are returninmg "this" keyword we have to return a pointer *special case*
	bass *objecttest3(bass &object);


};


bass *bass::objecttest3(bass &object) {

	return this;

}



bass bass::objecttest(bass &object) {

	return object;

}



int bass::copyint(int size) {

	return size;
}



// create pointer return pointer
char *bass::copyLetters(char *src, int num) {
	char *dest = new char[num];

	for (int i = 0; i<num; i++) 
	dest[i] = src[i];

	return dest;
}



int main() {
	
	bass p;
	bass u;

	p = u.objecttest(p);

	cout << "\n------------\n";

	bass *w = u.objecttest3(p);

	cout << "\n------------\n";
	 
	int thanks = p.copyint(3);

	cout << "\n------------\n";


	char letters[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	char *letters2 = p.copyLetters(letters, 6);


	system("pause");
}