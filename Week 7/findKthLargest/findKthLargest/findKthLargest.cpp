// findKthLargest.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k, data[300];
	cin >> n;
	cin >> k;

	int max_value = 0, kth_largest;
	for (int i = 0; i < n; i++){
		cin >> data[i];

		if (data[i] > max_value){
			max_value = data[i];
		}
	}

	kth_largest = max_value;

	if (k > 1) {
		while (k!=1){
			max_value = 0;
			for (int i = 0; i < n; i++){
				if ((data[i] > max_value) & (data[i] < kth_largest)){
					max_value = data[i];
				}
			}
			kth_largest = max_value;
			k--;
		}
	}
	cout <<  kth_largest << endl;
	return 0;
}

