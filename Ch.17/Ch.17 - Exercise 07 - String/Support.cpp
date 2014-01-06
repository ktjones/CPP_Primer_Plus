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

store::store()
{


}

store::store(ofstream & os)
{
	
	os.write((char *)&len, sizeof(std::size_t));
	os.write(s.data(), len);

	return;
}

const string & store::operator()(const string & str)
{

	return str;
	
}

