// stonewt.h -- definition for the Stonewt class
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>

class Stonewt
{
public:
	enum Mode {STONE,INTEGER,FLOAT};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
	Mode mode;
public:
    Stonewt();                    // default constructor
    ~Stonewt();
	//Stonewt(double lbs);          // constructor for double pounds
    //Stonewt(int stn, double lbs); // constructor for stone, lbs
    
	Stonewt(double stn, double lbs, Mode form = FLOAT);

    //void show_lbs() const;        // show weight in pounds format
    //void show_stn() const;        // show weight in stone format

	friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);

	Stonewt operator+(const Stonewt & s) const;
	Stonewt operator-(const Stonewt & s) const;
	Stonewt operator*(double x) const;
	friend Stonewt friend operator*(double x, const Stonewt & s);

};
#endif
