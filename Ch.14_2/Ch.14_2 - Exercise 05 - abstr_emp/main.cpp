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


	//*  Main Code
	employee em("Trip", "Harris", "Thumper");
	cout << endl;
	cout << em << endl;
	cout << endl;
	em.ShowAll();

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << endl;
	cout << ma << endl;
	cout << endl;
	ma.ShowAll();
	
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << endl;
	cout << fi << endl;
	cout << endl;
	fi.ShowAll();
	
	highfink hf(ma, "Curly Kew"); // recruitment?
	cout << endl;
	hf.ShowAll();
	cout << endl;
	cout << "Press a key for next phase:\n";
	cin.get();
	highfink hf2;
	cout << endl;
	hf2.SetAll();
	cout << endl;
	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for (int i = 0; i < 4; i++)
	tri[i]->ShowAll();

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
