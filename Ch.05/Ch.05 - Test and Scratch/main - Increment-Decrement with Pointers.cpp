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
	double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;
	double x;

	//*  Main Code
	
	cout << "Array = 21.1, 32.8, 23.4, 45.2, 37.4" << endl << endl;
	cout << "**********************************************" << endl << endl;	
	x = *pt;
	cout << "*pt = " << x << endl << endl;
	x = *++pt;
	cout << "++pt = " << x << endl << endl;
	x = *++pt;
	cout << "*++pt = " << x << endl << endl;
	x = ++*pt;
	cout << "++*pt = " << x << endl << endl;
	x = (*pt)++;
	cout << "(*pt)++ = " << x << endl << endl;
	x = *pt++;
	cout << "*pt++ = " << x << endl << endl;
	cout << "**********************************************" << endl << endl;	
	cout << "Array = ";

		for (int i=0; i<5; i++)
	{
		cout << arr[i] << ", ";
	}

	cout << endl << endl;




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



