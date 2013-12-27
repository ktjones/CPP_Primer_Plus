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
	float fOriginalBalanceDaphne = 100.0;
	float fOriginalBalanceCleo = 100.0;
	float fCurrentBalanceDaphne = 0;
	float fCurrentBalanceCleo = 0;
	float fInterestSimple = 0.1;
	float fInterestCompound = 0.05;
	int nYear = 0;

	//*  Main Code
	
	//Year 1
	fCurrentBalanceDaphne = fOriginalBalanceDaphne + (fOriginalBalanceDaphne * fInterestSimple);
	fCurrentBalanceCleo = fOriginalBalanceCleo + (fOriginalBalanceCleo * fInterestCompound);
	
	cout << "Year 1 - Daphne: " << fCurrentBalanceDaphne << "\t\tYear 1 - Cleo  : " << fCurrentBalanceCleo << endl;

	//Year 2 and on
	for (int i = 2; fCurrentBalanceDaphne > fCurrentBalanceCleo; i++)
	{
		fCurrentBalanceDaphne = fCurrentBalanceDaphne + (fOriginalBalanceDaphne * fInterestSimple);
		fCurrentBalanceCleo = fCurrentBalanceCleo + (fCurrentBalanceCleo * fInterestCompound);

		cout << "Year " << i << " - Daphne: " << fCurrentBalanceDaphne << "\t\tYear " << i << " - Cleo  : " << fCurrentBalanceCleo << endl; 
		nYear = i;
	}

	cout << endl << "Cleo's Balance Exceeds Daphne's balance in year " << nYear << "." << endl << endl;

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



