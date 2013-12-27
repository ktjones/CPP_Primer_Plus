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

Move::Move(double a, double b)
	// sets x, y to a, b
{

	m_x = a;
	m_y = b;
	
	return;

}

//******************************************************

void Move::showmove() const // shows current x, y values
{

	cout << endl << endl;
	cout << "X: " << m_x << endl;
	cout << "Y: " << m_y << endl;
	cout << endl << endl;

	return;
}

//******************************************************
Move Move::add(const Move & m) const
		// this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates a new
		// move object initialized to new x, y values and returns it
{
	Move temp = Move();
	temp.m_x = m.m_x + m_x;
	temp.m_y = m.m_y + m_y;

	return temp;

}

//******************************************************
void Move::reset(double a, double b) // resets x,y to a, b
{
	
	m_x = a;
	m_y = b;
	
	return;

}

