// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <cstring>

using namespace std;

class Stock
{
private:
    char * m_company;
	// string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
	
	// Constructors
	Stock();        // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock();       // do-something destructor
    
	// Methods
	void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    //void show()const;
    const Stock & topval(const Stock & s) const;
	
	// friend functions
	friend ostream & operator<<(ostream & os, const Stock & s);

};

#endif
