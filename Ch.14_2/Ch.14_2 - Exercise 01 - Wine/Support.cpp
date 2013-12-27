//*******************************
//
//  C++ Template Program - Support Files
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
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

/************************************************************/
// Wine Class Definitions

/*

	Private Members
		string name;							// Name of wine
		Pair<valarray<int>,valarray<int>> data;	// A Pair of Valarray objects holding ints.  The first member is for the years, The second member is # of bottles for each year.
		int years;								// # of entries in the array.	

*/

Wine::Wine() : name("N/A"), data(valarray<int>(),valarray<int>()), years(-1)
{

}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), data(valarray<int>(yr,y),valarray<int>(bot,y)), years(y)
{

}

Wine::Wine(const char * l, int y) : name(l), data(valarray<int>(0,y),valarray<int>(0,y)), years(y)
{

}

void Wine::GetBottles()
{

	cout << "I need some data from you!" << endl;
	cout << "We have " << years << " different years of data.  Please enter at the prompts." << endl;

	for (int i=0; i<years; i++)
	{
		cout << "Year: ";
		cin >> data.first()[i];
		cout << "# of Bottles: ";
		cin >> data.second()[i];
	}

}

string & Wine::Label()
{

	return name;

}

int Wine::Sum()
{

	int sumofbottles = 0;

	for (int i=0;i<years;i++)
	{
		sumofbottles += data.second()[i];
	}

	return sumofbottles;

}

void Wine::Show()
{

	cout << "Here is your wine summary: " << endl;
	cout << "Wine Name: " << Label() << endl;
	cout << "\tYear" << "\tBottles" << endl;

	for (int i=0;i<years;i++)
	{
		cout << "\t" << data.first()[i] << "\t" << data.second()[i] << endl;
	}
	
	return;

}