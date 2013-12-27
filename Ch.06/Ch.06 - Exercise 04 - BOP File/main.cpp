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
	fstream fin;
	fin.open("BOP Roster.txt");
	char ch = '\0';
	char menu = '\0';
	int nnumberofBOPS = 0;
	int i = 0;

	//*  Main Code
	
	fin >> nnumberofBOPS; 
	fin.get();

	bop *roster = new bop[nnumberofBOPS]; 
	
	for (int j=0; j < nnumberofBOPS; j++)
	{
		fin.get(ch);
		while (ch != ';')
		{
			roster[j].fullname[i] = ch;
			i++;
			fin.get(ch);
		}
		roster[j].fullname[i]='\0';
		i=0;

		fin.get(ch);
		while (ch != ';')
		{
			roster[j].title[i] = ch;
			i++;
			fin.get(ch);
		}
		roster[j].title[i]='\0';
		i=0;

		fin.get(ch);
		while (ch != ';')
		{
			roster[j].bopname[i] = ch;
			i++;
			fin.get(ch);
		}
		roster[j].bopname[i]='\0';
		i=0;
		
		fin >> roster[j].preference;
		fin.get();
		
		cout << j << endl;
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
				cout << roster[k].fullname;
			}
		}
		
		if (menu == 'b' || menu == 'B')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				cout << roster[k].title;
			}
		}
	
		if (menu == 'c' || menu == 'C')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				cout << roster[k].bopname;
			}
		}
		
		if (menu == 'd' || menu == 'D')
		{
			cout << endl << "Your Roster is:" << endl << endl;
			for (int k=0; k < nnumberofBOPS; k++)
			{
				if (roster[k].preference == 0)
				{
					cout << roster[k].fullname;
				}
				else if (roster[k].preference == 1)
				{
					cout << roster[k].title;
				}
				else 
				{
					cout << roster[k].bopname;
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



