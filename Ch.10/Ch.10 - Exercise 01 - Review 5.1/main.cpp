//*******************************
//
//  C++ Template Program
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


//********************************
//
//  Global Variable Declaration
//
//********************************

const int MAX = 10;



//********************************
//
//  Compound Type Declaration Section
//
//********************************





//********************************
//
//  Function Declaration Section
//
//********************************





//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	BankAccount BofA[MAX] = {BankAccount()};
	char menu = '\0';
	int menuitem;
	string customername = "No Name";
	string accountnumber = "No Number";
	double accountbalance = 0;
	int count=0;
	double depositamount = 0;
	double withdrawalamount = 0;

	//*  Main Code

	cout << "Please Choose a Menu Option: " << endl;
	cout << "(a)dd customer data" << endl;
	cout << "(d)eposit money" << endl;
	cout << "(w)ithdraw money" << endl;
	cout << "(s)how me the money" << endl;
	cout << "(q)uit" << endl;
	cin.get(menu).get();

	cout << endl;
	
	while (cin && menu != 'q')
	{
		if (menu == 'a')
		{
			while (count<MAX)
			{ 
				cout << endl;
				cout << "Customer #" << count+1 << " Name: ";
				getline(cin,customername);
				if (customername.size() > 0)
				{
					cout << "Account Number: ";
					getline(cin,accountnumber);
					cout << "Starting Balance: ";
					cin >> accountbalance;
					cin.get();
					BofA[count].create(customername,accountnumber,accountbalance);
					count++;
				}
				else 
				{
					break;
				}
			}
		}
		else if (menu == 'd')
		{
			cout << endl << endl;
			cout << "Please pick which account to deposit into: " << endl;
			for (int j=0; j<count; j++)
			{
				cout << "Account #" << j+1 << endl;
				BofA[j].Display();
			}
			cout << endl << "Choice? ";
			cin >> menuitem;
			cin.get();

			if (menuitem > count)
			{
				cout << endl << "Sorry, that is not a viable account" << endl;
			}
			else
			{
				cout << "What is the amount to deposit? ";
				cin >> depositamount;
				cin.get();
				BofA[menuitem-1].Deposit(depositamount);
			}
		}
		else if (menu == 'w')
		{
			cout << endl << endl;
			cout << "Please pick which account to withdraw from: " << endl;
			for (int j=0; j<count; j++)
			{
				cout << "Account #" << j+1 << endl;
				BofA[j].Display();
			}
			cout << endl << "Choice? ";
			cin >> menuitem;
			cin.get();

			if (menuitem > count)
			{
				cout << endl << "Sorry, that is not a viable account" << endl;
			}
			else
			{
				cout << "What is the amount to withdraw? ";
				cin >> withdrawalamount;
				cin.get();
				BofA[menuitem-1].Withdrawal(depositamount);
			}
		}
		else if (menu == 's')
		{
			for (int i=0; i<count; i++)
			{
				BofA[i].Display();
			}
		}

		cout << endl;
		cout << "Please Choose a Menu Option: " << endl;
		cout << "(a)dd customer data" << endl;
		cout << "(d)eposit money" << endl;
		cout << "(w)ithdraw money" << endl;
		cout << "(s)how me the money" << endl;
		cout << "(q)uit" << endl;
		cin.get(menu).get();

		cout << endl;
	}

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
