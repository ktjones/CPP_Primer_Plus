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

void add(Item & stuff);



//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	Item Test;

	//*  Main Code
	List Todd = List();
	Todd.push(1);
	Todd.push(2);
	Todd.push(3);
	Todd.showlist();
	
	void(*pf)(Item & stuff);
	pf = add;

	Todd.visit(pf);
	Todd.showlist();

	Todd.pop(Test);
	cout << endl << Test;
	Todd.pop(Test);
	cout << endl << Test;
	Todd.pop(Test);
	cout << endl << Test;
	Todd.showlist();

	Todd.visit(pf);
	Todd.showlist();

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

void add(Item & stuff)
{

	stuff = stuff*10;

}