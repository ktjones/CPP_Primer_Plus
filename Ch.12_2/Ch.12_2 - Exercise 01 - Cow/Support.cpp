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
	weight = 0.0;

	return;

}

Cow::Cow(const char * nm, const char * ho, double wt)
{

	int len = 0;
	
	strcpy(name, nm);
	
	len = strlen(ho);
	hobby = new char[len+1];
	strcpy(hobby,ho);
	weight = wt;

	return;

}

Cow::Cow(const Cow & c)
{
	
	int len = 0;

	strcpy(name, c.name);
	
	//delete [] hobby;
	len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return;

}

Cow::~Cow()
{

	delete [] hobby;

}

Cow & Cow::operator=(const Cow & c)
{

	
	if(this == &c)
	{
		return *this;
	}
	

	int len = 0;

	strcpy(name, c.name);
	
	delete [] hobby;
	len = strlen(c.hobby);
	hobby = new char[len+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const // display all cow data
{

	cout << endl << endl;
		
	if (hobby == nullptr)
	{
		cout << "Cow's Name: \t" << "N/A" << endl;
		cout << "Cow's Hobby:\t" << "N/A" << endl;
		cout << "Cow's Weight:\t" << weight << endl;
	}
	else 
	{
		cout << "Cow's Name: \t" << name << endl;
		cout << "Cow's Hobby:\t" << hobby << endl;
		cout << "Cow's Weight:\t" << weight << endl;
	}

		cout << endl << endl;

	return;
}
