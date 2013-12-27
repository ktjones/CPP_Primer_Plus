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
	int nIncome = 0;
	int nIncomeLess = 0;
	float fTax = 0.0;

	//*  Main Code
	cout << "Please enter your Income (Enter a negative # or 'q' to quit): ";
	
	while (cin >> nIncome)
	{
		if (nIncome < 0)
		{
			break;
		}
		else
		{
			nIncomeLess = nIncome;

			// Tax info
			// First $5,000 = 0% Tax
			// Next $10,000 = 10% Tax
			// Next $20,000 = 15% Tax
			// After $35,000 = 20% Tax
	
			if (nIncomeLess > 35000)
			{
				fTax = fTax + ((nIncomeLess - 35000) * 0.2);
				fTax = fTax + (20000 * 0.15);
				fTax = fTax + (10000 * 0.1);
				fTax = fTax + (5000 * 0.0);
			}
			else if (nIncomeLess > 15000)
			{
				fTax = fTax + ((nIncomeLess - 15000) * 0.15);
				fTax = fTax + (10000 * 0.1);
				fTax = fTax + (5000 * 0.0);
			}		
			else if (nIncomeLess > 5000)
			{
				fTax = fTax + ((nIncomeLess - 5000) * 0.1);
				fTax = fTax + (5000 * 0.0);
			}		
			else
			{
				fTax = fTax + (5000 * 0.0);
			}		

			cout << endl << "Your Tax Is: " << "$" << fTax << endl << endl;
			cout << endl << "Please enter your Income (Enter a negative # or 'q' to quit): ";
			fTax = 0;
		}
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



