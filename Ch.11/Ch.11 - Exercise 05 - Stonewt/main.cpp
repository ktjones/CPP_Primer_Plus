// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "header.h"
void display(const Stonewt & st, int n);
int main()
{
    //Stonewt incognito = 275; // uses constructor to initialize
    Stonewt incognito (0, 275, Stonewt::INTEGER);
	
	//Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt wolfe(0,285.7,Stonewt::FLOAT);
	
	//Stonewt taft(21, 8);
	Stonewt taft(21, 8, Stonewt::STONE);

    cout << "The celebrity weighed ";
    cout << incognito;
    cout << "The detective weighed ";
    cout << wolfe;
    cout << "The President weighed ";
    cout << taft;
    
	//incognito = 276.8;      // uses constructor for conversion
    incognito = Stonewt(0, 276.8, Stonewt::INTEGER);
	
	//taft = 325;             // same as taft = Stonewt(325);
    taft = Stonewt(0,325,Stonewt::INTEGER);
	
	cout << "After dinner, the celebrity weighed ";
    cout << incognito;
    cout << "After dinner, the President weighed ";
    cout << taft;
    
	display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(Stonewt(0,422,Stonewt::INTEGER), 2);
    cout << "No stone left unearned\n";
    // std::cin.get();
    
	// Added Operator Overloads
	Stonewt Sum1 = Stonewt(10,5,Stonewt::STONE);
	Stonewt Sum2 = Stonewt(11,3,Stonewt::STONE);

	Stonewt Diff1 = Stonewt(10,5,Stonewt::STONE);
	Stonewt Diff2 = Stonewt(11,3,Stonewt::STONE);

	Stonewt Mult1 = Stonewt(10,5,Stonewt::STONE);
	double Mult2 = 2.0;

	Stonewt Sum = Stonewt(0,0,Stonewt::STONE);
	Stonewt Diff = Stonewt(0,0,Stonewt::STONE);
	Stonewt Mult = Stonewt(0,0,Stonewt::STONE);

	Sum = Sum1 + Sum2;
	Diff = Diff2 - Diff1;
	Mult = Mult1 * Mult2;

	cout << endl;
	cout << "Adding 2 Stonewt Objects" << endl;
	cout << "Sum1: " << Sum1;
	cout << "Sum2: " << Sum2;
	cout << "Sum : " << Sum;

	cout << endl;
	cout << "Subtracting 2 Stonewt Objects" << endl;
	cout << "Diff1: " << Diff1;
	cout << "Diff2: " << Diff2;
	cout << "Diff : " << Diff;
	cout << endl;
	
	cout << endl;
	cout << "Multiplying a Stonewt by a number" << endl;
	cout << "Mult1: " << Mult1;
	cout << "Mult2: " << Mult2 << endl;
	cout << "Mult : " << Mult;
	cout << endl;

	system("PAUSE");
	
	return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        cout << st;
    }
}
