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

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

golf::golf(const char * name, int hc)
{
    //*  Variable Declaration
	int i = 0;

	//*  Main Code
	
	while (name[i] != '\0')
	{
		m_fullname[i] = name[i];
		i++;
	}
	m_fullname[i] = '\0';
	m_handicap = hc;
	
	//*  Program End
	return;
}
//********************************
golf::~golf()
{
}
//********************************
int golf::setgolf()
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

	*this = golf(name, HC);

	//*  Program End
	return 0;
}
//********************************
void golf::handicap(int hc)
{
	
    //*  Variable Declaration

	//*  Main Code

	//*  Program End
	return;
}
//********************************
void golf::showgolf()
{
    //*  Variable Declaration

	//*  Main Code

	cout << "Player: " << m_fullname << endl;
	cout << "Handicap: " << m_handicap << endl;

	//*  Program End
	return;
}
//********************************
