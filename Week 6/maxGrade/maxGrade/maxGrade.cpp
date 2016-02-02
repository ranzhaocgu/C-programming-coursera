// maxGrade.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, data[100], maxGrade = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data[i];
		if (data[i] > maxGrade){
			maxGrade = data[i];
		}
	}

	cout << maxGrade << endl;
	return 0;
}

