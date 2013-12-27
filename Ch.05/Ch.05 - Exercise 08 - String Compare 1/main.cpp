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
#include <cstring>
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
	const int nArraySize = 50;
	char szArrayMaster[nArraySize];
	char ch;
	int count = 0;
	int i = 0;
	int j = 0;
	int flag = -100;

	//*  Main Code
	
	cout << "Enter characters; enter # to quit:\n";
	
	while (strcmp(szArrayMaster, "done") != 0) 
	{
	
		cin.get(ch);

		while (ch != ' ')
		{
			// cout << ch;
			szArrayMaster[i] = ch;
			++i;
			cin.get(ch);
		}
		
		szArrayMaster[i] = '\0';
		i = 0;
		// cout << endl << "String: " << szArrayMaster;

		++count;
		// cout << endl << "# of words: " << count;

		/* if (strcmp(szArrayMaster, "done") != 0)
		{
			cout << endl << "The Strings do NOT match" << endl;
		}
		else
		{
			cout << endl << "The Strings DO match" << endl;
		}
		*/
				
	}

	cout << endl << count << " words read\n";

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



