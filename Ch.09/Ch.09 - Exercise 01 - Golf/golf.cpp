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
#include "golf.h"

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

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

void setgolf(golf & g, const char * name, int hc)
{
    //*  Variable Declaration
	int i = 0;

	//*  Main Code
	
	while (name[i] != '\0')
	{
		g.fullname[i] = name[i];
		i++;
	}
	g.fullname[i] = '\0';
	g.handicap = hc;
	
	//*  Program End
	return;
}
//********************************

int setgolf(golf & g)
{
	
    //*  Variable Declaration
	char name[Len];
	int HC;

	//*  Main Code
	
	cout << endl << "Enter a Name: ";
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

	cout << "Enter a handicap: ";
	cin >> HC;
	cin.get();

	setgolf(g, name, HC);

	//*  Program End
	return 0;
}
//********************************

void handicap(golf & g, int hc)
{
	
    //*  Variable Declaration

	//*  Main Code

	//*  Program End
	return;
}
//********************************

void showgolf(const golf & g)
{
    //*  Variable Declaration

	//*  Main Code

	cout << "Player: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;

	//*  Program End
	return;
}
//********************************
