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
#include <string>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

/*********************************************************/
// class Person

	// string fname;
	// string lname;

Person::Person(string f,string l) : fname(f), lname(l)
{
}

Person::~Person()
{
}

void Person::Show()
{

	cout << endl;
	cout << "First Name:\t" << fname << endl;
	cout << "Last Name:\t" << lname << endl;
	
	return;
}

void Person::Set()
{

	cout << "First Name:\t";
	getline(cin,fname);
	cout << "Last Name:\t";
	getline(cin,lname);

}

/*********************************************************/
// class GunSlinger : public Person

	// double dtime;
	// int notches;

GunSlinger::GunSlinger(string f, string l, double d, int n) : Person(f,l), dtime(d), notches(n)
{
}

GunSlinger::~GunSlinger()
{
}

double GunSlinger::Draw()
{

	return dtime;

}

void GunSlinger::Data()
{

	cout << "Draw Time:\t" << dtime << endl;
	cout << "Notches:\t" << notches << endl;

}

void GunSlinger::Show()
{


	Person::Show();
	GunSlinger::Data();

}

void GunSlinger::Set()
{

	Person::Set();
	cout << "Draw Time:\t";
	cin >> dtime;
	cout << "Notches:\t";
	cin >> notches;

}
/*********************************************************/
// class PokerPlayer : virtual public Person

PokerPlayer::PokerPlayer(string f, string l) : Person(f,l)
{
}

PokerPlayer::~PokerPlayer()
{
}

int PokerPlayer::Draw()
{

	return rand() % 52 + 1;

}

void PokerPlayer::Set()
{

	Person::Set();
		
}


void PokerPlayer::Data()
{

	cout << "Next Card:\t" << Draw();

}

void PokerPlayer::Show()
{

	Person::Show();
	PokerPlayer::Data();

}


/*********************************************************/
// class BadDue : public Gunslinger, public PokerPlayer

BadDude::BadDude(string f, string l, double d, int n) : Person(f,l), GunSlinger(f,l,d,n)
{
}

BadDude::~BadDude()
{
}

double BadDude::gDraw()
{

	return GunSlinger::Draw();

}


int BadDude::cDraw()
{

	return PokerPlayer::Draw();

}

void BadDude::Data()
{

}


void BadDude::Show()
{

	Person::Show();
	GunSlinger::Data();
	PokerPlayer::Data();
	BadDude::Data();

}

void BadDude::Set()
{

	GunSlinger::Set();
	
}