// walkOrBike.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, distance[100];
	double walk_time, bike_time;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> distance[i];

		
	}

	for (int i = 0; i < n; i++){
		walk_time = (double)distance[i] / 1.2;
		bike_time = (double)distance[i] / 3.0 + 50;

		if (walk_time < bike_time){
			cout << "Walk" << endl;
		}
		else if (walk_time == bike_time){
			cout << "All" << endl;
		}
		else {
			cout << "Bike" << endl;
		}
	}
	return 0;
}

