// elphantDrinking.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int h, r;
	const double pi = 3.14159;
	double result;

	cin >> h >> r;
	result = (int) (20000.0 / (pi * h * r * r)) + 1;
	
	cout << result << endl;
	return 0;
}

