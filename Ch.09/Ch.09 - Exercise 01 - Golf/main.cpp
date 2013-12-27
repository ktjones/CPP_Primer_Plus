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
#include "golf.h"
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
	golf ann;
	int maxnoofgolfers = 10;
	int countofgolfers = 0;
	int breakflag = 0;

	//*  Main Code
	
	//test #1 - provided data, one run
	setgolf(ann, "Ann Johnson", 11);
	showgolf(ann);

	//test #2 - requested data, one run.
	setgolf(ann);
	showgolf(ann);

	//test #3 - requested data, # of runs is dynamic
	cout << endl;
	
	golf * ptr = new golf[maxnoofgolfers];  // create an array of structures dynamically (varying #s of golfers

	for (int i=0; i<maxnoofgolfers; i++)
	{
		breakflag = setgolf(ann);
		if (breakflag == 1)
		{
			break;
		}
		
		strcpy(ptr[i].fullname,ann.fullname);
		ptr[i].handicap = ann.handicap;
		countofgolfers += 1;
	}

	for (int i=0; i<countofgolfers;i++)
	{
		strcpy(ann.fullname,ptr[i].fullname);
		ann.handicap = ptr[i].handicap;
		showgolf(ann);
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
