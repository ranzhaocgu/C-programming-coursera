// absEvenOdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int data[6], maxOdd = 0, minEven = 100;
	for (int i = 0; i < 6; i++){
		cin >> data[i];
		if (data[i] % 2 == 0 & data[i] < minEven){
			minEven = data[i];
		} else if (data[i] % 2 == 1 & data[i] > maxOdd){
			maxOdd = data[i];
		}
	}

	cout << abs(maxOdd - minEven) << endl;
	return 0;
}

