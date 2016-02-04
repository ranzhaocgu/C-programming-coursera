// addToK.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k, data[1000], ind = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++){
		cin >> data[i];
		if (i >= 1){
			int j = i;
			while (j--){
				//cout << i << j << endl;
				if (data[i] + data[j] == k){
					ind++;
				}
			}
		}
	}

	if (ind) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}

