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
	employee em("Trip", "Harris", "Thumper");
	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	highfink hf(ma, "Curly Kew"); // recruitment?

	//*  Main Code

	cout << em;
	em.ShowAll();

	cout << endl;

	cout << ma;
	ma.ShowAll();

	cout << endl;

	cout << fi;
	fi.ShowAll();

	cout << endl;

	hf.ShowAll();

	cout << "Press a key for next phase:\n";
	cin.get();

	highfink hf2;
	hf2.SetAll();

	cout << "Using an abstr_emp * pointer:\n";
	
	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
	}
	
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
