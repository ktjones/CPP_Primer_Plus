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

//*******************************
//
//  Code Body - Begin
//
//*******************************

#include <string>

using namespace std;

class BankAccount
{
	private:
		string m_customername;
		string m_accountnumber;
		double m_accountbalance;
	public:
		BankAccount();
		BankAccount(string & name, string & accountnumber, double amount = 0.0);
		~BankAccount();
		void Display () const;
		void Deposit (double amount);
		void Withdrawal (double amount);
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