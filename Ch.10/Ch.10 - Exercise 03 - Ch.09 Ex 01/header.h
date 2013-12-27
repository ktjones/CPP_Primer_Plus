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
//  Code Body - Namespace Declaration
//
//*******************************

using namespace std;

//*******************************
//
//  Code Body - Class Definitions
//
//*******************************

class golf
{
	private:
		enum {Len = 40};
		char m_fullname[Len];
		int m_handicap;
	public:
		golf(char * fullname = "", int handicap = -1);
		void showgolf();
};

//*******************************
//
//  Code Body - Function Protoypes
//
//*******************************



//*******************************
//
//  Code Body - Other Codes
//
//*******************************



//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif

/*
// golf.h -- for pe9-1.cpp
const int Len = 40;

struct golf
{
char fullname[Len];
int handicap;
};

// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function

void setgolf(golf & g, const char * name, int hc);

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string

int setgolf(golf & g);

// function resets handicap to new value

void handicap(golf & g, int hc);

// function displays contents of golf structure

void showgolf(const golf & g);

#endif
*/