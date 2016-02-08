// exchangeMatrixLines.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream> 
#include <iomanip> 

using namespace std;

int main()
{
	int num[5][5], temp[5], line1, line2;
	for (int i = 0; i < 5;i++){
		for (int j = 0; j < 5;j++){
			cin >> num[i][j];
		}
	}

	cin >> line1 >> line2;

	if (line1 > 4 || line2 > 4 || line1 < 0 || line2 < 0){
		cout << "error" << endl;
	}
	else{
		for (int i = 0; i < 5;i++){
			temp[i] = num[line1][i];
			num[line1][i] = num[line2][i];
			num[line2][i] = temp[i];
		}

	for (int i = 0; i < 5;i++){
		for (int j = 0; j < 5;j++){
			cout << setw(4) << num[i][j];
		}
		cout << endl;
	}
	}

	return 0;
}

