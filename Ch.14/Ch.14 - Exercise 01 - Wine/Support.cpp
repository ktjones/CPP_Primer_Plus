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
#include <string>
#include <valarray>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

Wine::Wine() : m_data(valarray<int>(),valarray<int>())	// default constructor
{

	m_name = "N/A";
	years = 0;

}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : m_name(l), years(y), m_data(valarray<int>(yr,y),valarray<int>(bot,y))
		// initialize label to l, number of years to y,
		// vintage years to yr[], bottles to bot[]
{

}

Wine::Wine(const char * l, int y) : m_name(l), years(y), m_data(valarray<int>(0,y),valarray<int>(0,y))
		// initialize label to l, number of years to y,
		// create array objects of length y
{

}

void Wine::GetBottles()
{

	cout << endl << endl;

	for (int i=0;i<years;i++)
	{
		cout << "Vintage Year #" << i+1 << ": ";
		cin >> m_data.first()[i];
		cout << "How Many Bottles? ";
		cin >> m_data.second()[i];
	}
		
	cout << endl << endl;

}

string & Wine::Label()
{

	return m_name;

}

int Wine::sum()
{

	int bsum = 0;

	for (int i=0;i<years;i++)
	{
		bsum += m_data.second()[i];
	}

	return bsum;

}

void Wine::Show()
{

	cout << endl << endl;

	cout << "Vintage Name: " << m_name << endl;

	for (int i=0;i<years;i++)
	{
		cout << "Vintage Year #" << i+1 << ": " << m_data.first()[i] << endl;
		cout << "# of Bottles: " << m_data.second()[i] << endl;
	}
		
	cout << endl << endl;


}