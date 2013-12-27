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

//using namespace std;


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
	int yrs;
	const int YRS = 3;
	int y[YRS] = {1993, 1995, 1998};
	int b[YRS] = { 48, 60, 72};

	//*  Main Code

	std::cout << "Enter name of wine: ";
	char lab[50];

	std::cin.getline(lab, 50);
	std::cout << "Enter number of years: ";
	std::cin >> yrs;
	
	Wine holding(lab, yrs); // store label, years, give arrays yrs elements
	holding.GetBottles(); // solicit input for year, bottle count
	holding.Show(); // display object contents
	
	// create new object, initialize using data in arrays y and b
	Wine more("Gushing Grape Red",YRS, y, b);
	more.Show();
	
	std::cout << "Total bottles for " << more.Label() // use Label() method
	<< ": " << more.sum() << std::endl; // use sum() method
	std::cout << "Bye\n";

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	std::cout << std::endl << std::endl;
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
