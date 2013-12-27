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

//*******************************
//
//  Code Body - Begin
//
//*******************************

#include <iostream>

using namespace std;

class complex
{
	
	private:
		double real;
		double imaginary;

	public:
		complex();
		complex(double x, double y);

		//output 
		friend ostream & operator<<(ostream & os, complex & c);


		//input
		friend istream & operator>>(istream & os, complex & c);

		//Operator Overloading
		complex operator+(complex & c);
		complex operator-(complex & c);
		complex operator*(complex & c);
		friend complex operator*(double a, complex & c);
		void operator~();

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