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
#include <cstring>
#include "header_QueueTP.h"
#include "header_Worker.h"

using std::cin;
using std::cout;
using std::endl;
using std::strchr;

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
	const int SIZE = 5;
	const int qSIZE = 10;

	//*  Main Code
	
	Worker * lolas[SIZE];
	Worker * salol[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   lolas[ct] = new Waiter;
                        break;
            case 's':   lolas[ct] = new Singer;
                        break;
            case 't':   lolas[ct] = new SingingWaiter;
                        break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

	/*
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Bye.\n";
	*/

	// Beginning of Queue Portion

	QueueTP<Worker *> Todd(qSIZE);
	
	cout << endl << endl;
	cout << "Queue Stuff: " << endl;

	for (int i=0;i<ct;i++)
	{
		Todd.enqueue(lolas[i]);
	}

	for (int i=0;i<ct;i++)
	{
		Todd.dequeue(salol[i]);
	}

	for (int i=0;i<ct;i++)
	{
		salol[i]->Show();
	}

	cout << endl << endl;
	
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
