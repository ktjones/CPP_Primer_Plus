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
#include <string>
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
	

	//*  Main Code
	cout << "Test Case #1:  Default Constructor w/ Blank Values" << endl;
	Person one;

	cout << endl << "Test Case #2: Default Constructor w/ First Name" << endl;
	Person two("Smythecraft");
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	cout << endl << "Test Case #2: Default Constructor w/ First Name" << endl;
	Person three("Dimwiddy", "Sam");
	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;

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
