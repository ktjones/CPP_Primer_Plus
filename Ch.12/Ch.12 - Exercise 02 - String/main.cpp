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
#include "string2.h"

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
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;

	//*  Main Code
	cout << s2; // overloaded << operator
	cin >> s3; // overloaded >> operator
	
	s2 = "My name is " + s3; // overloaded =, + operators
	cout << s2 << ".\n";
	
	s2 = s2 + s1;
	
	cout << s2;
	
	s2.stringup(); // converts string to uppercase
	
	cout << endl;

	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
	<< " 'A' characters in it.\n";
	
	s1 = "red"; // String(const char *),
	
	// then String & operator=(const String&)
	String rgb[3] = { String(s1), String("green"), String("blue")};
	cout << "Enter the name of a primary color for mixing light: ";
	String ans;
	
	bool success = false;
	
	while (cin >> ans)
	{
		ans.stringlow(); // converts string to lowercase
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i]) // overloaded == operator
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
		break;
		else
		cout << "Try again!\n";
	}

	cout << "Bye\n";

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






