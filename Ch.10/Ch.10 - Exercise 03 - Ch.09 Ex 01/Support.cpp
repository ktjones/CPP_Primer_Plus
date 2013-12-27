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

golf::golf(char * fullname, int handicap)
{
    //*  Variable Declaration
	int i = 0;

	//*  Main Code
	
	while (fullname[i] != '\0')
	{
		m_fullname[i] = fullname[i];
		i++;
	}
	m_fullname[i] = '\0';
	m_handicap = handicap;
	
	//*  Program End
	return;
}
//********************************

void golf::showgolf()
{
    //*  Variable Declaration

	//*  Main Code

	cout << endl;
	cout << "\tPlayer: " << m_fullname << endl;
	cout << "\tHandicap: " << m_handicap << endl;

	//*  Program End
	return;
}
//********************************
