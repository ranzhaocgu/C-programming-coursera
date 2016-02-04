// selfDivisibleNumber.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for (int i = 10; i <= n; i++){
		int digitSum = i / 10 + (i % 10);
		if (i % digitSum == 0){
			cout << i << endl;
		}
	}
	return 0;
}

