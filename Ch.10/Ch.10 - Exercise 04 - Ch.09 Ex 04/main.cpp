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
#include "header.h"

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
	
	// Sales method12;
	// Sales method2;
	// 

	//*  Main Code

	//Method #1.1 - Assigned Values
	double array11[4] = {10000,20000,30000,40000};
	Sales method11 = Sales(array11, 4);
	method11.showSales();

	cout << endl << endl;

	double array12[4] = {10000,20000,30000,0};
	Sales method12 = Sales(array12, 4);
	method12.showSales();

	cout << endl << endl;

	//Method #1.2 - Interactive
	cout << endl << endl;
	
	double array2[4] = {0,0,0,0};
	Sales method2 = Sales(array2, 4);
	method2.showSales();

	method2.setSales();
	method2.showSales();
	
	// cout << endl << endl;
	// showSales(method12);
	// cout << endl << endl;
	// showSales(method2);

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
