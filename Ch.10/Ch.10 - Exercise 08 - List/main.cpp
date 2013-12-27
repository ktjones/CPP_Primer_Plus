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
#include <cctype>
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

void addtax (Item &);
void addtip (Item &);


//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	char ch;
	double runningTotal = 0;
    
	customer info;
	List st = List();
	
	void (*atx) (Item &);
	void (*atp) (Item &);
	atx = addtax;
	atp = addtip;

	//*  Main Code

	
    cout << "Menu Options: " << endl;
	cout << "(A) to add a Customer" << endl;
    cout << "(V) to process all Customer Fees (Taxes and Tips)" << endl;
	cout << "(S) to show all Customer Data" << endl;
	cout << "(Q) to quit." << endl;
	cout << endl;
	cout << "Please enter your choice: ";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')   
        {
			continue;
		}
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << endl;
					   cout << "Enter a Customer Name to add: ";
                       cin.getline(info.fullname,35);
					   cout << "Enter this Customer's Payment: ";
					   cin >> info.payment;
					   cin.get();

					   if (st.isfull())
                           cout << endl << "List already full\n";
                       else
                           st.add(info);
                       break;

             
			 case 'V':
             case 'v': if (st.isempty())
                           cout << endl << "List is empty\n";
                       else 
					   {
                             st.visit(atx);
							 st.visit(atp);
					   }
                       break;

			 case 'S':
			 case 's': st.showlist();
			
        }
        cout << endl << endl;
		cout << "Menu Options: " << endl;
		cout << "(A) to add a Customer" << endl;
		cout << "(V) to process all Customer Fees (Taxes and Tips)" << endl;
		cout << "(S) to show all Customer Data" << endl;
		cout << "(Q) to quit." << endl;
		cout << endl;
		cout << "Please enter your choice: ";
    }

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
void addtax (Item & fl)
{
    //*  Variable Declaration

	
	//*  Main Code
	fl.payment = fl.payment * 1.0825;
		
	//*  Program End
	
	return;
}
//********************************
//********************************
//
//	Function #2
//
void addtip (Item & fl)
{
    //*  Variable Declaration

	
	//*  Main Code
	fl.payment = fl.payment * 1.2;
		
	//*  Program End
	
	return;
}
//********************************
