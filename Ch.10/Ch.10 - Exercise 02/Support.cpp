//*******************************
//
//  C++ Template Program - Support Files
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
#include <cstring>
#include "header.h"

//********************************
//
//  Global Variable Declaration
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section 
//	- Outside of Name Space
//
//********************************


//********************************
//
//  Class Definitions
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Outside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

//******************************************************************************************

//********************************
//
//  Name Space Declarations & Definitions
//
//********************************

using namespace std;


//********************************
//
//  Global or Name Space Variable Declaration
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Inside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************





//********************************
//
//  Class Definitions
//	- Inside of Name Space
//
//********************************

Person::Person() // #1
{
	lname = ""; 
	fname[0] = '\0';
	cout << "The blank constructor has executed" << endl;
}

Person::Person(const string & ln, const char * fn) // #2
{
	lname = ln;
	strcpy(fname, fn);
	if (fn == "Heyyou")
	{
		cout << "The constructor with 1 parameter has executed";
	}
	else
	{
		cout << "The constructor with 2 parameters has executed";
	}
}

void Person::Show() const // firstname lastname format
{
	cout << endl << "Display Informally" << endl;
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const // lastname, firstname format
{
	cout << endl << "Display Informally" << endl;
	cout << lname << ", " << fname << endl;
}


