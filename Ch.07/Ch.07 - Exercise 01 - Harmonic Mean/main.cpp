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
#include <fstream>

using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************

float meanFunction(int, int);

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
	int number1;
	int number2;
	float hMean = 0;

	//*  Main Code

	cout << "Please enter 2 numbers: ";
	while (cin >> number1 >> number2)
	{
		if (number1 == 0 || number2 ==0)
		{
			cout << endl << endl << "You entered 0 and are now exiting!" << endl << endl;
			break;
		}
		else
		{
			hMean = meanFunction(number1, number2);
			cout << endl << "The harmonic mean is: " << hMean;
			cout << endl << endl << "Please enter 2 numbers: ";
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

float meanFunction(int n1, int n2)
{
	//*  Variable Declaration	
	
	float harmonicMean = 0;

	//*  Main Code

	harmonicMean = (2.0 * n1 * n2)/(n1 + n2);

	//*  Program End

	return harmonicMean;
}