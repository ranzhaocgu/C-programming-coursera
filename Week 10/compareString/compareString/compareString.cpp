// compareString.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>
#include <ctype.h>
#include <iostream>

using namespace std;

int main()
{
	char s1[80];
	char s2[80];
	
	cin.getline(s1, 80);
	cin.getline(s2, 80);

	int i = 0;
	char result;
	while (s1[i] != '\0' && ((s1[i] == s2[i]) || ((int) s1[i] - (int) s2[i] == 32)|| ((int) s1[i] - (int) s2[i] == -32))){
		i++;
	}

	s1[i] = toupper(s1[i]);
	s2[i] = toupper(s2[i]);

	if (s1[i] > s2[i]) {
		result = '>';
	} else if (s1[i] < s2[i]) {
		result = '<';
	} else{
		result = '=';
	}

	cout << result << endl;
	return 0;
}

