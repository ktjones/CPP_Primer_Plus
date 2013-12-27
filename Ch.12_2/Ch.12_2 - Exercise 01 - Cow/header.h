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

class Cow 
{
	private:	
		char name[20];
		char * hobby;
		double weight;
	public:
		Cow();
		Cow(const char * nm, const char * ho, double wt);
		Cow(const Cow & c);
		~Cow();
		Cow & operator=(const Cow & c);
		void ShowCow() const; // display all cow data
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