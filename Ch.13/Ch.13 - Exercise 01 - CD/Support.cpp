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
#include "header2.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

//base class

Cd::Cd(char * s1, char * s2, int n, double x)
{

	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;

}

Cd::Cd(const Cd & d)
{

	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	
}

Cd::Cd()
{

	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;

}

Cd::~Cd()
{
}

void Cd::Report() const // reports all CD data
{

	cout << endl << endl;
	cout << "Your CD Info: " << endl;
	cout << "performers: " << performers << endl;
	cout << "label: " << label << endl;
	cout << "# of Tracks: " << selections << endl;
	cout << "Play : " << performers << endl;

}

Cd & Cd::operator=(const Cd & d)
{

	if(this == &d)
	{
		return *this;
	}
	else
	{
		strcpy(performers, d.performers);
		strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
	}

	return *this;

}

//derived class

Classic::Classic(char * s3, char * s1, char * s2, int n, double x) : Cd(s1,s2,n,x)
{

	strcpy(description, s3);
	return;

}

Classic::Classic(const Classic & cl) : Cd(cl)
{

	strcpy(description, cl.description);
	return;

}

Classic::Classic()
{

	description[0] = '\0';
	return;

}

Classic::~Classic()
{

}

void Classic::Report() const // reports all CL & CD data
{

	Cd::Report();
	cout << "Description: " << description << endl;
	return;

}

Classic & Classic::operator=(const Classic & cl)
{

	Cd::operator=(cl);
	strcpy(description, cl.description);
	
	return *this;

}