// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <cstring>
#include <iostream>
#include <string>

class Stock
{
private:
    char * company;
	int shares;
    int len;
	double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();        // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock();       
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;

	// overloaded friend functions
	friend std::ostream & operator<<(std::ostream & os, const Stock & st);

};

#endif
