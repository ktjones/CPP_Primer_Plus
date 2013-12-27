// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;

#include "stonewt1.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);
	Stonewt test1(300.0);
	Stonewt test2(300.0);
	Stonewt test3(301.0);

    cout << "The celebrity weighed ";
    cout << incognito << endl;
    cout << "The detective weighed ";
    cout << wolfe << endl;
    cout << "The President weighed ";
    cout << taft << endl;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    cout << incognito << endl;
    cout << "After dinner, the President weighed ";
    cout << taft << endl;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    
	cout << endl << endl;
	cout << "Now to do some comparisons!!!" << endl;
	
	cout << "Incognito < Wolfe? ";
	if (incognito < wolfe)
	{
		cout << "Incognito";
	}
	else
	{
		cout << "Wolfe";
	}

	cout << endl;
	cout << "Wolfe > Taft? ";
	if (wolfe > taft)
	{
		cout << "Wolfe";
	}
	else
	{
		cout << "Taft";
	}

	cout << endl;
	cout << "Test1 == Test2 : ";
	if (test1 == test2)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}

	cout << endl;
	cout << "Test1 != Test3 : ";
	if (test1 != test3)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}

	cout << endl << endl;

	// std::cin.get();
    
	cout << endl << endl;
	system("PAUSE");

	return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        //cout << "Wow! ";
        //st.show_stn();

		cout << "Wow! " << endl;
        cout << double(st) << endl;  //the original displayed as stone/lbs, not just pounds.

    }
}
