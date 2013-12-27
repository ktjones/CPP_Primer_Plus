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
#include "header.h"

//********************************
//
//  Global Variable Declaration
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section 
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Class Definitions
//	- Outside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Outside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************

//******************************************************************************************

//********************************
//
//  Name Space Declarations & Definitions
//
//********************************

using namespace std;


//********************************
//
//  Global or Name Space Variable Declaration
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//	- Inside of Name Space
//
//********************************



//********************************
//
//  Function Definition
//	- Inside of Name Space
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************




//********************************
//
//  Class Definitions
//	- Inside of Name Space
//
//********************************

		void BankAccount::create(const string & name, const string & accountnumber, double amount)
		{
			m_customername = name;
			m_accountnumber = accountnumber;
			m_accountbalance = amount;
		}

		BankAccount::BankAccount()
		{
			m_accountbalance = 0.0;
		}
			
		void BankAccount::Display() const
		{
			cout << endl << "Displaying the Bank Account Info" << endl;
			cout << "Customer Name: " << m_customername << endl;
			cout << "Account Number: " << m_accountnumber << endl;
			cout << "Account Balance: " << m_accountbalance << endl;		
		}

		void BankAccount::Deposit(double amount)
		{
			m_accountbalance += amount;
		}

		void BankAccount::Withdrawal(double amount)
		{
			m_accountbalance -= amount;
		}


