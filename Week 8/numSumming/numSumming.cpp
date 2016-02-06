// numSumming.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0, a, data[5];
	cin >> a;
	for (int i = 0; i < 5; i++){
		cin >> data[i];

		if (data[i] < a){
			sum += data[i];
		}
	}

	cout << sum << endl;

	return 0;
}

