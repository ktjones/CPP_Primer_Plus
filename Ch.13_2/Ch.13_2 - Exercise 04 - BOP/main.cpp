//***************************************************************************************************
//
//  C++ Template Program
//
//***************************************************************************************************
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





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	Port Test1("Toddco", "Tawny", 20);
	VintagePort Test2("BobCo", 100, "Shorty", 1999);

	//*  Main Code
	Test1.Show();
	cout << endl;
	cout << Test1;

	Test2.Show();
	cout << endl;
	cout << Test2;


	Test1 += 5;
	Test2 += 5000;

	Test1.Show();
	Test2.Show();

	Test1 -= 5;
	Test2 -= 5000;

	Test1.Show();
	Test2.Show();


	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//***************************************************************************************************
//
//  Functions Begin Here
//
//***************************************************************************************************

//********************************
//
//	Function #1
//

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
