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

	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n; // number of selections
	playtime = x; // playing time in minutes

	return;

}

Cd::Cd(const Cd & d)
{

	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections; // number of selections
	playtime = d.playtime; // playing time in minutes

	return;

}

Cd::Cd()
{

	performers[0] = '\0';
	label[0] = '\0';
	selections = -1; // number of selections
	playtime = -1.0; // playing time in minutes

	return;
}

Cd::~Cd()
{

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

	work[0] = '\0';

	return;

}

Classic::Classic(char * s3, char * s1, char * s2, int n, double x) : Cd(s1,s2,n,x)
{

	strcpy(work,s3);

	return;

}

Classic::Classic(const Classic & c) : Cd(c)
{

	strcpy(work, c.work);

	return;

}

Classic::~Classic()
{
}

void Classic::Report() const
{

	Cd::Report();
	cout << "Work: " << work << endl;

	return;

}

Classic & Classic::operator=(const Classic & c)
{

	Cd::operator=(c);
	strcpy(work, c.work);
	
	return *this;

}

/**********************************************************************************************/