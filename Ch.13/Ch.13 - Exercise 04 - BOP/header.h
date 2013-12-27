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

using namespace std;

//*******************************
//
//  Code Body - Begin
//
//*******************************

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
		
		// overloaded operators
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
		// Constructors
		VintagePort();
		VintagePort(const char * br, int b, const char * nn, int y);
		VintagePort(const VintagePort & vp);
		~VintagePort();

		// Overloaded Operators
		VintagePort & operator=(const VintagePort & vp);
		
		// Other Methods
		void Show() const;
		
		// friends
		friend ostream & operator<<(ostream & os, const VintagePort & vp);

};


/* answers to questions:

a. See code.
b. destructor:  This is virtual so that the correct version of the destructor is called when requested.  This accounts for static and dynamic binding.
   show:		This is virtual, because the derived class adds extra data for display.  If the method were not redefined, the new members would not be displayed.
c. operator= : This function is not inherited.  The signature changes from base to derivation, and thus needs to be defined separately.
   operator<< : Usually associated with a friend function of the ostream class.  Friend functions are not inherited.
d. See code.

*/


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