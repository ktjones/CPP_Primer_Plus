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
#include <cstring>
#include <iostream>
#include <fstream>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

//class Cd 

Cd::Cd(char * s1, char * s2, int n, double x)
{

	int s1l = 0;
	int s2l = 0;

	s1l = strlen(s1);
	s2l = strlen(s2);

	performers = new char[s1l+1];
	label = new char[s2l+1];

	strcpy(performers, s1);
	strcpy(label, s2);

	selections = n; // number of selections
	playtime = x; // playing time in minutes

	return;

}

Cd::Cd(const Cd & d)
{

	delete [] performers;
	delete [] label;

	int s1l = 0;
	int s2l = 0;

	s1l = strlen(d.performers);
	s2l = strlen(d.label);
	
	performers = new char[s1l+1];
	label = new char[s2l+1];

	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections; // number of selections
	playtime = d.playtime; // playing time in minutes

	return;

}

Cd::Cd()
{

	performers = nullptr;
	label = nullptr;
	selections = -1; // number of selections
	playtime = -1.0; // playing time in minutes

	return;
}

Cd::~Cd()
{

	delete [] performers;
	delete [] label;

	return;

}

void Cd::Report() const // reports all CD data
{

	cout << "Performer: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "# of Selections: " << selections << endl;
	cout << "Total Playtime: " << playtime << endl;

	return;

}

Cd & Cd::operator=(const Cd & d)
{

	if (this == &d)
	{
		return *this;
	}
	
	delete [] performers;
	delete [] label;

	int s1l = 0;
	int s2l = 0;

	s1l = strlen(d.performers);
	s2l = strlen(d.label);
		
	performers = new char[s1l+1];
	label = new char[s2l+1];

	strcpy(performers, d.performers);
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
	
	return *this;
}

/**********************************************************************************************/

//class Classic : public Cd

Classic::Classic() : Cd()
{

	work = nullptr;

	return;

}

Classic::Classic(char * s3, char * s1, char * s2, int n, double x) : Cd(s1,s2,n,x)
{

	int s3l = 0;

	s3l = strlen(s3);

	work = new char[s3l+1];

	strcpy(work,s3);

	return;

}

Classic::Classic(const Classic & c) : Cd(c)
{

	int s3l = 0;

	delete[] work;

	s3l = strlen(c.work);

	work = new char[s3l+1];

	strcpy(work, c.work);

	return;

}

Classic::~Classic()
{

	delete [] work;

	return;

}

void Classic::Report() const
{

	Cd::Report();
	cout << "Work: " << work << endl;

	return;

}

Classic & Classic::operator=(const Classic & c)
{

	int s3l = 0;

	if (this == &c)
	{
		return *this;
	}
	
	Cd::operator=(c);

	delete [] work;
	
	s3l = strlen(c.work);
	work = new char[s3l+1];
	strcpy(work, c.work);
	
	return *this;

}

/**********************************************************************************************/