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
	CandyBar stSnack[3] = 
	{
		{"Milky Way",10.0,100},
		{"Snickers",12.0,500},
		{"Three Musketeers",15.0,1000}
	};
	
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



