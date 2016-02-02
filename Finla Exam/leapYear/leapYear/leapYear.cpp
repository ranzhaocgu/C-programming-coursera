// leapYear.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	char judge = 'N';

	cin >> year; // input the year of interest

	if (year % 4 == 0){
		judge = 'Y';
		if (year % 100 == 0 & year % 400 != 0){
			judge = 'N';
		} else if (year % 3200 == 0){
			judge = 'N';	
		}
	}

	cout << judge << endl;
	return 0;
}

	