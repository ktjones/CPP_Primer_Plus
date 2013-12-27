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
#include <string>

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

struct bop 
{
	string fullname; // real name
	string title; // job title
	string bopname; // secret BOP name
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
	fstream fin;
	fin.open("BOP Roster.txt");
	char menu = '\0';
	int nnumberofBOPS = 0;

	//*  Main Code
	
	fin >> nnumberofBOPS; 
	fin.get();

	bop *roster = new bop[nnumberofBOPS]; 
	
	for (int i=0; i < nnumberofBOPS; i++)
	{
		getline(fin, roster[i].fullname);
		getline(fin, roster[i].title);
		getline(fin, roster[i].bopname);
		fin >> roster[i].preference;
		fin.get();
	}
	
	while (menu != 'q')
	{
		cout << endl << endl;
		cout << "******************************* MENU *******************************" << endl;
		cout << endl;
		cout << "a. display by name\t" << "b. display by title" << endl;
		cout << "c. display by bopname\t" << "d. display by preference" << endl;
		cout << "q. quit" << endl << endl;
		cout << "Please select how you would like to display the roster: ";
	
		cin.get(menu);
		cin.get();

		if (menu == 'a' || menu == 'A')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				cout << roster[k].fullname << endl;
			}
		}
		
		if (menu == 'b' || menu == 'B')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				cout << roster[k].title << endl;
			}
		}
	
		if (menu == 'c' || menu == 'C')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				cout << roster[k].bopname << endl;
			}
		}
		
		if (menu == 'd' || menu == 'D')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				if (roster[k].preference == 0)
				{
					cout << roster[k].fullname << endl;
				}
				else if (roster[k].preference == 1)
				{
					cout << roster[k].title << endl;
				}
				else 
				{
					cout << roster[k].bopname << endl;
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



