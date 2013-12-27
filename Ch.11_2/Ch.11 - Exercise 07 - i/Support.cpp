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

	m_real = 0.0;
	m_imaginary = 0.0;

	return;
}

complex::complex(double r, double i)
{

	m_real = r;
	m_imaginary = i;

	return;
}

complex complex::operator+(const complex & c)
{
	complex temp = complex();

	temp.m_real = m_real + c.m_real;
	temp.m_imaginary = m_imaginary + c.m_imaginary;

	return temp;
}

complex complex::operator-(const complex & c)
{
	complex temp = complex();

	temp.m_real = m_real - c.m_real;
	temp.m_imaginary = m_imaginary - c.m_imaginary;

	return temp;
}

complex complex::operator*(double n)
{
	complex temp = complex();

	temp.m_real = n * m_real;
	temp.m_imaginary = n * m_imaginary;

	return temp;
}

complex operator*(double n, complex & c)
{

	return c * n;

}

complex complex::operator*(const complex & c)
{

	complex temp = complex();

	temp.m_real = (m_real * c.m_real) - (m_imaginary * c.m_imaginary);
	temp.m_imaginary = (m_real * c.m_imaginary) + (m_imaginary * c.m_real);

	return temp;

}

complex complex::operator~()
{
	complex temp = *this;
	temp.m_imaginary = -(m_imaginary);

	return temp;
}


istream & operator>>(istream & is, complex & c)
{
	double r = 0;
	double i = 0;

	cout << "Enter the real portion: ";
	cin >> r;
	c.m_real = r;
	cout << "Enter the imaginary portion: ";
	cin >> i;
	c.m_imaginary = i;

	return is;
}

ostream & operator<<(ostream & os, const complex & c)
{

	cout << "(" << c.m_real << ", " << c.m_imaginary << "i)";

	return os;

}
