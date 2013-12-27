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

	int len = 0;

	len = strlen(s1);
	performers = new char[len+1];
	strcpy(performers, s1);

	len = strlen(s2);
	label = new char[len+1];
	strcpy(label, s2);
	
	selections = n;
	playtime = x;

}

Cd::Cd(const Cd & d)
{

	int len = 0;

	delete [] performers;
	delete [] label;

	len = strlen(d.performers);
	performers = new char[len+1];
	strcpy(performers, d.performers);
	
	len = strlen(d.label);
	label = new char[len+1];
	strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;
	
}

Cd::Cd()
{

	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;

}

Cd::~Cd()
{

	delete [] performers;
	delete [] label;

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
	
		int len = 0;

		delete [] performers;
		delete [] label;

		len = strlen(d.performers);
		performers = new char[len+1];
		strcpy(performers, d.performers);
	
		len = strlen(d.label);
		label = new char[len+1];
		strcpy(label, d.label);

		selections = d.selections;
		playtime = d.playtime;
	
	}

	return *this;

}


//derived class

Classic::Classic(char * s3, char * s1, char * s2, int n, double x) : Cd(s1,s2,n,x)
{

	int len = 0;

	len = strlen(s3);
	description = new char[len+1];
	strcpy(description, s3);
	
	return;

}

Classic::Classic(const Classic & cl) : Cd(cl)
{

	int len = 0;

	len = strlen(cl.description);
	description = new char[len+1];
	strcpy(description, cl.description);
	
	return;

}

Classic::Classic()
{

	description = nullptr;
	return;

}

Classic::~Classic()
{

	delete [] description;

}

void Classic::Report() const // reports all CL & CD data
{

	Cd::Report();
	cout << "Description: " << description << endl;
	return;

}

Classic & Classic::operator=(const Classic & cl)
{

	int len = 0;

	Cd::operator=(cl);

	len = strlen(cl.description);
	description = new char[len+1];
	strcpy(description, cl.description);
	
	return *this;

}

