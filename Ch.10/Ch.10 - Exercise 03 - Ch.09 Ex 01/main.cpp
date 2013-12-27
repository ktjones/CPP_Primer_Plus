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
#include <cstring>
#include "header.h"
using namespace std;


//********************************
//
//  Global Variable Declaration
//
//********************************

const int Len = 40;



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
	char name[Len];
	int HC;

	int maxnoofgolfers = 10;
	int countofgolfers = 0;
	int breakflag = 0;

	//*  Main Code
	
	//test #1 - provided data, one run
	cout << endl << "TEST #1: Hard Coded Data" << endl;
	
	golf ann = golf("Anne Hatheway", 2);
	ann.showgolf();

	//test #2 - requested data, one run.
	
	cout << endl << endl << endl << "TEST #2: " << endl << endl;
	cout << "  Enter a Name: ";
	cin.get(name,Len-1);
	
	//* Error handling Code

	if (!cin)
	{
		cin.clear();
		return 1;
	}
	else if(cin.get() != '\n')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
	}
	
	//* End Error Handling Code

	cout << "  Enter a handicap: ";
	cin >> HC;
	cin.get();

	golf bob =golf(name, HC);
	bob.showgolf();
	

	//test #3 - requested data, # of runs is dynamic
	golf * ptr = new golf[maxnoofgolfers];  // create an array of class objects dynamically (varying #s of golfers)

	cout << endl << endl << endl << "TEST #3: Now for the big Array Finale!" << endl;

	for (int i=0; i<maxnoofgolfers; i++)
	{
		cout << endl << "  Enter a Name: ";
		cin.get(name,Len-1);
	
		//* Error handling Code

		if (!cin)
		{
			cin.clear();
			break;
		}
		else if(cin.get() != '\n')
		{
			while (cin.get() != '\n')
			{
				continue;
			}
		}
	
		//* End Error Handling Code

		cout << "  Enter a handicap: ";
		cin >> HC;
		cin.get();

		ptr[i] = golf(name, HC);
		countofgolfers += 1;
	}

	for (int i=0; i<countofgolfers;i++)
	{
		ptr[i].showgolf();
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
