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
	CandyBar *stSnack = new CandyBar[3];
	stSnack[0].name = "Milky Way";
	stSnack[0].weight = 10.0;
	stSnack[0].calories = 100;
	stSnack[1].name = "Snickers";
	stSnack[1].weight = 12.0;
	stSnack[1].calories = 500;
	stSnack[2].name = "Three Musketeers";
	stSnack[2].weight = 15.0;
	stSnack[2].calories = 1000;

	//*  Main Code

	cout << "Candy Bar #1" << endl;
	cout << "Name: " << stSnack[0].name << endl;
	cout << "Weight: " << stSnack[0].weight << endl;
	cout << "Calories: " << stSnack[0].calories << endl;
	
	cout << endl << endl;

	cout << "Candy Bar #2" << endl;
	cout << "Name: " << stSnack[1].name << endl;
	cout << "Weight: " << stSnack[1].weight << endl;
	cout << "Calories: " << stSnack[1].calories << endl;
	
	cout << endl << endl;

	cout << "Candy Bar #3" << endl;
	cout << "Name: " << stSnack[2].name << endl;
	cout << "Weight: " << stSnack[2].weight << endl;
	cout << "Calories: " << stSnack[2].calories << endl;

	cout << endl << endl;

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



