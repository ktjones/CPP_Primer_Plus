// mytime3.h -- Time class with friends
#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    
	//Time operator+(const Time & t) const;
	friend Time operator+(const Time & s, const Time & t);

    //Time operator-(const Time & t) const;
    friend Time operator-(const Time & s, const Time & t);

	//Time operator*(double n) const;
    friend Time operator*(const Time & t, double m);
	
	friend Time operator*(double m, const Time & t)
        { return t * m; }   // inline definition
    
	friend std::ostream & operator<<(std::ostream & os, const Time & t);

};
#endif
