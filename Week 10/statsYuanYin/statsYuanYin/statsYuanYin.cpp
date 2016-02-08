// statsYuanYin.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int counts[5] = {0,0,0,0,0};
	char s[80];

	cin.getline(s, 80);
	for (int j = 0; j < 80; j++){
		switch (s[j])
		{
		case 'a':
			counts[0]++;
			break;
		case 'e':
			counts[1]++;
			break;
		case 'i':
			counts[2]++;
			break;
		case 'o':
			counts[3]++;
			break;
		case 'u':
			counts[4]++;
			break;
		default:
			break;
		}
	}

	for (int i = 0;i<5;i++){
		cout << counts[i] << ' ';
	}
	return 0;
}

