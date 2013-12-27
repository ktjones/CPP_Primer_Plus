//*******************************
//
//  C++ Template - Header File
//
//*******************************

//*******************************
//
//  Definition Statements - Begin
//
//*******************************

#ifndef HEADER_H_
#define HEADER_H_

using namespace std;

//*******************************
//
//  Code Body - Begin
//
//*******************************

// emp.h -- header file for abstr_emp class and children
#include <iostream>
#include <string>

class abstr_emp
{
	private:
		
		string fname; // abstr_emp's first name
		string lname; // abstr_emp's last name
		string job;

	public:
		
		//constructors
		abstr_emp();
		abstr_emp(const string & fn, const string & ln, const string & j);
		virtual ~abstr_emp() = 0; // virtual base class

		//other methods
		virtual void ShowAll() const; // labels and shows all data
		virtual void SetAll(); // prompts user for values
		
		//friends
		friend ostream & operator<<(ostream & os, const abstr_emp & e);  // just displays first and last name
		
};


class employee : public abstr_emp
{
	
	private:



	public:
		
		//constructors
		employee();
		employee(const string & fn, const string & ln, const string & j);
		
		//other methods
		virtual void ShowAll() const;
		virtual void SetAll();

};


class manager: virtual public abstr_emp
{
	private:
	
		int inchargeof; // number of abstr_emps managed
	
	protected:
	
		int InChargeOf() const { return inchargeof; } // output
		int & InChargeOf(){ return inchargeof; } // input

	public:
		
		//constructor
		manager();
		manager(const string & fn, const string & ln, const string & j, int ico = 0);
		manager(const abstr_emp & e, int ico);
		manager(const manager & m);

		//other methods
		virtual void ShowAll() const;
		virtual void SetAll();

};

class fink: virtual public abstr_emp
{
	
	private:
		
		string reportsto; // to whom fink reports
	
	protected:
	
		const string ReportsTo() const { return reportsto; }
		string & ReportsTo(){ return reportsto; }

	public:

		//constructors
		fink();
		fink(const string & fn, const string & ln, const string & j, const string & rpo);
		fink(const abstr_emp & e, const string & rpo);
		fink(const fink & e);

		//other methods
		virtual void ShowAll() const;
		virtual void SetAll();

};

class highfink: public manager, public fink // management fink
{
	
	private:
	

	public:
		
		//constructors
		highfink();
		highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico);
		highfink(const abstr_emp & e, const string & rpo, int ico);
		highfink(const fink & f, int ico);
		highfink(const manager & m, const string & rpo);
		highfink(const highfink & h);
		
		//other methods
		virtual void ShowAll() const;
		virtual void SetAll();

};


//*******************************
//
//  Code Body - End
//
//*******************************


//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif