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

//****************************************
//
//  Base Class
//
//****************************************

Port::Port(const char * br, const char * st, int b)
{

	int len = 0;
	len = strlen(br);
	brand = new char[len+1];
	strcpy(brand, br);

	strcpy(style, st); // i.e., tawny, ruby, vintage

	bottles = b;

	return;

}

Port::Port(const Port & p) // copy constructor
{

	int len = 0;
	len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand, p.brand);

	strcpy(style, p.style); // i.e., tawny, ruby, vintage

	bottles = p.bottles;

	return;

}

Port::~Port()
{
	delete [] brand;
}
		
// overloaded operators
Port & Port::operator=(const Port & p)
{
	if (this == &p)
	{
		return *this;
	}

	delete [] brand;

	int len = 0;
	len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand, p.brand);

	strcpy(style, p.style); // i.e., tawny, ruby, vintage

	bottles = p.bottles;

	return *this;

}

Port & Port::operator+=(int b)  // adds b to bottles
{

	bottles = bottles + b;

	return *this;

}

Port & Port::operator-=(int b)	// subtracts b from bottles, if available
{

	if(b > bottles)
	{
		cout << "That is too many bottles!  Operation Canceled!" << endl;
	}
	else
	{
		bottles = bottles - b;
	}

	return *this;
	
}
		
// other methods
int Port::BottleCount() const
{
	return bottles;
}

void Port::Show() const
{

	cout << "Brand:  " << brand << endl;
	cout << "Style:  " << style << endl;
	cout << "Bottles: " << bottles << endl; 

}

		
// friends
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	
	return os;
}


//****************************************
//
//  Derived Class
//
//****************************************

VintagePort::VintagePort() : Port()
{

	nickname = nullptr; // i.e., "The Noble" or "Old Velvet", etc.
	year = 0; // vintage year

}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "vintage", b)
{

	int len = 0;

	len = strlen(nn);
	nickname = new char[len+1];
	strcpy(nickname,nn);

	year = y;

	return;

}

VintagePort::VintagePort(const VintagePort & vp)
{

	Port::Port(vp);

	strcpy(nickname,vp.nickname);
	year = vp.year;

	return;

}

VintagePort::~VintagePort()
{ 
	delete [] nickname;
}

// Overloaded Operators
VintagePort & VintagePort::operator=(const VintagePort & vp)
{

	Port::operator=(vp);

	delete [] nickname;

	int len = 0;

	len = strlen(vp.nickname);
	nickname = new char[len+1];
	strcpy(nickname,vp.nickname);

	year = vp.year;

	return *this;

}
		
// Other Methods
void VintagePort::Show() const
{

	Port::Show();

	cout << "Nickname:  " << nickname << endl;
	cout << "Year:  " << year << endl;
	
	return;

}

		
// friends
ostream & operator<<(ostream & os, const VintagePort & vp)
{

	os << (const Port &) vp << ", " << vp.nickname << ", " << vp.year << endl;
	
	return os;

}

