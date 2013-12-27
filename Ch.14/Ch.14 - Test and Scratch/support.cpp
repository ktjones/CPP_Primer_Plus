
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "header.h"

using namespace std;
 
void abstr_emp::ShowAll() const
{
    cout << "\nFirstname: " << fname << endl;
    cout << "Lastname: " << lname << endl;
    cout << "Job: " << job << endl;
}
 
void abstr_emp::SetAll()
{
    cout << "\nEnter Firstname: ";
    getline(cin,fname);
    cout << "Enter Lastname: ";
    getline(cin, lname);
    cout << "Enter Job: ";
    getline(cin, job);
}
 
abstr_emp::~abstr_emp() {}
 
std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << ", " << e.lname;
    return os;
}
 
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of: " << inchargeof << " employees" << endl;
}
 
void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "In charge of how many employees ? ";
    (cin >> inchargeof).get();
}
 
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}
 
void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter Whom to report to: ";
    getline(cin, reportsto);
}
 
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of: " << InChargeOf() << " employees" << endl;
    cout << "Reports to: " << ReportsTo() << endl;
}
 
void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "In charge of how many employees ? ";
    (cin >> InChargeOf()).get();
    cout << "Enter Whom to report to: ";
    getline(cin, ReportsTo());
}