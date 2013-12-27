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
#include "namespace.h"

using namespace std;
using namespace SALES;

//********************************
//
//  Global Variable Declaration
//
//********************************





//********************************
//
//  Compound Type Declaration Section
//
//********************************





//********************************
//
//  Function Declaration Section
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
	Sales method11;
	Sales method12;
	Sales method2;
	double array11[4] = {10000,20000,30000,40000};
	double array12[4] = {10000,20000,30000,0};

	//*  Main Code

	//Method #1.1
	setSales(method11,array11,4);
	setSales(method12,array12,3);
	setSales(method2);

	showSales(method11);
	cout << endl << endl;
	showSales(method12);
	cout << endl << endl;
	showSales(method2);

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
