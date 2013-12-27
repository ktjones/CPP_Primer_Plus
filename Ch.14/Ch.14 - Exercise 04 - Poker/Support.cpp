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


// Class Person 

Person::Person(string f, string l)
{

	fname = f;
	lname = l;

}

Person::~Person()
{
}

void Person::Show()
{

	cout << endl << endl;
	cout << "Basic Personal Info: " << endl;
	cout << "First Name:\t " << fname << endl;
	cout << "Last Name:\t " << lname << endl; 
	cout << endl << endl;
	
}


// Class Gunslinger : virtual public Person

GunSlinger::GunSlinger(int n, double d, string f, string l) : Person(f,l)
{

	draw = d;
	notches = n;

}

GunSlinger::~GunSlinger()
{
}

double GunSlinger::Draw()
{

	draw = rand() % 10 + 1;

	return draw;

}

void GunSlinger::Show()
{

	Person::Show();
	cout << "Gunslinger Info: " << endl;
	cout << "Draw Time:\t " << draw << endl;
	cout << "Belt Notches:\t " << notches << endl; 
	cout << endl << endl;

	return;

}


// Class PokerPlayer : virtual public Person

PokerPlayer::PokerPlayer(int nc, string f, string l) : Person(f,l) 
{

	nCardDrawn = nc;

}

PokerPlayer::~PokerPlayer()
{
}

int PokerPlayer::Draw()
{

	// code for randomly generating a number between 1 and 52, inclusive, representing cards in a playing deck.

	nCardDrawn = rand() % 52 + 1;

	return nCardDrawn;

}

void PokerPlayer::Show()
{

	Person::Show();
	cout << endl;
	cout << "Poker Player Info: " << endl;
	cout << "Next Card Up: " << nCardDrawn;
	cout << endl;
		
}

// class BadDude : public PokerPlayer, Public GunSlinger

BadDude::BadDude(int nc, int n, double d, string f, string l) : Person(f,l), PokerPlayer(nc,f,l), GunSlinger(n,d,f,l)
{
}

BadDude::~BadDude()
{
}

double BadDude::GDraw()
{

	return GunSlinger::Draw();
	
}

int BadDude::CDraw()
{

	return PokerPlayer::Draw();

}

void BadDude::Show()
{

	Person::Show();
	GunSlinger::Show();
	PokerPlayer::Show();
		
}
