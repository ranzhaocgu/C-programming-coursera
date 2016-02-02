// sepDigits.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num, h_d, t_d, n_d;

	cin >> num;

	n_d = num % 10;
	t_d = ((num - n_d) % 100) / 10;
	h_d = (num - 10*t_d - n_d) / 100;
	
	cout << h_d << endl;
	cout << t_d << endl;
	cout << n_d << endl;
	return 0;
}

