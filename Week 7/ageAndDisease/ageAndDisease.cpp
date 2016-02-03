// ageAndDisease.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, data[100];
	int cato1 = 0, cato2 = 0, cato3 = 0, cato4 = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data[i];

		if (data[i] <= 18){
			cato1++;
		}
		else if (data[i] <= 35){
			cato2++;
		}
		else if (data[i] <= 60){
			cato3++;
		}
		else{
			cato4++;
		}
	}

	double p1, p2, p3, p4;
	p1 = (double) (cato1 / n) * 100.0;
	p2 = (double) (cato2 / n) * 100.0;
	p3 = (double) (cato3 / n) * 100.0;
	p4 = (double) (cato4 / n) * 100.0;

	cout << p1 << p2 << p3 << p4 << setprecision(2) << endl;

	cout << "1-18: " << fixed << setprecision(2) << p1 << '%' << endl;
	cout << "19-25: " << fixed << setprecision(2) << p2 << '%' << endl;
	cout << "36-60: " << fixed << setprecision(2) << p3 << '%' << endl;
	cout << "60-: " << fixed << setprecision(2) << p4 << '%' << endl;
	return 0;
}

