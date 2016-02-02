// simpleCalculator.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char oper;

	cin >> num1 >> num2 >> oper;

	switch (oper)
		{        
			case'+':            
					cout<<num1+num2<<endl;
					break; 
			case'-':
					cout<<num1-num2<<endl;
					break;
			case'*':
					cout<<num1*num2<<endl;
					break;
			case'/':
					if(num2==0)
					{
						cout << "Divided by zero!" << endl;
					} else{
						cout << (num1/num2)<<endl;
					}
					break;
			default:
					cout<<"Invalid operator!"<<endl;
		}

	return 0;
}

