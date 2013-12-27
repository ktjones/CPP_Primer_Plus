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
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	int x1 = 0, x2 = 0;
	int nSum = 0;

	//*  Main Code
	cout << "Please enter 2 integers." << endl;
	cout << "Integer #1: ";
	cin >> x1;
	cout << "Integer #2: ";
	cin >> x2;

	for (int i=x1; i < x2+1; i++)
	{
		nSum += i;
	}

	cout << endl << endl << "The final sum is: " << nSum << endl << endl;

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



