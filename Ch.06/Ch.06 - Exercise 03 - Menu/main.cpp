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
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//
//********************************



//********************************
//
//  Global Variable Declaration
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
	char ch = '\0';
	int flag = 0;
	
	//*  Main Code
	
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore\t" << "p) piano" << endl;
	cout << "t) tree\t" << "g) game" << endl << endl;

	for (;;)
	{
		if(ch != '\n')
		{
			cout << "Please enter your choice: ";
		}
		
		cin.get(ch);

		switch(ch)
		{
			case 'c':
			case 'C':	cout << endl << "You picked a meat eating animal" << endl << endl;
						flag = 1;
						break;
			case 'p':
			case 'P':	cout << endl << "You picked a fine instrument" << endl << endl;
						flag = 1;
						break;
			case 't':
			case 'T':	cout << endl << "You picked a piece of wood" << endl << endl;
						flag = 1;
						break;
			case 'g':
			case 'G':	cout << endl << "You picked this silly game" << endl << endl;
						flag = 1;
						break;
			default :	;
		}

		if (flag == 1)
		{
			break;
		}
		
	}

	// cout << endl << chmenuChoice << endl;

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************



