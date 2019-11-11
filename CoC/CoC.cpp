// CoC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	

	/******************************************************************************************************
		sum of the first x powers of n
		Sum of each x powers of n
	******************************************************************************************************/

	{

		int n;
		cin >> n; cin.ignore();

		int x;
		cin >> x; cin.ignore();

		int sum = 0;

		for (int i = 1; i < (x + 1); ++i)
		{
			cout << pow(n, i) << endl;

			sum += pow(n, i);

		}

		cout << sum << endl;

	}





}

