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

BankAccount::BankAccount()
{

	return;
};

BankAccount::BankAccount(string & name, string & accountnumber, double amount)
{

	m_customername = name;
	m_accountnumber = accountnumber;
	m_accountbalance = amount;

	return;
};


BankAccount::~BankAccount()
{
};


void BankAccount::Display () const
{

	cout << endl << endl;
	cout << "Display Bank Account Info: " << endl;
	cout << "Customer Name: " << m_customername << endl;
	cout << "Account Number: " << m_accountnumber << endl;
	cout << "Account Balance: " << m_accountbalance << endl;
	cout << endl << endl;

};


void BankAccount::Deposit (double amount)
{

	m_accountbalance += amount;

	return;
};


void BankAccount::Withdrawal (double amount)
{

	m_accountbalance -= amount;

	return;
};
