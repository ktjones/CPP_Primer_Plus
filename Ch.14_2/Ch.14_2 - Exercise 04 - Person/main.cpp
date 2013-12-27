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
	const int SIZE = 5;

	Person * pPerson[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
			<< "g: GunSlinger  p: PokerPlayer  "
			<< "b: BadDude  q: quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter a g, p, b, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch(choice)
		{
			case 'g':   pPerson[ct] = new GunSlinger;
						break;
			case 'p':   pPerson[ct] = new PokerPlayer;
						break;
			case 'b':   pPerson[ct] = new BadDude;
						break;
		}
		cin.get();
		pPerson[ct]->Set();
	}

	cout << "\nHere are your Westerners:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		pPerson[i]->Show();
	}
	for (i = 0; i < ct; i++)
	{
			delete pPerson[i];
	}
	
		cout << endl << endl;
	cout << "Bye.\n";
	
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
