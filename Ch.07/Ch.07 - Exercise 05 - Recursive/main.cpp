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
//  Function Declaration Section
//
//********************************

int factorialfunction(int count);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	
	int number = 0;
	int factorial = 0; 

	//*  Main Code
	
	cout << "Welcome to the Factorial Program." << endl;
	cout << "Please enter a number: ";

	cin >> number;

	factorial = factorialfunction(number);

	cout << "The factorial is: " << factorial;

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

int factorialfunction(int count)
{
	//*  Variable Declaration
	
	int answer = 0;

	//*  Main Code

	if (count > 1)
	{
		answer = count * factorialfunction(count-1);
	}
	else
	{
		answer = 1;
	}

	//*  Program End

	return answer;
}