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

complex::complex()
{
	real = 0.0;
	imaginary = 0.0;
}


complex::complex(double x, double y)
{
	real = x;
	imaginary = y;
	
}

ostream & operator<<(ostream & os, complex & c)
{
	cout << "(" << c.real << ", " << c.imaginary << ")" << endl;

	return os;
}

istream & operator>>(istream & os, complex & c)
{
	cout << "Real: ";
	cin >> c.real;
	cout << "Imaginary: ";
	cin >> c.imaginary;
	
	return os;
}

complex complex::operator+(complex & c)
{
	complex temp;
	temp.real = real + c.real;
	temp.imaginary = imaginary + c.imaginary;

	return temp;

}

complex complex::operator-(complex & c)
{
	complex temp;
	temp.real = real - c.real;
	temp.imaginary = imaginary - c.imaginary;

	return temp;

}

complex complex::operator*(complex & c)
{
	complex temp;
	temp.real = (real * c.real)-(imaginary * c.imaginary);
	temp.imaginary = (real * c.imaginary) + (imaginary * c.real);

	return temp;

}

complex operator*(double a, complex & c)
{
	complex temp;
	temp.real = a * c.real;
	temp.imaginary = a * c.imaginary;

	return temp;

}

void complex::operator~()
{
	imaginary = imaginary * -1;
	
	return;
}
