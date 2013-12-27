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
#include <string>
#include <cstring>

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

class Person 
	{
		private:
			static const int LIMIT = 25;
			string lname; // Person’s last name
			char fname[LIMIT]; // Person’s first name
		public:
			Person(); // #1
			Person(const string & ln, const char * fn = "Heyyou"); // #2
			// the following methods display lname and fname
			void Show() const; // firstname lastname format
			void FormalShow() const; // lastname, firstname format
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