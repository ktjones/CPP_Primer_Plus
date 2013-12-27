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

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	CandyBar stSnack = {"Mocha Munch", 2.3, 359};

	//*  Main Code

	cout << "Name: " << stSnack.name << endl;
	cout << "Weight: " << stSnack.weight << endl;
	cout << "Calories: " << stSnack.calories << endl;

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



