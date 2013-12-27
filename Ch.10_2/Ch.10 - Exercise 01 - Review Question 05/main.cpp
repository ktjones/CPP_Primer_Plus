//***************************************************************************************************
//
//  C++ Template Program
//
//***************************************************************************************************
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

using namespace std;


//********************************
//
//  Global Variable Declaration
//
//********************************





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





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string AccountName1 = "BofA";
	string AccountNumber1 = "123456789";
	
	string AccountName2 = "Wells Fargo";
	string AccountNumber2 = "000000000";

	//*  Main Code
	
	BankAccount Test1 = BankAccount(AccountName1, AccountNumber1, 1000000);
	BankAccount Test2 = BankAccount(AccountName2, AccountNumber2);

	Test1.Display();
	Test2.Display();

	Test1.Deposit(20);
	Test2.Deposit(20);

	Test1.Display();
	Test2.Display();

	Test1.Withdrawal(20);
	Test2.Withdrawal(19);

	Test1.Display();
	Test2.Display();


	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//***************************************************************************************************
//
//  Functions Begin Here
//
//***************************************************************************************************

//********************************
//
//	Function #1
//

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
