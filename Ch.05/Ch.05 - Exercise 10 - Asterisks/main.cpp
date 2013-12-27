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
	int nRows = 0;

	//*  Main Code
	cout << "Please Enter the number of Loops Desired: ";
	cin >> nRows;

	for (int i = 1; i < nRows+1; i++)
	{
		for (int j = 0; j < nRows - i; j++)
		{
			cout << ".";
		}
		
		for  (int k = 0; k < i; k++)
		{
			cout << "*";
		}

		cout << endl;
	}


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



