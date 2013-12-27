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
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	char cFirstNameArray[20];
	char cLastNameArray[20];
	char cCombinedNameArray[50];
	int nCombinedArraySize = 0;

	//*  Main Code
	cout << "What is your First Name? ";
	cin.getline(cFirstNameArray, 20);
	cout << "What is your Last Name? ";
	cin.getline(cLastNameArray, 20);

	strcpy(cCombinedNameArray, cFirstNameArray);
	strcat(cCombinedNameArray, ", ");
	strcat(cCombinedNameArray, cLastNameArray);
	
	nCombinedArraySize = strlen(cCombinedNameArray);
	cCombinedNameArray[nCombinedArraySize+1] = '\n';

	cout << "First Name: " << cFirstNameArray << endl;
	cout << "Last Name: " << cLastNameArray << endl;
	cout << "Combined Array Size: " << nCombinedArraySize << endl;
	cout << "Here is the information in a single string: " << cCombinedNameArray <<  endl << endl;
	
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



