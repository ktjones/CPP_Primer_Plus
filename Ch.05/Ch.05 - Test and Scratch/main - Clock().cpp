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
#include <ctime>
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
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	float secs;
	clock_t delay;
	clock_t start;

	//*  Main Code
	cout << "Enter the delay time, in seconds: ";
	cin >> secs;
	delay = secs * CLOCKS_PER_SEC;
	cout << "Starting\a\n";
	start = clock();
	while (clock()-start < delay)
		;
	cout << "done \a\n";
	
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



