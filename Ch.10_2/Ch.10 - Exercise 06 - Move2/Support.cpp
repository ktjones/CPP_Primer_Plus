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

Move::Move(double a, double b) // sets x, y to a, b
{

	x = a;
	y =b;

}

void Move::showmove() const // shows current x, y values
{
	
	cout << endl;
	cout << "Current Positions:" << endl;
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	cout << endl;

}

Move Move::add(const Move & m) const
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
{

	double a;
	double b;

	a = m.x + x;
	b = m.y + y;

	Move Temp = Move(a,b);

	return Temp;
	
}



void Move::reset(double a, double b) // resets x,y to a, b
{

	x = a;
	y = b;

}
