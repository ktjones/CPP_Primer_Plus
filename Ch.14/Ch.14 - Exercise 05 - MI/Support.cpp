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

//abstract base class
abstr_emp::abstr_emp()
{

	fname = "N/A";
	lname = "N/A";
	job = "N/A";

	return;

}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j)
{

	fname = fn;
	lname = ln;
	job = j;
	
	return;

}


abstr_emp::~abstr_emp() // virtual base class
{
}

void abstr_emp::ShowAll() const // labels and shows all data
{

	cout << "First Name\t: " << fname << endl;
	cout << "Last Name\t: " << lname << endl;
	cout << "Job\t\t: " << job << endl;

}

void abstr_emp::SetAll() // prompts user for values
{

	cout << "Enter the First Name: ";
	getline(cin,fname);
	cout << "Enter the Last Name: ";
	getline(cin,lname);
	cout << "Enter the Job: ";
	getline(cin,job);
	
	return;

}


std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{

	cout << e.lname << ", " << e.fname << ", Job: " << e.job << endl;

	return os;

}

/**********************************************************************************************************/

//class employee : public abstr_emp

employee::employee() : abstr_emp()
{
}

employee::employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn,ln,j)
{
}

//other methods
void employee::ShowAll() const
{

	abstr_emp::ShowAll();

	return;

}

void employee::SetAll()
{

	abstr_emp::SetAll();

	return;

}

/**********************************************************************************************************/

//class manager: virtual public abstr_emp

manager::manager()
{
}

manager::manager(const string & fn, const string & ln, const string & j, int ico) : abstr_emp(fn,ln,j)
{

	inchargeof = ico;

	return;

}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e)
{

	inchargeof = ico;

	return;
	
}

manager::manager(const manager & m) : abstr_emp(m)
{

	inchargeof = m.InChargeOf();

	return;

}

void manager::ShowAll() const
{

	abstr_emp::ShowAll();
	cout << "In Charge of: " << inchargeof << endl;

	return;
}

void manager::SetAll()
{

	abstr_emp::SetAll();
	cout << "In charge of how many people? ";
	(cin >> inchargeof).get();

}

/**********************************************************************************************************/

//class fink: virtual public abstr_emp

fink::fink() : abstr_emp()
{

	reportsto = "N/A";

	return;

}

fink::fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn,ln,j)
{

	reportsto = rpo;

	return;

}

fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e)
{

	reportsto = rpo;

	return;

}

fink::fink(const fink & e) : abstr_emp(e)
{

	reportsto = e.ReportsTo();

	return;

}

void fink::ShowAll() const
{

	abstr_emp::ShowAll();
	cout << "Reports To: " << reportsto << endl;

	return;

}

void fink::SetAll()
{

	abstr_emp::SetAll();
	cout << "Enter whom to Report to: ";
	getline(cin,reportsto);

	return;

}

/**********************************************************************************************************/

//class highfink: public manager, public fink 
// management fink

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico) : abstr_emp(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo)
{
}

highfink::highfink(const abstr_emp & e, const string & rpo, int ico) : abstr_emp(e), manager(e,ico), fink(e,rpo)
{
}

highfink::highfink(const fink & f, int ico) : abstr_emp(f), manager(f,ico), fink(f)
{
}

highfink::highfink(const manager & m, const string & rpo) : abstr_emp(m), manager(m), fink(m,rpo)
{
}

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{

	abstr_emp::ShowAll();
	cout << "In Charge of: " << InChargeOf() << endl;
	cout << "Reports To: " << ReportsTo() << endl;

}

void highfink::SetAll()
{

	abstr_emp::SetAll();
	cout << "In charge of how many people? ";
	(cin >> InChargeOf()).get();
	cout << "Enter whom to report to: ";
	getline(cin,ReportsTo());

}
