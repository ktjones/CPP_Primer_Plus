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
#include <string>
#include <fstream>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

Store::Store(ofstream & os) : os(os)
{



}

const string & Store::operator()(const string & str)
{

	int len = str.size();

	os.write((char *)&len, sizeof(std::size_t));
	os.write(str.data(), len);
	
	return str;
	
}

