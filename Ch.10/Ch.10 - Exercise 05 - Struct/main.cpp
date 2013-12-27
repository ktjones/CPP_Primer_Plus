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
	Stack st = Stack();
	
	//*  Main Code

	
    cout << "Please enter A to add a Customer,\n"
        << "P to process a Customer, or Q to quit.\n";
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
             case 'a': cout << "Enter a Customer Name to add: ";
                       cin.getline(info.fullname,35);
					   cout << "Enter this Customer's Payment: ";
					   cin >> info.payment;
					   cin.get();

					   if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(info);
                       break;

             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else 
					   {
                             st.pop(info);
							 runningTotal = runningTotal + info.payment;
							 cout << endl << info.fullname << "'s payment of " << info.payment << " was processed." << endl;
							 cout << "Running Total is $" << runningTotal;
                       }
                       break;
        }
        cout << endl << endl 
			 << "Please enter A to add a Customer,\n"
             << "P to process a Customer, or Q to quit.\n";
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

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
