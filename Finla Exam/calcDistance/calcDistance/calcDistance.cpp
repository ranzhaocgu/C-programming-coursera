// calcDistance.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int sample;
	cin >> sample;

	double data[10][2];

	for (int i = 0;i < sample; i++) {
		cin >> data[i][0] >> data[i][1];
	}

	double temp = 0.0;
	double maxDistance = 0.0;
	for (int i = 0;i < (sample - 1); i++){
		for (int j = i+1; j < sample; j++) {
			temp = sqrt((data[i][0] - data[j][0])*(data[i][0] - data[j][0]) + (data[i][1] - data[j][1])*(data[i][1] - data[j][1]));
			if (temp > maxDistance){
				maxDistance = temp;
			}
		}
	}

	cout << maxDistance << setprecision(4) << endl;
	return 0;
}

