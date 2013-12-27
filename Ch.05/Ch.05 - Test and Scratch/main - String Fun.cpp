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
#include<cstring>
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
	char array1[20];
	char array2[20] = "Zeke";
	int result;
	int i = 0;
	int j = 0;

	//*  Main Code
	
	cin >> array1;
	cout << "array1: " << array1 << endl;
	cout << "array2: " << array2 << endl << endl;

	while (array1[i] != '\0')
	{
		++i;
	}

	cout << "Array 1: " << i << " characters long." << endl;

	while (array2[j] != '\0')
	{
		++j;
	}

	cout << "Array 2: " << j << " characters long." << endl;
	
	result = strcmp(array1, array2);

	cout << result << endl;

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



