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

#ifndef HEADER2_H_
#define HEADER2_H_

//*******************************
//
//  Code Body - Begin
//
//*******************************

#include "header.h"

class Classic : public Cd
{
	
	private:
		char * description;

	public:
		Classic(char * s3, char * s1, char * s2, int n, double x);
		Classic(const Classic & cl);
		Classic();
		virtual ~Classic();
		virtual void Report() const; // reports all CL & CD data
		Classic & operator=(const Classic & cl);

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