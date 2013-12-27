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
	double array[10];
	int i = 0;
	float fSum = 0.0;
	float fAverage = 0.0;
	int nAboveAverageCount = 0;

	//*  Main Code
	cout << "Enter up to 10 values. " << endl;
	cout << "Donation #1: ";

	while (i < 10 && cin >> array[i])
	{
		if (i < 10)
		{
			fSum += array[i];
			++i;
			if (i < 10)
			{
				cout << "Donation #" << i+1 << ": ";
			}
		}
	}

	fAverage = fSum/i;

	for (int j = 0; j < i; ++j)
	{
		if (array[j] > fAverage)
		{
			++nAboveAverageCount;
		}
	}

	cout << endl << endl;

	cout << "Sum is: " << fSum << endl;
	cout << "Average is: " << fAverage << endl;
	cout << "Number of values above the average: " << nAboveAverageCount << endl << endl;

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



