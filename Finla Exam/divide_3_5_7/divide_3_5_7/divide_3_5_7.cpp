// divide_3_5_7.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int count = 0;

		if (n % 3 == 0){
			cout << '3' << ' ';
			count++;
		}
		
		if (n % 5 == 0){
			cout << '5' << ' ';
			count++;
		}
		
		if (n % 7 == 0){
			cout << '7' << ' ';
			count++;
		}

		if (count == 0){
			cout << 'n' << endl;
		}

		//if (cin.get() == '\n'){
		//	
		//}

		cout << endl;
	}
	return 0;
	
}

