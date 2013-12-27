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
#include <cstring>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

/******************************************************************************************/
// Base Class

Port::Port(const char * br, const char * st, int b)
{

	int brlen = 0;
	brlen = strlen(br);
	brand = new char[brlen+1];
	strcpy(brand, br);
	
	strcpy(style,st);
	
	bottles = b;

	return;

}

Port::Port(const Port & p) // copy constructor
{

	int brlen = 0;
	brlen = strlen(p.brand);
	brand = new char[brlen+1];
	strcpy(brand, p.brand);
	
	strcpy(style,p.style);
	
	bottles = p.bottles;

	return;
	
}

Port::~Port()
{ 
	delete [] brand;
}
		
Port & Port::operator=(const Port & p)
{

	if (this == &p)
	{
		return *this;
	}
	
	delete [] brand;

	int brlen = 0;
	brlen = strlen(p.brand);
	brand = new char[brlen+1];
	strcpy(brand, p.brand);
	
	strcpy(style,p.style);
	
	bottles = p.bottles;
	
	return *this;

}

Port & Port::operator+=(int b) // adds b to bottles
{

	bottles = bottles + b;

	return *this;

}

Port & Port::operator-=(int b) // subtracts b from bottles, if available
{

	bottles = bottles - b;

	return *this;

}
		
int Port::BottleCount() const 
{ 
	return bottles;
}

void Port::Show() const
{

	cout << endl;
	cout << "Brand:\t" << brand << endl;
	cout << "Style:\t" << style << endl;
	cout << "Bottles: " << bottles << endl;

	return;

}

ostream & operator<<(ostream & os, const Port & p)
{

	os << p.brand << ", " << p.style << ", " << p.bottles << endl; 

	return os;

}

/******************************************************************************************/

// VintagePort

VintagePort::VintagePort() : Port()
{

	nickname = nullptr; // i.e., "The Noble" or "Old Velvet", etc.
	year = -1; // vintage year

}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "Vintage", b)
{

	int nnlen = 0;

	nnlen = strlen(nn);
	nickname = new char[nnlen+1];
	strcpy(nickname, nn);

	year = y;

	return;

}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{

	int nnlen = 0;

	nnlen = strlen(vp.nickname);
	nickname = new char[nnlen+1];
	strcpy(nickname, vp.nickname);

	year = vp.year;

	return;

}

VintagePort::~VintagePort()
{ 
	delete [] nickname;
}
		
VintagePort & VintagePort::operator=(const VintagePort & vp)
{

	Port::operator=(vp);

	if (this == &vp)
	{
		return *this;
	}

	delete [] nickname;

	int nnlen = 0;

	nnlen = strlen(vp.nickname);
	nickname = new char[nnlen+1];
	strcpy(nickname, vp.nickname);

	year = vp.year;

	return *this;

}

void VintagePort::Show() const
{

	Port::Show();

	cout << "Nickname: " << nickname << endl;
	cout << "Year:\t" << year << endl;

	return;
	
}
		
ostream & operator<<(ostream & os, const VintagePort & vp)
{

	os << (Port &) vp;

	os << ", " << vp.nickname << ", " << vp.year << endl;

	return os;
}
