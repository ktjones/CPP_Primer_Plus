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
class Port
{
	private:
		
		char * brand;
		char style[20]; // i.e., tawny, ruby, vintage
		int bottles;

	public:
		
		// constructors
		Port(const char * br = "none", const char * st = "none", int b = 0);
		Port(const Port & p); // copy constructor
		virtual ~Port();
		
		// operators
		Port & operator=(const Port & p);
		Port & operator+=(int b); // adds b to bottles
		Port & operator-=(int b); // subtracts b from bottles, if available
		
		// other methods
		int BottleCount() const;
		virtual void Show() const;

		// friends
		friend ostream & operator<<(ostream & os, const Port & p);

};

class VintagePort : public Port // style necessarily = "vintage"
{
	private:

		char * nickname; // i.e., "The Noble" or "Old Velvet", etc.
		int year; // vintage year

	public:
		
		// Constructor
		VintagePort();
		VintagePort(const char * br, int b, const char * nn, int y);
		VintagePort(const VintagePort & vp);
		~VintagePort();
		
		// Operators
		VintagePort & operator=(const VintagePort & vp);
		void Show() const;
		
		// Friends
		friend ostream & operator<<(ostream & os, const VintagePort & vp);

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