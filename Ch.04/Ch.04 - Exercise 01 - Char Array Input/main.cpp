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
	char cGradeDeservedArray[2];
	int nAge;

	//*  Main Code
	cout << "What is your First Name? ";
	cin.getline(cFirstNameArray, 20);
	cout << "What is your Last Name? ";
	cin.getline(cLastNameArray, 20);
	cout << "What letter grade do you deserve? ";
	cin >> cGradeDeservedArray[0];	
	cout << "What is your age? ";
	cin >> nAge;
	
	if (cGradeDeservedArray[0] == 'A')
	{
		cGradeDeservedArray[1] = 'B';
	}
	else if (cGradeDeservedArray[0] == 'B')
	{
		cGradeDeservedArray[1] = 'C';
	}
	else if (cGradeDeservedArray[0] == 'C')
	{
		cGradeDeservedArray[1] = 'D';
	}
	
	cout << endl << endl;
	cout << "Name: " << cLastNameArray << ", " << cFirstNameArray << endl;
	cout << "Grade: " << cGradeDeservedArray[1] << endl;
	cout << "Age: " << nAge << endl;

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



