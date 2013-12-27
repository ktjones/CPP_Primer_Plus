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
#include <cctype>

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

void strFunc(string &);
void printFunc(string &);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string word = "\0";

	//*  Main Code

	cout << "Enter a String (q to quit): ";
	getline(cin,word);

	while (word != "q")
	{
		strFunc(word);
		printFunc(word);
		
		cout << "Enter a String (q to quit): ";
		getline(cin,word);
	}

	cout << "Thank you and come again!" << endl;

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
void strFunc(string &str)
{
	//*  Variable Declaration
	int size = 0;


	//*  Main Code
	size = str.length();
	for (int i=0; i < size; i++)
	{
		if (islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
	}
	
	//*  Program End

	return;
}
//********************************

void printFunc(string &str)
{
    //*  Variable Declaration



	//*  Main Code

	cout << str << endl;

	//*  Program End

	return;
}
//********************************