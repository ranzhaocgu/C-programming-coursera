// rmbPaying.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int p100, p50, p20, p10, p5, p1;

	p100 = n / 100;
	n -= 100*p100;
	cout << p100 << endl;

	p50 = n / 50;
	n -= 50*p50;
	cout << p50 << endl;

	p20 = n / 20;
	n -= 20*p20;
	cout << p20 << endl;

	p10 = n / 10;
	n -= 10*p10;
	cout << p10 << endl;
	
	p5 = n / 5;
	n -= 5*p5;
	cout << p5 << endl;

	p1 = n;
	cout << p1 << endl;

	return 0;
}

