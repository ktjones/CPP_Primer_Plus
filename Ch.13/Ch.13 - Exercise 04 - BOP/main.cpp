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
	Port wine("Portabelly", "classic", 8);
    VintagePort sherry("Mercator", 5, "Cappy", 1799);
    cout << "Displaying Port object:\n";
    cout << wine << endl;
    cout << "Displaying VintagePort object:\n";
    cout << sherry << endl;
    VintagePort map2;
    map2 = sherry;
    cout << "Result of VintagePort assignment:\n";
    cout << map2 << endl;

	cout << "Viewing Port object:\n";
    wine.Show();
    cout << "Viewing VintagePort object:\n";
    sherry.Show();
    cout << "Viewing VintagePort assignment:\n";
    map2.Show();


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
