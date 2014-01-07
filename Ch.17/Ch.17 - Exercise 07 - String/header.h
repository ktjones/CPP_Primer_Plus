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
//  Code Body - #Include & Namespace Declaration
//
//*******************************

#include <fstream>
#include <string>

using namespace std;

//*******************************
//
//  Code Body - Class Definitions
//
//*******************************

class Store
{

	private:

		ofstream & os;

	public:

		Store(ofstream & os);
		const string & operator()(const string & str);

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