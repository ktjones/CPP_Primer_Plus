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

// Benevolent Order of Programmers name structure
const int strsize = 50;

struct bop 
{
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

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
	bop roster[3] = 
	{
		{"Todd Jones #0","Royal Potentate #0","Bad Dude #0",0},
		{"Todd Jones #1","Royal Potentate #1","Bad Dude #1",1},
		{"Todd Jones #2","Royal Potentate #2","Bad Dude #2",2}
	};
	
	char menu = '\0';

	//*  Main Code
	
	while (menu != 'q')
	{
		cout << endl;
		cout << "a. display by name\t" << "b. display by title" << endl;
		cout << "c. display by bopname\t" << "d. display by preference" << endl;
		cout << "q. quit" << endl << endl;
		cout << "Please select how you would like to display the roster: ";
	
		cin.get(menu);
		cin.get();

		if (menu == 'a' || menu == 'A')
		{
			for (int i=0; i < 3;i++)
			{
				cout << roster[i].fullname << endl;
			}
		}
		
		if (menu == 'b' || menu == 'B')
		{
			for (int i=0; i < 3;i++)
			{
				cout << roster[i].title << endl;
			}
		}
	
		if (menu == 'c' || menu == 'C')
		{
			for (int i=0; i < 3;i++)
			{
				cout << roster[i].bopname << endl;
			}
		}
		
		if (menu == 'd' || menu == 'D')
		{
			for (int i=0; i < 3;i++)
			{
				if (roster[i].preference == 0)
				{
					cout << roster[i].fullname << endl;
				}
				else if (roster[i].preference == 1)
				{
					cout << roster[i].title << endl;
				}
				else 
				{
					cout << roster[i].bopname << endl;
				}
			}
		}		
	}

	
		
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



