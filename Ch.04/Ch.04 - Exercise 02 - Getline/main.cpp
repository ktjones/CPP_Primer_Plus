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



//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string szFirstName;
	string szLastName;
	string szGradeDeserved;
	int nAge;

	//*  Main Code
	cout << "What is your First Name? ";
	getline(cin, szFirstName);
	cout << "What is your Last Name? ";
	getline(cin, szLastName);
	cout << "What letter grade do you deserve? ";
	cin >> szGradeDeserved;	
	cout << "What is your age? ";
	cin >> nAge;
	
	if (szGradeDeserved == "A")
	{
		szGradeDeserved = "B";
	}
	else if (szGradeDeserved == "B")
	{
		szGradeDeserved = "C";
	}
	else if (szGradeDeserved == "C")
	{
		szGradeDeserved = "D";
	}
	
	cout << endl << endl;
	cout << "Name: " << szLastName << ", " << szFirstName << endl;
	cout << "Grade: " << szGradeDeserved << endl;
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



