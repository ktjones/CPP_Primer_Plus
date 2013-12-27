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

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <memory>

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
	int len = 0;
	unique_ptr<string> ups1(new string("Todd"));
	unique_ptr<string> ups2(new string("Jim"));
	
	//*  Main Code
	
	cout << *ups1 << endl;
	cout << *ups2 << endl;

	*ups2 = *ups1;

	cout << *ups2 << endl;
	cout << *ups1 << endl;

	*ups2 = "jimbob";

	cout << *ups2 << endl;
	cout << *ups1 << endl;
	
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
