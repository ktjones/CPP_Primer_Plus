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
#include <cctype>

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
	char ch;

	//*  Main Code
	cout << "Please enter characters.  End by entering the @ symbol." << endl;

	cin.get(ch);

	while (ch != '@')
	{
		if(isdigit(ch))
		{
			cout << ch;
		}
		else if (isalpha(ch))
		{
			if (islower(ch))
			{
				cout << char(toupper(ch));
			}
			else 
			{
				cout << char(tolower(ch));
			}
		}
		else if (isspace(ch))
		{
			cin.get(ch);
			continue;
		}
		else
		{
			cout << ch;
		}

		cin.get(ch);
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



