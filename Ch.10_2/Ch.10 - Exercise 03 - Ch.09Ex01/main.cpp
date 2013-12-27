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
#include <cstring>
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





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	golf ann = golf();
	int maxnoofgolfers = 10;
	int countofgolfers = 0;
	int breakflag = 0;

	//*  Main Code
	
	//test #1 - provided data, one run
	ann.setgolf();
	ann.showgolf();

	//test #2 - requested data, one run.
	ann.setgolf();
	ann.showgolf();

	//test #3 - requested data, # of runs is dynamic
	cout << endl;


	golf * ptr = new golf[maxnoofgolfers];  // create an array of structures dynamically (varying #s of golfers

	for (int i=0; i<maxnoofgolfers; i++)
	{
		breakflag = ptr[i].setgolf();
		if (breakflag == 1)
		{
			break;
		}
		
		countofgolfers += 1;
	}

	for (int i=0; i<countofgolfers;i++)
	{
		ptr[i].showgolf();
	}
	
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
