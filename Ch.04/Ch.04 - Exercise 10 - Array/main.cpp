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
	float *times = new float[4];

	//*  Main Code
	cout << "Enter the first time: ";
	cin >> times[0];
	cout << "Enter the second time: ";
	cin >> times[1];
	cout << "Enter the third time: ";
	cin >> times [2];

	cout << endl << endl;

	times[3] = (times[0]+times[1]+times[2])/3.0;

	cout << "The first time is: " << times[0] << endl;
	cout << "The second time is: " << times[1] << endl;
	cout << "The third time is: " << times[2] << endl;
	cout << "The average time is: " << times[3] << endl;

	delete times;

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



