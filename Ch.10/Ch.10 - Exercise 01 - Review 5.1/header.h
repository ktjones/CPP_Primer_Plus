//*******************************
//
//  C++ Template - Header File
//
//*******************************

#include <string>

//*******************************
//
//  Definition Statements - Begin
//
//*******************************

#ifndef HEADER_H_
#define HEADER_H_

//*******************************
//
//  Code Body - Namespace Declaration
//
//*******************************

using namespace std;

//*******************************
//
//  Code Body - Class Definitions
//
//*******************************

class BankAccount
	{
	private:
		string m_customername;
		string m_accountnumber;
		double m_accountbalance;
	public:
		BankAccount();
		void create(const string & name, const string & accountnumber, double amount);
		void Display() const;
		void Deposit(double amount);
		void Withdrawal(double amount);
	};

//*******************************
//
//  Code Body - Function Protoypes
//
//*******************************



//*******************************
//
//  Code Body - Other Codes
//
//*******************************



//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif