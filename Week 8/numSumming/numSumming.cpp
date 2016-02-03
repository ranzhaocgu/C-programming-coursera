// numSumming.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0, data[6];
	for (int i = 0; i < 6; i++){
		cin >> data[i];

		if ((i >= 1) & (data[i] < data[0])){
			sum += data[i];
		}
	}

	cout << sum << endl;

	return 0;
}

