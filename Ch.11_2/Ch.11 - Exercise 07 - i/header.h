//*******************************
//
//  C++ Template - Header File
//
//*******************************

//*******************************
//
//  Definition Statements - Begin
//
//*******************************

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
using namespace std;

//*******************************
//
//  Code Body - Begin
//
//*******************************

class complex
{
	private:
		double m_real;
		double m_imaginary;


	public:
		//constructor
		complex();
		complex(double r, double i);

		//operators
		complex operator+(const complex & c);
		complex operator-(const complex & c);
		complex operator*(const complex & c);
		complex operator*(double n);
		complex operator~();

		//friends
		friend complex operator*(double n, complex & c);
		friend istream & operator>>(istream & is, complex & c);
		friend ostream & operator<<(ostream & os, const complex & c);




};







//*******************************
//
//  Code Body - End
//
//*******************************


//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif