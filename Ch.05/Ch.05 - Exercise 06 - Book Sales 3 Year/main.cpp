//*******************************
//
//  C++ Template Program
//
//*******************************

//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//
//********************************



//********************************
//
//  Global Variable Declaration
//
//********************************



//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	const char * szMonths[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

	int nBooksSold[3][12];
	int nBooksSoldYearly[3] = {0,0,0};
	int nBooksSoldTotal = 0;

	//*  Main Code
	
	cout << "Please enter in the number of books sold per month" << endl << endl;

	for (int i = 0; i < 3 ; i++)
	{
		cout << "Year #" << i+1 << endl;

		for (int j = 0; j < 12; j++)
		{
			cout << months[j] << " :";
			cin >> nBooksSold[i][j];
			nBooksSoldYearly[i] += nBooksSold[i][j];
			nBooksSoldTotal += nBooksSold[i][j];
		}

	}

	cout << endl << endl << "Total sales for the year 1 are: " << nBooksSoldYearly[0] << endl;
	cout << "Total sales for the year 2 are: " << nBooksSoldYearly[1] << endl;
	cout << "Total sales for the year 3 are: " << nBooksSoldYearly[2] << endl;
	cout << "Total sales for the year are: " << nBooksSoldTotal << endl << endl;

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************



