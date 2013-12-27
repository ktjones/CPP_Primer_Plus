// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
using std::endl;
#include "header.h"

 // default constructor, wt = 0
Stonewt::Stonewt()         
{
    stone = pounds = pds_left = 0;
}

// destructor
Stonewt::~Stonewt()
{
}

/*
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}
*/

/*
// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}
*/

/*
// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}
*/

// revised constructor with STATE MEMBER
Stonewt::Stonewt(double stn, double lbs, Mode form)
{
	mode = form;

	if (mode == STONE)
	{
		stone = stn;
		pds_left = lbs;
		pounds =  stn * Lbs_per_stn +lbs;
	}
	else if (mode == INTEGER)
	{
		stone = int (lbs) / Lbs_per_stn;    // integer division
		pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
	}
	else if (mode == FLOAT)
	{
		stone = int (lbs) / Lbs_per_stn;    // integer division
		pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
	}
	else 
	{
		cout << endl << endl;
		cout << "Incorrect 3rd argument to STONEWT.  STONEWT set to ZERO" << endl;
		stone = pounds = pds_left = 0;
		mode = FLOAT;	
	}
}
// revised output operators
std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
	if (s.mode == Stonewt::STONE)
	{
		 cout << s.stone << " stone, " << s.pds_left << " pounds\n";
	}
	else if (s.mode == Stonewt::INTEGER)
	{
		 cout << int(s.pounds) << " pounds\n";
	}
	else if (s.mode == Stonewt::FLOAT)
	{
		 cout << s.pounds << " pounds\n";
	}

	return os;
}

// Overloaded OPERATORS
Stonewt Stonewt::operator+(const Stonewt & s) const
{
	Stonewt sum;

	if(mode == STONE)
	{
		sum = Stonewt(0,pounds + s.pounds,FLOAT);
		sum.mode = STONE;
	}
	else
	{
		sum = Stonewt(0,pounds + s.pounds,FLOAT);
	}

	return sum;
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
	Stonewt diff;
	
	if(mode == STONE)
	{
		diff = Stonewt(0,pounds - s.pounds,FLOAT);
		diff.mode = STONE;
	}
	else
	{
		diff = Stonewt(0,pounds - s.pounds,FLOAT);
	}

	return diff;
}

Stonewt Stonewt::operator*(double x) const
{
	Stonewt mult;
	
	if(mode == STONE)
	{
		mult = Stonewt(0,pounds * x,FLOAT);
		mult.mode = STONE;
	}
	else
	{
		mult = Stonewt(0,pounds * x,FLOAT);
	}

	return mult;
	
}

Stonewt operator*(double x, const Stonewt & s)
{
	return s * x;
}
