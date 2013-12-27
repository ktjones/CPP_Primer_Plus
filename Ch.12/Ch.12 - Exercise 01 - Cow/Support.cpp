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

Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}


Cow::Cow(const char * nm, const char * ho, double wt)
{
	
	strcpy(name,nm);
	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy(hobby,ho);	
	weight = wt;

}


Cow::Cow(const Cow & c)
{

	delete [] hobby;
	strcpy(name,c.name);
	int len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(hobby,c.hobby);	
	weight = c.weight;

}


Cow::~Cow()
{

	delete [] hobby;

}


Cow & Cow::operator=(const Cow & c)
{

	delete [] hobby;
	strcpy(name,c.name);
	int len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(hobby,c.hobby);	
	weight = c.weight;

	return *this;
}


void Cow::ShowCow() const // display all cow data
{
	
	cout << endl;
	cout << "Here is your COW data: " << endl;
	cout << endl;
	if (name[0] == '\0')
	{
		cout << "Name: None Assigned" << endl;
	}
	else
	{
		cout << "Name: " << name << endl;
	}

	if (hobby == nullptr)
	{
		cout << "Name: None Assigned" << endl;
	}
	else
	{
		cout << "Hobby: " << hobby << endl;
	}

	cout << "Weight: " << weight << endl;

}

