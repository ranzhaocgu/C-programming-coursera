// longestWord.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char str[500];
	int num= 0, flag = 0;
	cin.getline(str, 80);
	for(int i= 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
			flag = 0;
		else if(flag == 0)
		{
			flag = 1; num++;
		}
	}
	cout<< "字符串中有"<< num<< "个单词"<< endl;
	return 0;
}

