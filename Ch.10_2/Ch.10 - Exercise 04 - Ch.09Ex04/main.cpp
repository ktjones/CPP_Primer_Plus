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
	double array11[4] = {10000,20000,30000,40000};
	double array12[4] = {10000,20000,30000,0};
	
	//*  Main Code

	//Method #1.1
	Sales method11 = Sales(array11,4);
	method11.showSales();
	method11.setSales();
	method11.showSales();
	
	//Method #1.2
	Sales method12 = Sales(array12,3);
	method12.showSales();
	method12.setSales();
	method12.showSales();

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
