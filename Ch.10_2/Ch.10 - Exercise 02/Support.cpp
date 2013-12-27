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
#include <string>
#include <cstring>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

Person::Person() 
{
	
	lname = "";
	fname[0] = '\0';

} // #1

// the following methods display lname and fname
Person::Person(const string & ln, const char * fn)
{
	
	lname = ln;
	strcpy(fname,fn);

}  // #2


void Person::Show() const // firstname lastname format
{

	cout << endl << endl;
	cout << "Informal Person Information" << endl;
	cout << endl;
	cout << fname << " " << lname << endl;
	cout << endl << endl;

}


void Person::FormalShow() const // lastname, firstname format
{

	cout << endl << endl;
	cout << "Formal Person Information" << endl;
	cout << endl;
	cout << lname << " " << fname << endl;
	cout << endl << endl;
	
}