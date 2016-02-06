// buyAHouse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N,K;
	while(cin>>N>>K){
		if (2*K >= N){
			cout << "Impossible";
		} else
		{
			double year = (double) 200 / (N-2*K);
			cout << (int) year + 1 << endl;
		}
	}
	return 0;
}

