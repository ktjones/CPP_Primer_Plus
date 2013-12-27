// stock20.cpp -- augmented version
#include <iostream>
#include <cstring>
#include "stock20.h"


using namespace std;

// constructors
Stock::Stock()        // default constructor
{
    
	m_company = nullptr;

	shares = 0;
    share_val = 0.0;
    total_val = 0.0;

}

Stock::Stock(const char * co, long n, double pr)
{
    
	int len = 0;
	len = strlen(co);
	m_company = new char[len+1];
	strcpy(m_company,co);
	
    if (n < 0)
    {
        cout << "Number of shares can't be negative; " << m_company << " shares set to 0.\n";
        shares = 0;
    }
    else
	{
		shares = n;
	}
	
	share_val = pr;
    set_tot();
}

// class destructor
Stock::~Stock()        // quiet class destructor
{

	delete [] m_company;

}

// other methods
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

ostream & operator<<(ostream & os, const Stock & s)
{
    
    // set format to #.###
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = os.precision(3);

    os << "Company: " << s.m_company  << "  Shares: " << s.shares << '\n';
    os << "  Share Price: $" << s.share_val;
    // set format to #.##
    os.precision(2);
    os << "  Total Worth: $" << s.total_val << '\n';

    // restore original format
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);

	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
    {
			return s;
	}
	else
	{
        return *this; 
	}
}
