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

Todd::Todd(int x,int y)
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0
{
	//*  Variable Declaration
	

 	//*  Main Code
	
	m_x = x;
	m_y = y;
	
	//*  Program End
	
	return;

}
//********************************

void Todd::setTodd()
{
	//*  Variable Declaration
	int f;
	int s;

 	//*  Main Code
	cout << endl;
	cout << "Please enter the first #: ";
	cin >> f;
	cout << "Please enter the second #: ";
	cin >> s;

	*this = Todd(f, s);

	return;
}

//********************************
void Todd::showTodd()
	// display all information in structure s
{
	//*  Variable Declaration

 	//*  Main Code
	cout << endl;
	cout << "Here is your Todd!" << endl;
	cout << "X: " << m_x << endl;
	cout << "Y: " << m_y << endl;

	//*  Program End
	
	return;
}

