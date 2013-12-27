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

#include <iostream>
#include <fstream>
#include <random>
#include <algorithm>
#include <vector>

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





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	vector<int> vq;

	random_device rd;
	

	//*  Main Code
	for (int x = 0; x < 10; x++)
	{
		vq.push_back(x);
	}

	for (auto x : vq)
	{
		cout << x << ", ";

	}

	shuffle(vq.begin(), vq.end(), rd);

	cout << endl << endl;

	for (auto x : vq)
	{
		cout << x << ", ";

	}

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
