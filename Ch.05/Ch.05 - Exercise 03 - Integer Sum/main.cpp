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
	int nSum = 0;
	int x = -1;


	//*  Main Code
	for (;;)
	{
		cout << "Please enter a number: ";
		cin >> x;

		if (x == 0)
		{
			break;
		}
		else
		{
			nSum += x;
			cout << "The sum so far is: " << nSum << endl << endl;
		}
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



