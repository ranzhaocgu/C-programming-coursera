// appleAndBugs.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int n,x,y;
	int leftApple = 0;
	cin >> n >> x >> y;

	if (y > (n-1)*x){
		leftApple = 0;
	} else if (y % x == 0) {
		leftApple = n - y/x;
	} else {
		leftApple = n - y/x - 1;
	}



	cout << leftApple << endl;
	return 0;
}

