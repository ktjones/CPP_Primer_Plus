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
#include <cstdio>

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
	cout << "This system can generate up to " << TMP_MAX
		<< " temporary names of up to " << L_tmpnam
		<< " characters." << endl;

	char pszName[L_tmpnam] = { '\0' };

	cout << "Here are the ten names:" << endl;

	for (int i = 0; 10 > i; i++)
	{
		tmpnam(pszName);
		cout << pszName << endl;
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
