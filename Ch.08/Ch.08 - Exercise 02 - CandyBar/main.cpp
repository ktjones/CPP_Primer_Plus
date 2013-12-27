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
#include <string>

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

struct CandyBar
{
	string Name;
	double Weight;
	int Calories;
};



//********************************
//
//  Function Declaration Section
//
//********************************

void funcBar (CandyBar & cbar, string cbarname = "Millennium Munch", double cbarweight = 2.85, int cbarcalories = 350);
void printBar (CandyBar &);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	CandyBar MarsBars;
	string name;
	double weight;
	int calories;

	//*  Main Code

	cout << "We need to know about your candybar.  Please give us some details" << endl;
	cout << "Name: ";
	getline(cin,name);
	cout << "Weight: ";
	cin >> weight;
	cout << "Calories: ";
	cin >> calories;

	funcBar (MarsBars,name,weight,calories);
	printBar (MarsBars);

	cout << endl << "Now let's try that again with the default #s..."  << endl;
	
	funcBar (MarsBars);
	printBar (MarsBars);

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

	//*  Function End

//********************************

void funcBar (CandyBar & cbar, string cbarname, double cbarweight, int cbarcalories)
{
	//*  Variable Declaration



	//*  Main Code
	cbar.Name = cbarname;
	cbar.Weight = cbarweight;
	cbar.Calories = cbarcalories;
	
	//*  Program End

	return;
}

//********************************

void printBar (CandyBar & cbar)
{
    //*  Variable Declaration


	//*  Main Code
	cout << endl << "Here is your info:" << endl;
	cout << "Candy Bar Name: " << cbar.Name << endl;
	cout << "Candy Bar Weight: " << cbar.Weight << endl;
	cout << "Candy Bar Calories: " << cbar.Calories << endl;
	cout << endl;

	//*  Function End

	return;
}